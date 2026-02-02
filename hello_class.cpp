#include <iostream>
#include <string>

class Robot 
{
private:
    std::string name;

public:
    void setName(std::string n) 
    {
        name = n;
    }

    void say_hello() 
    {
        std::cout << "Hello, I am " << name << ", I am ready for battle!" << std::endl;
    }
};

int main() 
{
    Robot robot;
    robot.setName("Hotpot_Starter");
    robot.say_hello();
    return 0;
}