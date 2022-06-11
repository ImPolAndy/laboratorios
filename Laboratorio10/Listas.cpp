#include "Listas.h"
#include "time.h"
#include <iostream>

using namespace std;

Lista::Lista()
{
    num_nodos = 0;
    inicio = NULL;
}

void Lista::Agregar_inicio(int _dato)
{
    Nodo *nuevo_nodo = new Nodo(_dato);
    Nodo *tmp = inicio;

    if (!inicio)
    {
        /* code */
        inicio = nuevo_nodo;
    }
    else
    {
        nuevo_nodo->siguiente = inicio;
        inicio = nuevo_nodo;

        while (tmp)
        {
            /* code */
            tmp = tmp->siguiente;
        }
    }
    num_nodos++;
}

void Lista::Agregar_final(int _dato)
{
    Nodo *nuevo_nodo = new Nodo(_dato);
    Nodo *tmp = inicio;

    if (!inicio)
    {
        /* code */
        inicio = nuevo_nodo;
    }
    else
        {
            while (tmp->siguiente != NULL)
            {
                /* code */
                tmp = tmp->siguiente;
            }
        tmp->siguiente = nuevo_nodo;
        }
    num_nodos++;
}

void Lista::Eliminar()
{
    inicio->eliminar();
    inicio = 0;
}

void Lista::Agregar_por_teclado(int dimension)
{
    int elemento;
    for (int i = 0; i < dimension; i++)
    {
        /* code */
        cout<<"Ingresa un elemento "<<i+1<<"/n";
        cin>>elemento;
        Agregar_final(elemento);
    }
}

void Lista::eliminar_elemento(int _dato)
{
    Nodo *tmp = inicio;
    Nodo *tmp1 = inicio->siguiente;

    int i = 0;

    if (inicio->dato == _dato)
    {
        /* code */
        inicio = tmp->siguiente;
    }else
        {
            while (tmp1)
            {
                /* code */
                if (tmp1->dato == _dato)
                {
                    /* code */
                    Nodo *nodo_aux = tmp1;
                    tmp->siguiente = tmp1->siguiente;
                    delete nodo_aux;
                    i++;
                    num_nodos--;
                }
                tmp = tmp->siguiente;
                tmp1 = tmp1->siguiente;
            }
        }
    if (i == 0)
    {
        /* code */
        cout<<"No existe el dato "<<"/n";
    }
}

void Lista::eliminar_por_posicion(int pos)
{
    Nodo *tmp = inicio;
    Nodo *tmp1 = tmp->siguiente;

    if (pos < 1 || pos > num_nodos)
    {
        /* code */
        cout<<"Fuera de rango"<<"/n";
    }
    else if (pos == 1)
    {
        /* code */
        inicio = tmp->siguiente;
    }
    else
    {
        for (int i = 2; i < pos; i++)
        {
            if (i == pos)
            {
            Nodo *nodo_aux = tmp1;
            tmp->siguiente = tmp1->siguiente;
            delete nodo_aux;
            num_nodos--;
            }
        tmp = tmp->siguiente;
        tmp1 = tmp1->siguiente;
        }  
    }
}

void Lista::Agregar_random(int dimension)
{
    srand(time(NULL));
    for (int i = 0; i < dimension; i++)
    {
        /* code */
        Agregar_final(rand() % 100);
    }
}

void Lista::invertir()
{
    Nodo *previo = NULL;
    Nodo *siguiente = NULL;
    Nodo *tmp = inicio;

    while(tmp)
    {
        siguiente = tmp->siguiente;
        tmp->siguiente = previo;
        previo = tmp;
        tmp = siguiente;
    }
    inicio = previo;
}

void Lista::ordenar_asec_desc(int ord)
{
    cout<<"Ingresar (1) para ordenar ascendente /n";
    cout<<"Ingresar (2)para ordenar descendente /n";
    cin>>ord;

    if (ord == 1)
    {
        int dato_tmp;
        Nodo *nodo_aux = inicio;
        Nodo *tmp = nodo_aux;

        while (nodo_aux)
        {
            tmp = nodo_aux;

            while (tmp->siguiente)
            {
                tmp = tmp->siguiente;

                if (nodo_aux->dato > tmp->dato)
                {
                    dato_tmp = nodo_aux->dato;
                    nodo_aux->dato = tmp->dato;
                    tmp->dato = dato_tmp;
                }
            }
        }
        
    }
    else if (ord == 2)
    {
        invertir();
    }   
}

void Lista::imprimir()
{
    Nodo *tmp = inicio;
    if (!inicio)
    {
        /* code */
        cout<<"La lista esta vacia "<<"\n";
    }
    else
        {
            while (tmp)
            {
                tmp->imprimir();
                if (!tmp->siguiente)
                {
                    cout<<"NULL";
                    tmp = tmp->siguiente;
                }
            }
            cout<<"\n"<<"\n";
        }
}

Lista::~Lista()
{
    
}
