#include <iostream>

class car
{
public:
    std::string brand;

    void drive()
    {
        std::cout << brand << "is driving" << std::endl;
    }
};

int main()
{
    car mycar;
    mycar.brand = " Tomatina";
    mycar.drive();

    return 0;
}