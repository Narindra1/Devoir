#include <iostream>
#include "Carre.hpp"



Carre::Carre(){
      cote = 0;
}
Carre::Carre(double c){
      cote = c;
    
}
Carre::~Carre(){
    
}

double Carre::getCote(){
    return cote;
}
void Carre::setCote(double c){
     cote = c;
}

double Carre::perimetre() const{
    return 4*cote;
}

double Carre::aire() const{
    return 2*cote;
}


void Carre::display() const{
    std::cout<<" On a un carré de côté: "<<cote<<" unite"<<std::endl;
}