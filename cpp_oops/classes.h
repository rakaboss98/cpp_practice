//
// Created by Rakshit Bhatt on 28/03/22.
//
#include <iostream>
using namespace std;
#ifndef CPP_OOPS_CLASSES_H
#define CPP_OOPS_CLASSES_H


class Car {
public:
    //Declare data variables;
    int gear, top_speed;
    string car_name;

    //Class constructor
    Car(string Carname){

        car_name = Carname;
        gear = 4;
        top_speed = 200;
    }
    void mode(){
        cout << "The car is accelerating"<<endl;
    }


};

class Truck{
private:
    string brakes;

public:
    int TyreDia, length;
    static string Country;

    static void display_country(){
        cout << "the truck is from country: " << Country << endl;
    }


    // Generally a more clean way to initialise variables
    // Class constructor
    Truck() : TyreDia(15), length(30) {}

    // Setter function
    void set_brakes(string x){
        brakes = x;
    };

    // Getter function
    string get_brakes(){
        return brakes;
    }
};

class Rectangle{
public:
    int length, width;

    Rectangle(int len, int width) : length(len), width(width) {}

    int calc_area(){
        return length*width;
    }

};

class ComplexNum{
public:
    double real;
    double imag;

    ComplexNum(double real, double imag) : real(real), imag(imag) {}

    ComplexNum add_num(ComplexNum complex2){
        ComplexNum temp(0.0, 0.0);
        temp.real  = real + complex2.real;
        temp.imag = imag + complex2.imag;
        return temp;
    }

};



//Class to experiment with dynamic declaration
class Student{
public:
    string name;
};

class Concat{
public:
    string str1, str2;
    string cat;

    Concat(string s1, string s2):str1(s1), str2(s2){}

    string add_strings(){
        cat = str1.append(str2);
        return cat;
    }

    int string_length(){
        return cat.length();
    }

    string print_line(){
        string line;
        getline(cin, line);
        return line;
    }

    string swap_string(){
        str1.swap(str2);
        cat = str1.append(str2);
        return cat;
    }


};

class CaseChange{
public:
    string text;

    CaseChange(string enter): text(enter){};

    string to_upper_case(){
        for (int i=0;i<text.length();i++){
            text[i] = toupper(text[i]);
        }
        return text;
    }

    string to_lower_case(){
        for (int i=0;i<text.length();i++){
            text[i] = tolower(text[i]);
        }
        return text;
    }
};

class CompareStrings{
public:
    string str1, str2;

    CompareStrings(string istr1, string istr2): str1(istr1), str2(istr2){};

    string compare_strings(){
        if (str1==str2){
            return "True";
        }
        else{
            return "False";
        }
    }
};

class FindVowels{
public:
    string local_txt;

    FindVowels(string text): local_txt(text){};

    int find_vowels(){
        char arr[5] = {'a', 'e', 'i', 'o', 'u'};
        int count = 0;
        for (int i=0; i<local_txt.length();i++){
            for (int j=0; j<5; j++){
                if (tolower(local_txt[i])== arr[j]){
                    count +=1;
                }
            }
        }
        return count;
    }



};

#endif //CPP_OOPS_CLASSES_H
