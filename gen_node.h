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
        ~Node();

        T  acceso_elem();
        Node* acceso_nodo();
        void modi_elem(T);
        Node* modi_nodo(Node*);
};

#endif