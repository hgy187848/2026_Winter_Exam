#include <iostream>
#include <string>

using namespace std;

void say_hello(string name);

void say_hello(string name) 
{
    cout << "Hello, I am " << name 
    << ", I am ready for battle!" << endl;
}

int main() 
{
    string name = "Hotpot_Starter";
    say_hello(name);
    return 0;
}

