#include <iostream>
#include "classes.h"

int main() {
//    std::cout << "Hello, World!" << std::endl;

    Dog animal1("doggy");

    cout << "The info about the animal is:" << endl;
    animal1.display_animal();
    animal1.display_name();

    // Testing the Protected modifier

    Child c1;
    c1.display_function();


    return 0;
}
