// This header file is to test the inheritance of classes

#include <iostream>

using namespace std;

class Animal{
public:
//    string name;

//    Animal(string namme):name(namme){};

    void display_animal(){
        cout<< "Hello! I am an animal "<< endl;
    }
};

class Dog : public Animal{
public:
    string name;

    Dog(string namma):name(namma){};

    void display_name(){
        cout << "The name of the dog is: " << name << endl;
    }
};