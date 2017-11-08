#ifndef NODO_H
#define NODO_H
#include <iostream>

using namespace std;

template <class T>
class Nodo
{
private:
    T value;
    Nodo *next;
public:
    Nodo(){}
    Nodo(T a, Nodo <int> *ptr = NULL){
        value = a;
        next = ptr;
    }
    ~Nodo();
};

#endif // NODO_H
