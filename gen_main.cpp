/*
Implemente una lista enlazada ORDENADA de enteros, para lo cual debe considerar:
• la clase Node, que representa un nodo de la lista,
– la clase nodo debe tener como variables miembro: elem(int), next(Node*)
– Constructor(es)
– variables miembro para acceso/modificación
• y la clase LinkedList, que representa a la lista enlazada
– como variables miembro: size(int), head(Node*)
– Constructor(es), destructor.
– e implementar las siguientes funciones: insert, remove, print.

Definición:
Una lista enlazada es una de las estructuras de datos fundamentales, y puede ser usada para implementar otras estructuras de datosConsiste en una secuencia de nodos, en los que se guardan campos de datos arbitrarios y una referencias (punteros) al nodo posterior.
El principal beneficio de las listas enlazadas respecto a los array convencionales es que el orden de los elementos enlazados puede ser diferente al orden de almacenamiento en la memoria o el disco, permitiendo que el orden de recorrido de la lista sea diferente al de almacenamiento.
Las listas enlazadas simples solo pueden ser recorridas en una dirección
*/

#include <iostream>
#include<windows.h>
#include<list>
#include "gen_linkedList.h" 
#include "gen_linkedList.cpp"
#include "iteratorlist.h"
#include "iteratorlist.cpp"

using namespace std;

int menu(){
    int opc;
    cout<<"        LISTA ENLAZADA";
    cout<<"\n-------------------------------";
    cout<<"\n(1)Insertar un elemento a la lista (ordenado)";
    cout<<"\n(2)Eliminar un elemento en la posicion";
    cout<<"\n(3)Imprimir la lista";
    cout<<"\n(4)Salir"<<endl;
    cout<<"\nOPCION: ";
    cin >>opc;
    cout<<endl;
    return opc;
}

int main(){

    list<int>list_int;
   // list<int>::iterator it;    

    LinkedList<char> lista;

    char dig;
    int tam;
    int pos;
    int opc;

    opc=menu();

    while(opc<4){
        switch (opc)
        {
            case 1:
                cout<<"Ingrese el elemento : ";
                cin >>dig;
                //cout<<"pos: ";
                //cin >>pos;
                lista.insert_f(dig);
                break;
            case 2:
                lista.print();
                cout<<"\nEliminar elemento en la posicion:\n ";
                //cin >>pos;
                lista.remove_pop_front();
                lista.print();
                break;
            case 3:
                cout<<endl;
                lista.print();
                break;
            case 4:
                opc=4;
                break;
            default:
                break;
        }
        system("cls");
        opc=menu();
    }

    lista.~LinkedList();

    return 0;
}













