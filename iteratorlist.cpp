#include "iteratorlist.h"
using namespace std;

template <typename T>
Iterator<T>::Iterator(Node<T>* nodo){
        node=NULL;
        it=nodo;
}
