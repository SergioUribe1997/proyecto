#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include <iostream>

using namespace std;
template <class T, int arraySize = 1024>
class Cola
{
public:
    int frente;
    int final;
    T datos [arraySize];
    void inicializa();
    void enqueue(T e);
    void dequeue();
    void imprimir ();
    bool vacia();
    bool llena();
    T front();
};

template <class T, int arraySize>
void Cola<T, arraySize>::imprimir()
{
    for(int x = 0; x <final; x++)
    {
        cout << datos[x];
    }
    cout << endl;
}

template <class T, int arraySize>
void Cola<T, arraySize>::inicializa()
{
    frente = 0;
    final = 0;
}

template <class T, int arraySize>
bool Cola<T, arraySize>::vacia()
{
    if (frente = final+1)
    {
        return true;
    }
    else return false;
}

template <class T, int arraySize>
bool Cola<T, arraySize>::llena()
{
    if (frente = final + 2 or frente = 0 and final = 47 or frente = 1 and final = 48)
    {
        return true;
    }
    else return false;
}

template <class T, int arraySize>
void Cola<T, arraySize>::enqueue(T e)
{
    datos [final] = e;
    final ++;
}

template <class T, int arraySize>
void Cola<T, arraySize>::dequeue()
{
    frente = frente+1;
    if (frente = 49)
    {
        final = 0;
    };
}

template <class T, int arraySize>
T Cola<T, arraySize>::front()
{
    if(vacia())
    {
    } return datos[frente];
}





#endif // COLA_H_INCLUDED
