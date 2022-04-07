#include <iostream>

using namespace std;

double add(double a, double b);
double mult(double a, double b);
char isprime(int a);
double powerof(int a, int x);

int main(){

    cout << "The sum of two numbers is: " << add(5.4,9.9) << endl;
    cout << "The mult of two numbers is: " << mult(5.4, 9.9) << endl;
    cout << "The number is Prime? : " << isprime(991) << endl;
    cout << "Two raise to the power 10 is: " << powerof(2, 10) << endl;

    return 0;
}

// Add two numbers

double add(double a, double b){
    double sum;
    sum = a + b;
    return sum;
}

// Multiply two numbers

double mult(double a, double b){
    double temp;
    temp = a*b;
    return temp;
}

// Check if a number is prime or not

char isprime(int a){
    int limit = a/2;
    char flag = 'Y';
    int prime = 0;
    int i = 2;

    while( i <= limit){
        if(a%i==0){
            prime = 1;
            i = limit+1;
        }
        i += 1;
    }

    if (prime == 1){
        flag = 'N';
    }

    return flag;
}

// Check the power of

double powerof(int a, int x){
    int result = a;
    for (int i=2; i<=x; i++){
        result = result*a;
    }
    return result;
}
