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
        
        Iterator(Node<T>* nodo){
          this->it=nodo;
        }
        Iterator();
        Node<T>* operator++();
        Node<T>* operator=(Node<T>*nodo);
        bool operator==(Node<T>*nodo);
        bool operator!=(Node<T>*nodo);
        T operator *();
        
};
template<typename T>
Iterator<T>::Iterator(){
    it=NULL;
}
template<typename T>
Node<T>* Iterator<T>::operator++ (){
    it=it->acceso_nodo();
    return it;
}
template<typename T>
Node<T>* Iterator<T>::operator=(Node<T>* nodo){
    return it=nodo;
}
template<typename T>
bool Iterator<T>::operator==(Node<T>* nodo){
    return it==nodo->acceso_nodo();
}
template<typename T>
bool Iterator<T>::operator!=(Node<T>* nodo){
    return it!=nodo; 
}
template<typename T>
T Iterator<T>::operator*(){
    return it->acceso_elem();
}

#endif
