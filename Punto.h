#ifndef PUNTO_H
#define PUNTO_H

#include<iostream>
using namespace std;

class Punto{
    private:
        int x,y;
    public:
        Punto();
        Punto(int x, int y);
        friend ostream& operator<<(ostream &output, Punto &o);
};

Punto::Punto(){
    x=0;
    y=0;
}

Punto::Punto(int x,int y){
    this->x=x;
    this->y=y;
}

ostream& operator <<(ostream &output,  Punto &o) {
    output << o.x << "- " << o.y ;
    return output;
}
#endif