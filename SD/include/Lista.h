#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <iostream>

class Lista : public Nodo{
public:
    int tam;
    Nodo<int>*Head;
    Nodo<int>*Body;
    Lista(){}
    Lista(int tama){
        tam = tama;
    }
    void crear(){
        int a;
        cin>> a;
        Head = new Nodo<int>(a);
        int i = 1;
        while(i < tam){
        }
    }

};

#endif // LISTA_H
