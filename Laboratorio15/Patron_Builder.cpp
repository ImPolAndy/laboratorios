#include <iostream>

using namespace std;

class Puertas
{
    public:
        string color;
};

class LLantas
{
    public:
        double tamaño;
};

class timon
{
    public:
        string color;
};

class asientos
{
    public:
        string color;
        string material;
};

class Motor
{
    public:
        int caballos_deFuerza;
};

class espejos
{
    public:
        int n_espejos;
};

class tipo
{
    public:
        string forma;
};

class Automovil
{
    public:
        Puertas* puertas;
        LLantas* llantas[4];
        Motor* motor;
        timon* _timon;
        asientos* _asientos;
        espejos* _espejos;
        tipo* _tipo;

        void caracteristicas()
        {
            cout<<"Color de puertas: "<<puertas->color<<"\n";
            cout<<"Color de timon: "<<_timon->color<<"\n";
            cout<<"Color de asientos: "<<_asientos->color<<"\n";
            cout<<"Material de asientos: "<<_asientos->material<<"\n";
            cout<<"Numero de espejos: "<<_espejos->n_espejos<<"\n";
            cout<<"Tipo: "<<_tipo->forma<<"\n";
            cout<<"Caballos de fuerza: "<<motor->caballos_deFuerza<<"\n";
            cout<<"Tamaño de llantas: "<<llantas[0]->tamaño<<"\n";
        }
};

class Builder
{
    public:
        virtual Puertas* getPuertas() = 0;
        virtual LLantas* getLlantas() = 0;
        virtual timon* getTimon() = 0;
        virtual asientos* getAsientos() = 0;
        virtual Motor* getMotor() = 0;
        virtual espejos* getEspejos() = 0;
        virtual tipo* getTipo() = 0;
};

class FordBuilder : public Builder
{
    Puertas* getPuertas()
    {
        Puertas* puertas = new Puertas();
        puertas->color = "rojo";
        return puertas;
    }

    LLantas* getLlantas()
    {
        LLantas *llantas = new LLantas();
        llantas->tamaño = 20;
        return llantas;
    }

    timon* getTimon()
    {
        timon* _timon = new timon();
        _timon->color = "azul";
        return _timon;
    }

    asientos* getAsientos()
    {
        asientos* _asientos = new asientos();
        _asientos->color = "negro";
        _asientos->material = "cuero";
        return _asientos;
    }

    Motor* getMotor()
    {
        Motor* motor = new Motor();
        motor->caballos_deFuerza = 500;
        return motor;
    }

    espejos* getEspejos()
    {
        espejos* _espejos = new espejos();
        _espejos->n_espejos = 3;
        return _espejos;
    }

    tipo* getTipo()
    {
        tipo* _tipo = new tipo();
        _tipo->forma = "SEDAN";
        return _tipo;
    }

};

class Director
{
    Builder* builder;
    public:
        void setBuilder(Builder* nuevoBuilder)
        {
            builder = nuevoBuilder;
        }
    
        Automovil* getAutomovil()
        {
            Automovil* Auto = new Automovil();

            Auto->puertas = builder->getPuertas();

            Auto->llantas[0] = builder->getLlantas();
            Auto->llantas[1] = builder->getLlantas();
            Auto->llantas[2] = builder->getLlantas();
            Auto->llantas[3] = builder->getLlantas();
            
            Auto->_timon = builder->getTimon();

            Auto->_asientos = builder->getAsientos();

            Auto->motor = builder->getMotor();

            Auto->_espejos = builder->getEspejos();

            Auto->_tipo = builder->getTipo();

            return Auto;
        }
};

int main()
{
    Automovil* Auto;
    Director director;
    FordBuilder fordbuilder;

    cout<<"Ford"<<"\n";
    director.setBuilder(&fordbuilder);
    Auto = director.getAutomovil();
    Auto->caracteristicas();
    cout<<"\n";
    
    return 0;
}