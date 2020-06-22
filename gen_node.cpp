#include "gen_node.h"
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