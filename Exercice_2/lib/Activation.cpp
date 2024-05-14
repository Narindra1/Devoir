#include "Activation.hpp"

bool Activation::verifActivation()
{
    std::ifstream fs("txt.reg");
    if (fs.fail())
    {
        std::cout << "fichier d'activation non trouvé" << std::endl;
        return false;
    }
    else
    {
        std::string key;
        fs >> key;
        fs.close();
        if (key == keyTest)
        {
            std::cout << "Activation OK" << std::endl;
            activat();
            return true;
        }
        else
        {
            std::string s;
            std::ifstream tryFyle("try.txt");
            tryFyle >> s;
            tryFyle.close();
            int i = stoi(s), value;
            std::ofstream w("try.txt");
            value = (i - 1);
            w << value;
            w.close();
            return false;
        }
    }
}

void Activation::activat()
{
    std::ofstream fs("try.txt");
    fs << "activated";
    status = true;
    fs.close();
}

Activation::Activation()
{
    std::string i;
    std::ifstream fs("try.txt"); 
    if (fs.fail())
    {
        std::cout << "try.txt non trouvé" << std::endl,
            point = 0;
    }
    else
    {
        fs >> i;
        if (i == "activated")
        {
            status = true;
        }
        else
        {
            point = stoi(i);
        }
        fs.close();
    }
}

Activation::~Activation()
{
}

bool Activation::getStatus()
{
    return status;
}

int Activation::getPoint()
{
    return point;
}