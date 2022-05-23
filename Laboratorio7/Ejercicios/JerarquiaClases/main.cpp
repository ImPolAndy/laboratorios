#include "Ganso.h"
#include "Pato.h"
#include "Gallina.h"

using namespace std;

int main()
{
    cout<<"--------------<Definiendo Ave y ganso>------------\n";
    Ganso g(2,"grasna");
    g.ImprimirGanso();

    cout<<"--------------<Definiendo Ave y pato>------------\n";
    Pato p(2,"cua cua");
    p.ImprimirPato();

    cout<<"--------------<Definiendo Ave y gallina>------------\n";
    Gallina ga(2,"cacarea");
    ga.ImprimirGallina();

    return 0;
}
