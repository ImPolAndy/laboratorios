#include "Punto.h"
#include "Forma.h"
#include "Rectangulo.h"
#include "Eclipse.h"
#include "Cuadrado.h"
#include "Circulo.h"


void Def_formas(Forma* A[4])
{
    Rectangulo* r1 = (Rectangulo*)A[0];
    Eclipse* e1 = (Eclipse*)A[1];
    Cuadrado* c1 = (Cuadrado*)A[2];
    Circulo* d1 = (Circulo*)A[3];


    for (int i = 0; i < 4; i++)
    {
        A[i]->cambiar_color("rojo");
        A[i]->Mover_forma(7.1,3.1);
        A[i]->ImprimirForma();
    }
    
}

double Area_maxima(Forma* a[4])
{
    double _AreaMaxima = 0;
    double Areas[4];
    for (int i = 0; i < 4; i++)
    {
        /* code */
        Areas[i]= a[i]->area();
        if (Areas[i] > _AreaMaxima)
        {
            /* code */
            _AreaMaxima = Areas[i];
        }
    }

    return _AreaMaxima;

}


int main()
{
    Rectangulo r("rojo", 5.4, 3.7,"Rectangulo",7,3);
    r.ImprimirForma();
    r.Obtener_color();
    r.cambiar_color("azul");

    cout<<"\n"<<"-----------"<<"\n"<<"<Cambiando el color>\n"<<"-----------"<<"\n";
    r.ImprimirForma();
    
    cout<<"\n"<<"-----------"<<"\n"<<"<Moviendo el centro>"<<"\n"<<"---------"<<"\n";
    r.Mover_forma(7.3,10.5);
    r.ImprimirForma();
    
    cout<<"\n"<<"-----------"<<"\n"<<"<Calculando el area>"<<"\n"<<"---------"<<"\n";
    cout<<r.area(); 
    
    cout<<"\n"<<"-----------"<<"\n"<<"<Calculando el perimetro>"<<"\n"<<"---------"<<"\n";
    cout<<r.perimetro();
    
    cout<<"\n"<<"-----------"<<"\n"<<"<Cambiando el tamaño>"<<"\n"<<"---------"<<"\n";
    r.Cambiar_tamaño(2);
    r.ImprimirForma();
    
    cout<<"\n"<<"-----------"<<"\n"<<"<Definiendo la clase Ecplipse>"<<"\n"<<"---------"<<"\n";
    Eclipse e("amarillo",3.5,7.5,"Eclipse", 15.3, 7.5);
    e.ImprimirForma();
    
    cout<<"\n"<<"-----------"<<"\n"<<"<Area de la Eclipse>"<<"\n"<<"---------"<<"\n";
    cout<<e.area();
    
    cout<<"\n"<<"-----------"<<"\n"<<"<Definiendo la clase Cuadrado>"<<"\n"<<"---------"<<"\n";
    Cuadrado c("verde", 2.2, 4.7, "Cuadrado",3);
    c.ImprimirForma();
    
    cout<<"\n"<<"-----------"<<"\n"<<"<Area del cuadrado>"<<"\n"<<"---------"<<"\n";
    cout<<c.area();
    
    cout<<"\n"<<"-----------"<<"\n"<<"<Definiendo la clase Circulo>"<<"\n"<<"---------"<<"\n";
    Circulo d("anaranjado",5.3, 3, "Circulo", 5.7);
    d.ImprimirForma();
    
    cout<<"\n"<<"-----------"<<"\n"<<"<Area del cuadrado>"<<"\n"<<"---------"<<"\n";
    cout<<d.area();

    cout<<"\n"<<"-----------"<<"\n"<<"<Vector de punteros Forma,cambio mismo color, cambio misma poscicion>"<<"\n"<<"---------"<<"\n";
    
    Forma* A[4];
    Forma* r1 = new Rectangulo("plomo", 5.5, 3.4, "Rectangulo", 4, 3.5); 
    Forma* e1 = new Eclipse("morado", 2.7, 4.6, "Eclipse", 7, 3);
    Forma* c1 = new Cuadrado("blanco", 5.3, 3.3, "Cuadrado", 5); 
    Forma* d1 = new Circulo("azul", 3.2, 7, "Circulo", 7.5);

    A[0]= r1;
    A[1]= e1;
    A[2]= c1;
    A[3]= d1;
    Def_formas(A);

    cout<<"\n"<<"-----------"<<"\n"<<"<Hallando el area maxima del vector formas>"<<"\n"<<"---------"<<"\n";
    cout<<"Area del rectangulo: "<<A[0]->area()<<"\n";
    cout<<"Area de la eclipse: "<<A[1]->area()<<"\n";
    cout<<"Area del cuadrado: "<<A[2]->area()<<"\n";
    cout<<"Area del Circulo: "<<A[3]->area()<<"\n";
    cout<<"El Area maxima del vector de formas es: "<<Area_maxima(A);
    return 0;

}


