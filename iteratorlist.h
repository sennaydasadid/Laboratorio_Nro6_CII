#ifndef ITERATOR_H
#define ITERATOR_H
#include <iostream>
#include "gen_node.h"
using namespace std;

template<typename T>
class Iterator{
private:
    Node<T>* it;
public:
    Iterator(Node<T>*);
    void operator++(Node<T>*nodo){
        return it=it->acceso_nodo();
    }
    void operator=(Node<T>*nodo){
        return it=nodo;
    }
    void operator==(Node<T>*nodo){
        return it==nodo; 
    }
};

#endif
