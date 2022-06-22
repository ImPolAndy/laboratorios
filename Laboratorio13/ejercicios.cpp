#include <iostream>

using namespace std;


struct fecha
{
    /* data */
    int dia;
    int mes;
    int anio;
    char nombre_mes[9];
};

struct persona
{
    char Nombre[15];
    int edad;
    fecha cumpleanios;
}prsna[20];

void Cumple_este_mes(persona companieros[10])
{
    for(int i = 0; i < 10; i++)
    {
        /* code */
        if(companieros[i].cumpleanios.mes == 6 || companieros[i].cumpleanios.nombre_mes == "junio"  )
        {
            cout<<companieros[i].Nombre<<" Si cumple anios este mes\n";
        }
        else
        {
            cout<<companieros[i].Nombre<<" No cumple anios este mes\n";
        }
    }
    
}

struct alumno
{
    char nombre[10];
    char grupo;
    double N_1Fase;
    double N_2Fase;
    double N_3Fase;
    double Proyecto_final;
    double Nota_final;
};

typedef alumno Alumnos;

void Nota_final(Alumnos _alumnos[], int n_alumnos)
{
    cout<<"Ingrese la cantidad de alumnos: \n";
    cin>>n_alumnos;
    for (int i = 0; i < n_alumnos; i++)
    {
        fflush(stdin);
        cout<<"\n Ingrese el nombre: \n"; cin>>_alumnos[i].nombre; 
        cout<<"Ingrese la nota: \n";
        cout<<"primera fase: "; cin>>_alumnos[i].N_1Fase;
        cout<<"segunda fase: "; cin>>_alumnos[i].N_2Fase;
        cout<<"tercera fase: "; cin>>_alumnos[i].N_3Fase;
        cout<<"proyecto final: "; cin>>_alumnos[i].Proyecto_final;
        _alumnos[i].Nota_final = (_alumnos[i].N_1Fase *15/100) + (_alumnos[i].N_2Fase * 20/100) + (_alumnos[i].N_3Fase *25/100) + (_alumnos[i].Proyecto_final *40/100);
        cout<<"La nota final del alumno "<<_alumnos[i].nombre<<" es "<<_alumnos[i].Nota_final;
    }
}

struct jugadores
{
    char nombre[15];
    int edad;
    double talla;   
};

void Menores20_talla170(jugadores j[], int num_jugadores)
{
    cout<<"Ingrese la cantidad de jugadores: \n";
    cin>>num_jugadores;
    for (int i = 0; i < num_jugadores; i++)
    {
        fflush(stdin);
        cout<<"Ingrese el nombre: \n";
        cin>>j[i].nombre;

        cout<<"Ingrese la edad: \n";
        cin>>j[i].edad;

        cout<<"Ingrese la talla: \n";
        cin>>j[i].talla;

        if (j[i].edad > 20 && j[i].talla <1.70)
        {
            cout<<"jugadores menores de 20 con talla mayor a 1,70 "<<j[i].nombre;
        }
    }
    
}

struct empleados
{
    char nombre[15];
    char sexo;
    double sueldo;
}emp[100];



int main()
{
    fecha f1 = {9,6,1992};
    persona p1 = {"Rodolfo",28,f1};
    struct persona p2 = {"Rodrigo",20,15,06,2001,"Junio"};
    struct persona p3 = {"Cristian",22,10,10,2000};
    struct persona p4 = {"Julio",15,15,07,1997};
    struct persona p5 = {"Jesus",25,28,06,1994};
    struct persona p6 = {"Diego",26,29,01,2005};
    struct persona p7 = {"Rocio",23,06,06,2010,"Junio"};
    struct persona p8 = {"Yaritza",27,30,12,2002};
    struct persona p9 = {"Rafaela",18,11,06,1995};
    struct persona p10 = {"Hugo",30,03,06,2012,"Junio"};
    
    //persona *companieros = new persona[10];
    persona companieros[]= {p1,p2,p3,p4,p5,p6,p7,p8,p9,p10};
    Cumple_este_mes(companieros);

    cout<<"\n";
    int n_alumnos;
    alumno *Alumnos = new alumno[n_alumnos];
    Nota_final(Alumnos,n_alumnos);

    cout<<"\n";
    int num_jugadores;
    jugadores *_jugadores = new jugadores[num_jugadores];
    Menores20_talla170(_jugadores,num_jugadores); 

    cout<<"\n";
    int n_empleados,posM=0,posm=0;
    double mayor=0, menor= 1000; 

    cout<<"\n";
    cout<<"Ingrese el numero de empleados: ";
    cin>>n_empleados;

    for (int i = 0; i < n_empleados; i++)
    {
        fflush(stdin);
        cout<<i+1<<"Ingrese el nombre: ";
        cin.getline(emp[i].nombre,15,'\n');
        cout<<i+1<<"Digite su sueldo: ";
        cin>>emp[i].sueldo;
        
        if (emp[i].sueldo > mayor)
        {
            mayor = emp[i].sueldo;
            posM = i;
        }

        if (emp[i].sueldo < menor)
        {
            menor = emp[i].sueldo;
            posm = i;
        }
        cout<<"\n";
    }
    
    cout<<"Empleado con mayor sueldo: \n";
    cout<<emp[posM].nombre<<"\n";
    cout<<emp[posM].sueldo<<"\n";

    cout<<"Empleado con menor sueldo: \n";
    cout<<emp[posm].nombre<<"\n";
    cout<<emp[posm].sueldo<<"\n";
    return 0;
}