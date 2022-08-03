#include <iostream>

using namespace std;

template <typename T>
class Calculadora
{
    public:
        T Calcular(T x, char oper, T y)
        {    
            switch(oper)
            {
                case '+':
                    return x + y;
                    break;
                case '-' :
                    return x - y;
                    break;
                case '*' :
                    return x*y;
                    break;
                case '/' :
                    return x/y;
                    break;
                default:
                    return 0;
            }
        }
};

template <typename Tbase>
class ArbolBinario
{       
    private:
        struct nodo
        {
            Tbase etiqueta;
            struct nodo *izqda;
            struct nodo *drcha;
            struct nodo *padre;

        };

        struct nodo *raiz;
        int nelementos;

    public:
        typedef struct nodo *inico;
           ArbolBinario();

           ArbolBinario (const ArbolBinario<Tbase>& v);

           Arbolbinario<Tbase>& operator = (const Arbolbinario<Tbase> &v);

           bool insertar(const Tbase& e);

           ~ArbolBinario);
};

template <class Tbase>

bool ArbolBinario<Tbase>::insertar(const Tbase& e)
{     

    bool fin,dev;
    nodo *p;

    if (raiz==0)
    {
        raiz = new nodo;
        raiz->padre= raiz->izqda= laraiz->drcha= 0;
        raiz->etiqueta= e;
        nelementos++;
        return true;
    }
    else {
            p= laraiz;
            fin=false;
            while (!fin)
            {
                if(e<p->etiqueta)
                {
                    if(p->izqda==0)
                    {
                        p->izqda= new nodo;
                        p->izqda->padre=p;
                        p=p->izqda;
                        p->drcha= p->izqda= 0;
                        fin=true;
                        dev= true;
                    }
                    else p= p->izqda;

                }
               else if (p->etiqueta<e)
                {
                    if (p->drcha==0)
                    {
                        p->drcha= new nodo;
                        p->drcha->padre=p;
                        p=p->drcha;
                        p->drcha= p->izqda= 0;
                        fin=true;
                        dev= true;
                    }
                    else p= p->drcha;
                }
                else {
                        fin=true;
                        dev=false;
                }
            }
            p->etiqueta= e;
            if(dev)
            {
                nelementos++;
                return dev;
              }
    }
}

int main()
{
    int a = 3;
    int b = 7;
    int resulatdo;

    double x = 5.3;
    double y = 2.7;
    double resultado_1;

    char oper = '+';

    cout<<"Calculadora Simple "<<"\n";
    cout<<"Ingrese la operacion desadada: a+b | a*b | a/b"<<"\n";

    Calculadora <int> c;
    cin>>oper;
    resulatdo = c.Calcular(a,oper,b); 
    cout<<"El resultado es: "<<resulatdo<<"\n";   
        
    Calculadora <double> c1;
    resultado_1 = c1.Calcular(x,oper,y);
    cout<<"El resultado es: "<<resultado_1<<"\n";     
        
    return 0;
}