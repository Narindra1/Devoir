#ifndef __POINT__
#define __POINT__

#include <iostream>
#include <fstream>
#include <string>

class Activation
{
private:
    std::string keyTest = "ABCD";
    int point;
    bool status = false;

public:
    Activation();
    ~Activation();
    bool verifActivation();
    void activat();
    bool getStatus();
    int getPoint();
};

#endif