#include "ClaseMultimedia.h"
#include <iostream>

using namespace std;

Multimedia::Multimedia(int _Num_canciones, int _NUm_videos, string _genero_canciones, string _tipo_videos)
{
    Num_canciones = _Num_canciones;
    Num_videos = _NUm_videos;
    genero_canciones = _genero_canciones;
    tipo_videos = _tipo_videos;
}

void Multimedia::ImprimirMultimedia()
{
    cout<<"Total del canciones: "<<Num_canciones<<"\n";
    cout<<"Total de videos: "<<Num_videos<<"\n";
    cout<<"genero: "<<genero_canciones<<"\n";
    cout<<"tipo de videos: "<<tipo_videos<<"\n";
}

Multimedia::~Multimedia()
{
    
}