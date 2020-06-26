

#include <iostream>
#include<windows.h>
#include<list>
#include "gen_linkedList.h" 
#include "Punto.h"

using namespace std;

int menu(){
    int opc;
    cout<<"        LISTA ENLAZADA";
    cout<<"\n-------------------------------";
    cout<<"\n(1)Insertar un elemento a la lista (ordenado)";
    cout<<"\n(2)Insertar un elemento al inicio de la lista";
    cout<<"\n(3)Insertar un elemento al final de la lista";
    cout<<"\n(4)Insertar un elemento en una pocicion especfica de la lista";
    cout<<"\n(5)Eliminar un elemento en una posicion";
    cout<<"\n(6)Eliminar el primer elemento de la lista";
    cout<<"\n(7)Eliminar el ultimo elemento de la lista";
    cout<<"\n(8)Imprimir la lista";
    cout<<"\n(9)Salir"<<endl;
    cout<<"\nOPCION: ";
    cin >>opc;
    cout<<endl;
    return opc;
}

int main(){

 
    Iterator<string>it;//
    LinkedList<string> lista;//
    string dig;//
/*
    Punto a(1,2);
    Punto b(1,2);
    Iterator<Punto>it;//
    LinkedList<Punto> lista;//
    
 */

    int tam;
    int pos;
    int opc;

    opc=menu();

    while(opc<9){
        switch (opc)
        {
            case 1:
                cout<<"Ingrese el elemento : ";
                cin >>dig;
                lista.insert(dig);//
              //  lista.insert(a);//Punto
                break;
            case 2:
                cout<<"Ingrese el elemento : ";
                cin >>dig;
                lista.insert_i(dig);
              //  lista.insert_i(a);//Punto
                break;
            case 3:
                cout<<"Ingrese el elemento : ";
                cin >>dig;
                lista.insert_f(dig);
             //   lista.insert_f(a);//Punto
                break;
            case 4:
                cout<<"Ingrese el elemento : ";
                cin >>dig;
                cout<<"Posicion del elemento: ";
                cin>>pos;
                lista.insert1(pos,dig);
               // lista.insert1(pos,a);//Punto
                break;
            case 5:
                lista.print();
                cout<<"\nEliminar elemento de la posicion:\n ";
                cin >>pos;
                lista.remove(pos);
                lista.print();
                break;
            case 6:
                lista.print();
                lista.remove_pop_front();
                lista.print();
                break;
            case 7:
                lista.print();
                lista.remove_pop_back();
                lista.print();
                break;
            case 8:
                cout<<endl;
            //    lista.print();
                lista.printt();
             /*   for (it=lista.begin(); it!=lista.end(); ++it){ 
                    cout<<*it<<" "; 
                } 
                cout<<endl;
                system("pause");*/

                break;
            case 9:
                opc=9;
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













