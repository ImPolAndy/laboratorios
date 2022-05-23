#include "ClaseDisco.h"
#include <iostream>

using namespace std;

Disco::Disco(double _capacidad, string _tipo_capacidad,int N_canciones, int N_videos, string gen_canciones, string tip_videos ) : Multimedia(N_canciones,N_videos,gen_canciones,tip_videos)
{
    capacidad = _capacidad;
    tipo_capacidad = _tipo_capacidad;
    Multimedia(N_canciones,N_videos,gen_canciones,tip_videos);
}

void Disco::ImprimirDisco()
{
    cout<<"La capacidad el disco es: "<<capacidad<<" "<<tipo_capacidad<<"\n";
    ImprimirMultimedia();
}

Disco::~Disco()
{
    
}