#include "Pila.h"
#include <iostream>

void llenar_pila(Pila &_inicio, int _num_discos)
{
    for (int i = _num_discos; i > 0; i--)
    {
        _inicio.insertar_dato(i);
    }
    
}

void mover_discos(Pila &_inicio, Pila &_auxiliar, Pila &_final)
{
    int tmp;
    int Disco = _inicio.eliminar();
    _auxiliar.insertar_dato(Disco);
    
}

void Imprimir_torres(Pila _pila, int _num_discos)
{
     for (int i = _num_discos; i > 0; i--)
    {
        cout<<" * \n";
        for (int j = 0; j < i; j++)
        {
        cout<<"*\n";
        }
    }
    
}

int main()
{
     Pila inicio, auxiliar, final; 

    int num_discos;
    cout<<"\n Ingrese el numero de discos: ";
    std::cin>>num_discos;
    llenar_pila(inicio, num_discos);
    inicio.mostrar();
    Imprimir_torres(inicio,num_discos);

    Pila *pila = new Pila();
    int opc = 0;

    cout<<"\n";
    while (opc != 7)
    {
        cout<<"1. Insertar "<<"\n";
        cout<<"2. Eliminar "<<"\n";
        cout<<"3. Buscar "<<"\n";
        cout<<"4. Mostrar "<<"\n";
        cout<<"5. Mostrar tope "<<"\n";
        cout<<"6. vaciar "<<"\n";
        cout<<"7. Torres de Hanoi "<<"\n";
        cout<<"8. Salir "<<"\n";
        
        cout<<"\n";
        cout<<"Elija una opcion: ";
        std::cin>>opc;

        switch (opc)
        {
            case 1:
            {
                int dato;
                cout<<"Ingrese un dato: ";
                cin>>dato;

                pila->insertar_dato(dato);
                break;
            }

            case 2:
            {
                if (pila->esta_vacia())
                {
                    cout<<"La pila esta vacia\n";
                }
                else
                {
                    int dato_eliminado = pila->eliminar();
                    cout<<"Dato eliminado: "<<dato_eliminado<<"\n";
                }
                break;
            }

            case 3:
            {
                if (pila->esta_vacia())
                {
                    cout<<"La pila esta vacia\n";
                }
                else
                {
                    int dato;
                    cout<<"Ingrese un dato para ser buscado: ";
                    cin>>dato;

                    pila->buscar_dato(dato);   
                }
                break;
            }

            case 4:
            {
                if (pila->esta_vacia())
                {
                    cout<<"La pila esta vacia\n";
                }
                else
                {
                    cout<<"Elemento en la pila: \n";
                    pila->mostrar();
                }
                break;
            }

            case 5:
            { 
                if (pila->esta_vacia())
                {
                    cout<<"La pila esta vacia\n";
                }
                else
                {
                    int tope = pila->obtener_tope();
                    cout<<"El tope es: "<<tope<<"\n";
                }
                break;
            }

            case 6:
            {
                if (pila->esta_vacia())
                {
                    cout<<"La pila esta vacia\n";
                }
                else
                {
                    int eliminados = pila->vaciar();
                    cout<<"Datos eliminados: "<< eliminados<<"\n";
                }   
                break;
            }
        }
    }

    cin.get();
    cin.get();
    return 0;
}