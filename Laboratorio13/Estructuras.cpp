#include <stdlib.h>
#include "time.h"
#include <iostream>

using namespace std;

struct carta 
{
    int numero;
    char palo[7];
};

typedef carta Carta;
typedef char Palo[7];

void inicializarMazo(Carta m[], Palo p[]);
void barajar(Carta m[]);
void imprimir(Carta m[]);

void copiar(char a[], char b[], int largo)
{
    int i;
    for (i = 0; i < largo; i++)
        a[i] = b[i];

}
void inicializarMazo(Carta m[], Palo p[])
{
    int i;
    for(i = 0; i < 48; i++)
    {
        m[i].numero = (i % 12) + 1;
        copiar(m[i].palo, p[i / 12], 7);
    }
}

void barajar(Carta m[])
{
    int i, j;
    Carta temp;
    for(i = 0; i < 48; i++)
    {
        j = rand() % 48;
        temp = m[i];
        m[i] = m[j];
        m[j] = temp;
    }
}

void imprimir(Carta m[])
{
    int i, j;
    char c;
    for(i = 0; i < 48; i++)
    {
        printf(" %i de ", m[i].numero);
        printf(" %s ", m[i].palo);
        printf("\n");
    }
}

int main()
{
    struct fecha
    {
        /* data */
        int dia;
        int mes;
        int anio;
        int dia_del_anio;
        char nombre_mes[9];
    }f0;

    struct persona
    {
        /* data */
        char nombre[10];
        char inicial;
        int edad;
        float nota;
    };

    f0 = {20,6,2022,100};
    fecha f1 = {31,10,2020,100,"Jun"};
    struct persona p1 = {"Juan",'J',19,18};
    cout << "El mes con f0 es " << f0.mes << endl;
    cout << "El mes con f1 es " << f1.mes << endl;
    cout << "El nombre p1 es " << p1.nombre << endl;
    cout << p1.nombre << endl;

    cout<<"<======Barajar cartas======>"<<"\n";
    Carta mazo[48];
    Palo p[4] = { "\copa","\oro", "\espada","\basto" };
    srand(time(NULL));
    inicializarMazo(mazo, p);
    barajar(mazo);
    imprimir(mazo);
    system("PAUSE");
    return 0;
}


