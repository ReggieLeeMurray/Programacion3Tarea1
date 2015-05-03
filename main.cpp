#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    int s=a+b; //creo la variable cuyo objetivo es sumar los numeros ingresados
    return s; //devuelve la adicion
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    int r=a-b; //creo la variable cuyo objetivo es restar los numeros ingresados
    return r; //devuelve la sustraccion
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    int m=a*b; //creo la variable cuyo objetivo es multiplicar los numeros ingresados
    return m; //devuelve el producto
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    int d=a/b; //creo la variable cuyo objetivo es dividir los numeros ingresados
    return d; //devuelve el cociente
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if (a>b) //creo un ciclo en el que pregunta si el 1er numero es mayor que el 2do y devuelva el mayor de ambos
        return a;
    else
        return b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if (a<b) //creo un ciclo en el que pregunta si el 1er numero es menor que el 2do y devuelva el menor de ambos
        return a;
    else
        return b;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    int t, r; //aperturo 2 variables temporales

    if (a>b) //evaluo los primeros 2 numeros y guardo el valor del mayor en 1 variable temporal
        t=a;
    else
        t=b;

    if (t>c) //evaluo el valor de la variable temporal recien utilizada con el tercer numero y guardo el mayor de ambos en la segunda variable temporal
        r=t;
    else
        r=c;
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo [posicion]=valor; //asigno un valor a una posicion especifica de un arreglo
}


//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    int v;
    v=arreglo [posicion];  //guardo el valor de una poscion especifica del arreglo en la variable v

}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int temp; //creo una variable temporal
    temp=arreglo[0]; //le asigno el valor de la primera posicion del arrreglo

    for (int i=0; i<tamano-1; i++)
    {
        if (temp<arreglo [i+1]) //comparo la variable temporal vs siguiente posicion del arreglo y guardo el mayor de ambos en temp hasta terminar de revisar todos los valores del arreglo.
        {
            temp=arreglo[i+1];
        }
    }
    return temp; //obtengo el mayor numero guardado en el arreglo
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int temp; //creo una variable temporal
    temp=arreglo[0]; //le asigno el valor de la primera posicion del arrreglo

    for (int i=0; i<tamano-1; i++) //comparo la variable temporal vs siguiente posicion del arreglo y guardo el menor de ambos en temp hasta terminar de revisar todos los valores del arreglo.
    {
        if (temp>arreglo [i+1])
        {
            temp=arreglo[i+1];
        }
        else
        {
            temp=temp;
        }
    }

    return temp; //obtengo el menor numero guardado en el arreglo
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{

    int temp = 0, pro=0; //apertura de variables

    for (int i=0; i<tamano; i++)
    {
        temp=temp+arreglo[i]; //se suma cada valor en el registro al recorrer todas las posiciones
    }

    pro=temp/tamano; //el gran total sumado se divide entre el numero de valores sumados para obtener el promedio final.

}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
