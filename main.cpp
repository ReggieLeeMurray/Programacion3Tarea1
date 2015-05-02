#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    int s=a+b;
    return s;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    int r=a-b;
    return r;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    int m=a*b;
    return m;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    int d=a/b;
    return d;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if (a>b)
    return a;
        else
    return b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if (a<b)
    return a;
        else
    return b;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    int t, r;

    if (a>b)
    t=a;
    else
    t=b;

    if (t>c)
    r=t;
        else
    r=c;
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
   arreglo [posicion]=valor;
}


//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    int v;
    v=arreglo [posicion];

}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int temp;
    temp=arreglo[0];

    for (int i=0; i<tamano-1; i++)
    {
    if (temp<arreglo [i+1])
    {temp=arreglo[i+1];}
    else
    {temp=temp;}
    }

    return temp;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int temp;
    temp=arreglo[0];

    for (int i=0; i<tamano-1; i++)
    {
    if (temp>arreglo [i+1])
    {temp=arreglo[i+1];}
    else
    {temp=temp;}
    }

    return temp;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{

    int temp = 0, pro=0;

    for (int i=0; i<tamano; i++)
    {
        temp=temp+arreglo[i];
    }

    pro=temp/tamano;

}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
