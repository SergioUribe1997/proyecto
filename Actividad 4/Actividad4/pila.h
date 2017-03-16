#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include <iostream>

using namespace std;
class PilaException : std::exception   //las class ListException "hereda" parametros de std::exception
{
private:
    std::string msg;

public:
    explicit PilaException(const char* message) : msg(message) {}
    explicit PilaException(const std::string& message) : msg(message) {}
    virtual ~PilaException() throw () {}
    virtual const char* what() const throw ()
    {
        return msg.c_str();
    }

};

template <class T, int arraySize = 1024>
class Pila
{
public:
    T data[arraySize];
    int r [50];
    int inde [50];
    int tope;
    void inicializa ();
    void imprimir ();
    void push(T e);
    bool vacia();
    bool llena();
    T top();
    void pop();
    void separar();
private:
};

template <class T, int arraySize>
void Pila<T, arraySize>::separar()
{
    for(int i = 0; i <tope; i++)
    {
        if (data[i] == '+' or data[i] == '-')
        {
            r [i]= 1;
        }
        else if (data[i] == '*' or data[i] == '/')
        {
            r [i]= 2;
        }
        else if (data[i] == '^')
        {
            r [i]= 3;
        }
        else r[i] = 0;
    }
}

template <class T, int arraySize>
void Pila<T, arraySize>::imprimir()
{
    for(int i = 0; i <= tope; i++)
    {
        if(r[i] == 0)
        {
            cout << data[i];
        }
        else if (r[i]==3)
        {
            inde[i]=i;
        }
        else if (r[i]==2)
        {
            for(int y = 0; y<=tope; y++)
            {
                if(inde[y]!= -1)
                {
                    cout << data[y];
                    inde[y]=-1;
                }
            }

        }
        else if(r[i]==1)
        {
            for(int p = 0; p<=tope; p++)
            {
                if(inde[p]!= -1)
                {
                    cout << data[p];
                    inde[p]=-1;
                }
            }

        }

    }
    cout << "+";
    cout << endl;
}

template <class T, int arraySize>
void Pila<T, arraySize>::inicializa()
{
    tope = -1;
    for(int g=0; g<50; g++)
    {
        inde [g]=-1;
    }
}

template <class T, int arraySize>
bool Pila<T, arraySize>::vacia()
{
    if (tope = -1)
    {
        return true;
    }
    else return false;
}

template <class T, int arraySize>
bool Pila<T, arraySize>::llena()
{
    if (tope = 49)
    {
        return true;
    }
    else return false;
}

template <class T, int arraySize>
void Pila<T, arraySize>::push(T e)
{
    tope ++;
    data[tope] = e;

}

template <class T, int arraySize>
void Pila<T, arraySize>::pop()
{
    if (vacia())
    {
        throw PilaException ("No se encuentra ningun dato");
    }
    else(top--);
}

template <class T, int arraySize>
T Pila<T, arraySize>::top()
{
    if (vacia())
    {
        throw PilaException ("No se encuentra ningun dato");
    }
    else return data[tope];
}



#endif // PILA_H_INCLUDED
