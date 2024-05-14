#include <iostream>
#include "Cercle.hpp"


Cercle::Cercle(){
        rayon=0;
}
Cercle::Cercle(double r){
        rayon=r;
}
Cercle::~Cercle(){

}
double Cercle::getRayon(){
        return rayon;
}

void Cercle::setRayon(double r){
        rayon=r;
}

double Cercle::perimetre() const {
    return (2*(3.14)*rayon);
}
double Cercle::aire() const{
    return (3.14*rayon*rayon);
}
void Cercle::display() const{
    std::cout<<" On a un cercle de rayon: "<<rayon<<" unite"<<std::endl;
}

