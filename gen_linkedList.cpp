#include "gen_linkedlist.h"
#include<list>

using namespace std;

template <typename T>
LinkedList<T>::LinkedList(){
    size=0;
    head=NULL;
}
template <typename T>
LinkedList<T>::LinkedList(LinkedList &o){
    this->size=o.size;
    Node<T> *actual= NULL;
    Node<T>* next_=NULL;
    if (o.head == NULL)
        head= NULL;
    else{
        head=new Node<T>;
        head->next=o.head->next;
        head->elem=o.head->elem;
        actual=head;
        next_=o.head->next;
    }
    while(next_!=NULL){
        actual->next=new Node<T>;
        actual=actual->next;
        actual->next=next_->next;
        actual->elem=next_->elem;
        next_=next_->next;
    }
    actual->next=NULL;
}
template <typename T>
int LinkedList<T>::getSize() { 
    return size;
}
template <typename T>
Node<T>* LinkedList<T>::gethead(){
    return head;
}
template <typename T>
void LinkedList<T>::setSize(int tam){ 
    this-> size = tam;
}
template <typename T>
void LinkedList<T>::setHead(Node<T>* head){ 
    this -> head = head;
}
template <typename T>
void LinkedList<T>::insert(T new_elem){
    Node<T> *n_node=new Node<T> (new_elem);
    Node<T> *aux=head;
    if(!head){
        head=n_node;
    }
    else{ 
        if(head->acceso_elem() >new_elem){
                n_node->modi_nodo(head);
                head=n_node;
        }
        else{
            while((aux->acceso_nodo()!= NULL)&&(aux->acceso_nodo()->acceso_elem()<new_elem)){
                aux=aux->acceso_nodo();
            }
            n_node->modi_nodo(aux->acceso_nodo());
            aux->modi_nodo(n_node);
        }
    }
    this->size=size+1;   
}
template <typename T>
void LinkedList<T>::insert_i(T val){
    Node<T> *new_node=new Node<T>(val);
    Node<T> *aux=head;
    if(!head){
        head=new_node;
    }
    else{
        new_node->modi_nodo(head);
        head=new_node;
        while(aux){
            aux=aux->acceso_nodo();
        }
    }
    size++;
}
template <typename T>
void LinkedList<T>::insert_f(T val){
    Node<T> *new_node=new Node<T>(val);
    Node<T> *aux=head;
    if(!head){
        //insert_i(val);
        head=new_node;
    }
    else{
        while(aux->acceso_nodo()!=NULL){
            aux=aux->acceso_nodo();
        }
        aux->modi_nodo(new_node); 
    }
    size++;
}
template <typename T>
void LinkedList<T>::insert1(int pos, T val){
    Node<T> *n_node=new Node<T>(val);
    if (pos==1){
       n_node->modi_nodo(head);
       this->head=n_node;
    }
    else{
        Node<T> *ptr=this->head;
        for(int i=2;i<pos;i++){//(ptr!=NULL && --pos){
            ptr=ptr->acceso_nodo();
        }
        n_node->modi_nodo(ptr->acceso_nodo());
        ptr->modi_nodo(n_node);
    }
    size++;
}
template <typename T>
void LinkedList<T>::remove(int pos){
    Node<T> *ptr;
    if(pos== 1){
        this->head = this->head->acceso_nodo();
    }
    else{
        Node<T> *aux=this->head;
        for (int i=2;i<pos;i++){
            aux=aux->acceso_nodo();
        }
        ptr=aux->acceso_nodo();
        aux->modi_nodo(ptr->acceso_nodo());
    }
    size--;
}
template <typename T>
void LinkedList<T>::remove_pop_front(){
    Node<T>* ptr=head;
    Node<T>* aux;
    if(head==NULL){    
    }
    else{
        aux=ptr->acceso_nodo();
     //   ptr=ptr->acceso_nodo();
        //ptr->modi_nodo(ptr->acceso_nodo());
        head=head->acceso_nodo();
    }
    size--;
}
template <typename T>
void LinkedList<T>::remove_pop_back(){
    Node<T> *ptr;
    Node<T>* aux=head;
    if(head==NULL){
    }
    else{
        for(int i=0;i<size-2;i++){//penultimo 
            aux=aux->acceso_nodo();
        }
        ptr=aux->acceso_nodo();
        aux->modi_nodo(ptr->acceso_nodo());
    }
    size--;
}
template <typename T>
void LinkedList<T>:: print(){
    Node<T>*aux=head;
    if(head==NULL){
        cout<<"La lista esta vacia "<<endl;
    }
    else{
        
        while (aux!=NULL){
            cout<<aux->acceso_elem()<<" ";
            aux=aux->acceso_nodo();
        }
        cout<<endl;
    }
    system("pause");
}
template <typename T>
LinkedList<T>::~LinkedList(){
    //Node *ptr=this->head;
  //  Node *next=NULL;
    while (head->acceso_nodo()!=NULL){
        head=head->acceso_nodo();
        delete(head);
//        ptr=next;
    }
    head=head->acceso_nodo();
}