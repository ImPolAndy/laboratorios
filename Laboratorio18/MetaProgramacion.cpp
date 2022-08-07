#include <iostream>

using namespace std;

template <int n>
struct Suma_Digitos
{
    enum { value = n % 10 + Suma_Digitos<n/10>::value};
};

template <>
struct Suma_Digitos <0>
{
    enum {value = 0};
};


template <int n>
struct Fibonacci
{
    enum { value = Fibonacci<n-1>::value + Fibonacci<n-2>::value};
};

template <>
struct Fibonacci <2>
{
    enum {value = 1};
};

template <>
struct Fibonacci <1>
{
    enum {value = 1};
};


template <int n, int m>
struct Potencia
{
    constexpr static const long long value = n* Potencia<n,m-1>::value;
};
 
template <int n>
struct Potencia<n,0>
{
    constexpr static const long long value = 1;
};


template<int N> 
struct Dec_A_Hex 
{ 
    static const char value = 16*Dec_A_Hex<N/16>::value + (N%16); 
};

template<> 
struct Dec_A_Hex<0> 
{ 
    static const char value = 0; 

};


template <int n>
struct Dec_Binario
{
    enum { value = (Dec_Binario<n/2>::value)%2};
};

template <>
struct Dec_Binario <0>
{
    enum {value = 0};
};

int main()
{
    int x = Suma_Digitos<254>::value;
    int p = Potencia<2,8>::value;
    int f = Fibonacci<3>::value;
    int d = Dec_Binario<1245>::value; 
    int hex = Dec_Binario<45>::value;
    cout<<"La suma de digitos es: "<<x<<"\n";
    cout<<"El valor de la poscicion fibonacci es: "<<f<<"\n";
    cout<<"La potencia es: "<<p<<"\n";
    cout<<"EL numero decimal en hexadecimal es: "<<hex<<"\n";
    cout<<"El numero en binario es: "<<d<<"\n";
    return 0;
}


