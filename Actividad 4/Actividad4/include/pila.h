#ifndef PILA_H
#define PILA_H
class PilaException : std::exception { //las class ListException "hereda" parametros de std::exception
    private:
            std::string msg;

    public:
           explicit PilaException(const char* message) : msg(message){}
           explicit PilaException(const std::string& message) : msg(message){}
           virtual ~PilaException() throw (){}
           virtual const char* what() const throw () {return msg.c_str();}

};

template <class T, int arraySize = 1024>
class Pila
{
public:
    T data[arraySize];
    int tope;
    void inicializa ();
    void push(const T& e);
    bool vacia();
    bool llena();
    T top();
    void pop();
private:
};

template <class T, int arraySize>
void Pila<T, arraySize>::inicializa()
{
    tope = -1;
}

template <class T, int arraySize>
void Pila<T, arraySize>::vacia()
{
    if (tope = -1)
    {
        return true;
    }
    else (return false);
}

template <class T, int arraySize>
void Pila<T, arraySize>::llena()
{
    if (tope = 49)
    {
        return true;
    }
    else (return false);
}

template <class T, int arraySize>
void Pila<T, arraySize>::push(const T& e)
{
    if(llena()){
        throw PilaException ("Esta llena");
    }
    tope++;
    data[tope]=e;
}

template <class T, int arraySize>
void Pila<T, arraySize>::pop()
{
    if (vacia()){
        throw PilaException ("No se encuentra ningun dato");
    }
    else(top--);
}

template <class T, int arraySize>
T Pila<T, arraySize>::top()
{
    if (vacia()){
        throw PilaException ("No se encuentra ningun dato");
    }
    else(return datos[tope]);
}


#endif // PILA_H
