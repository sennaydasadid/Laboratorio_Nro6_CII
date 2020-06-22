#ifndef LIST_H
#define LIST_H

#include <iostream>
#include<list>
#include "gen_node.h"
#include "gen_node.cpp"
 
using namespace std;
template <typename T>
class LinkedList{
    private:
    int size;
    Node<T>* head;
    public:
        LinkedList();
        LinkedList(LinkedList &o);
        ~LinkedList();

        int getSize();
        Node<T>* gethead();
        void setSize(int n);
        void setHead(Node<T>*);

        void insert(T);//ordenado
        void insert_i(T);
        void insert_f(T);
        void insert1(int,T);
        void remove(int);//por pocicion
        void remove_pop_front();
        void remove_pop_back();
        void print();
};
#endif