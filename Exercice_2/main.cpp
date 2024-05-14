#include <iostream>
#include "lib/Activation.hpp"

int main()
{
    Activation test = Activation();
    if (test.getStatus() == false)
    {
        test.verifActivation();
    }
    if (test.getPoint() > 0)
    {

        if (test.getStatus() == true)
        {
            std::cout << "Hello world" << std::endl;
        }
        else
        {
            std::cout << "Just Hello because you didn't pay" << std::endl;
        }
    }
    else
    {
        std::cout << "Pay for more" << std::endl;
    }
    return 0;
}