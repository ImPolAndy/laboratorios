#include "Cola.h"
#include <iostream>



int main()
{
    int menu;
    while (menu != 3)
    {
        cout<<"1. Funciones de cola "<<"\n";
        cout<<"2. Comparando edades en una cola "<<"\n";
        std::cin>>menu;

        if (menu == 1)
        {
            Cola *cola = new Cola();
            int opc;

            cout<<"<=========================>"<<"\n";
            while (opc!= 9)
            {
                cout<<"1. Insertar "<<"\n";
                cout<<"2. Eliminar "<<"\n";
                cout<<"3. Sacar dato del inicio "<<"\n";
                cout<<"4. Sacar dato final "<<"\n";
                cout<<"5. Ver tamaño "<<"\n";
                cout<<"6. Buscar un dato "<<"\n";
                cout<<"7. Vaciar cola "<<"\n";
                cout<<"8. Mostar cola"<<"\n";
                cout<<"9. Salir "<<"\n";

                cout<<"\n";
                cout<<"Escoja una opcion: ";
                std::cin>>opc;
                system("cls");

                switch (opc)
                {
                case 1:
                {   
                    int dato; 
                    cout<<"Ingresar el dato: ";
                    std::cin>>dato;
                    cola->insertar_nodo(dato);
                    break;
                }

                case 2:
                {    
                    if (cola->esta_vacia())
                    {
                        cout<<"la cola se encuentra vacia "<<"\n";   
                    }
                    else
                    {
                        int dato = cola->eliminar();
                        cout<<"El dato "<<dato<<" ha sido eliminado \n";
                    }    
                    break;
                }

                case 3:
                {   
                    if(cola->esta_vacia())
                    {
                        cout<<"la cola se encuentra vacia "<<"\n";   
                    }
                    else
                    {
                        int dato_inicio = cola->obtener_inicio(); 
                        cout<<"El dato del inicio es :"<<dato_inicio<<"\n";
                        break;
                    }
                }

                case 4:
                {    
                    if(cola->esta_vacia())
                    {
                        cout<<"la cola se encuentra vacia "<<"\n";   
                    }
                    else
                    {
                        int dato_fin = cola->obtener_fin(); 
                        cout<<"El dato del inicio es :"<<dato_fin<<"\n";
                    }
                    break;
                }

                case 5:
                {    
                    int tamaño = cola->obtener_tamaño();
                    cout<<"El tamaño de la cola es: "<<tamaño<<"\n";   
                    break;
                }

                case 6:
                {    
                    if(cola->esta_vacia())
                    {
                        cout<<"la cola se encuentra vacia "<<"\n";   
                    }
                    else
                    {
                        int dato;
                        cout<<"Ingrese un dato para buscar en la cola: "<<"\n";
                        std::cin>>dato;
                        cola->buscar_dato(dato);
                    }
                    break;
                }

                case 7:
                {    
                    if(cola->esta_vacia())
                    {
                        cout<<"la cola se encuentra vacia "<<"\n";   
                    }
                    else
                    {
                        int eliminados = cola->vaciar();
                        cout<<eliminados<<" elementos fueron eliminados "<<"\n";
                    }
                    break;
                }

                case 8:
                {
                    if(cola->esta_vacia())
                    {
                        cout<<"la cola se encuentra vacia "<<"\n";   
                    }
                    else
                    {
                        cout<<"Elementos en la cola: "<<"\n";
                        cola->mostrar_cola();
                    }
                    break;
                }
                }
            }
        }
        else if (menu == 2)
        {
            system("cls");
            char g;
            int num_edades;
            Cola *hombres = new Cola();
            Cola *mujeres = new Cola();
            cout<<"Escoja el numero de edades que desea ingresar: "<<"\n";
            cin>>num_edades;
            system("cls");
            for (int i = 0; i < num_edades; i++)
            {  
                cout<<"Escoja el genero: "<<"\n";
                cout<<"M masculino "<<"\n";
                cout<<"F femmenino "<<"\n";
                cin>>g;
                if (g == 'M')
                {
                    int edades;
                    cout<<"Ingrese la edad: "<<"\n";
                    std::cin>>edades;
                    hombres->insertar_nodo(edades);
                    
                }
                else if (g == 'F')
                {
                    int edades;
                    cout<<"Ingrese la edad: "<<"\n";
                    std::cin>>edades;
                    mujeres->insertar_nodo(edades);
                }
                
            }
            hombres->comparar();
            mujeres->comparar();
            hombres->mostrar_cola();
            mujeres->mostrar_cola();

        }
        
    }

    std::cin.get();
    std::cin.get();
}