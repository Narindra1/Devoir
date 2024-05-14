#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(double longueur, double largeur) : longueur(longueur), largeur(largeur) {}

double Rectangle::perimetre()const {
    return 2 * (longueur + largeur);
}

double Rectangle::aire()const {
    return longueur * largeur;
}
void Rectangle::display()const{
    std::cout << "On a un rectangle de longueur " << longueur << " et de largeur " << largeur << " unite" << std::endl;
}
