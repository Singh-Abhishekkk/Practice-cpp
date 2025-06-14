#include <iostream>
#include <string>

class Animal
{
public:
    std::string name;
    int age;

    void speak()
    {
        std::cout << name << "Says HEllo!" << std::endl;
    }

    void birthday()
    {
        age = age + 1;
        std::cout << name << " is now " << age << " years old" << std::endl;
    }
};

int main(){

    Animal dog;

    dog.name = "Rocky ";
    dog.age = 3;

    dog.speak();
    dog.birthday();

    return 0;
}