#ifndef NODE_H
#define NODE_H

#include<iostream>
using namespace std;
template <typename T>
class Node{
    private:
        Node *next;
        T  elem; 
    public:
        Node();
        Node(T);
        Node(Node &o);
        ~Node();
        
        T  acceso_elem();
        Node* acceso_nodo();
        void modi_elem(T);
        Node* modi_nodo(Node*);
};
template<typename T>
Node<T>::Node(){
    elem =0;
    next =NULL;
}
template<typename T>
Node<T>::Node(T elem){
    this->elem=elem;
    this->next = NULL;
}
template<typename T>
Node<T>::Node(Node &o){
    this->elem=o.acceso_elem();
    this->next=o->acceso_nodo();
}

template<typename T>
T  Node<T>::acceso_elem(){
    return elem;
}
template<typename T>
Node<T>* Node<T>::acceso_nodo(){
    return next;
}
template<typename T>
void Node<T>::modi_elem(T elem){
    this->elem=elem;
}
template<typename T>
Node<T>* Node<T>::modi_nodo(Node<T> *next){
    this->next=next;
}
template<typename T>
Node<T>::~Node(){
    delete next;
}
#endif