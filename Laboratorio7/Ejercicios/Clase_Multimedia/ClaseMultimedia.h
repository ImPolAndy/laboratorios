#pragma once
#include <iostream>

using namespace std;

class Multimedia
{
    private:
        int Num_canciones,Num_videos;
        string tipo_videos;
        string genero_canciones;

    public:
        Multimedia(int, int, string, string);
        void ImprimirMultimedia();
        ~Multimedia();
};