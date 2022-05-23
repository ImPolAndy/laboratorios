#pragma once
#include "ClaseBase.h"

class ClaseDerivada : public ClaseBase
{
    private:
        int valor3;
        int valor4;
    public:
        ClaseDerivada(int,int);
        ~ClaseDerivada();
    void UnMetodoClaseDerivada();
};

