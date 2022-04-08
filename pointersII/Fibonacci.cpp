#include <iostream>
#include "pointers.h"
using namespace std;

int main(){

    int number = 5;
    int *result;
    cout << "Number before change: " << number << endl;
    change_value(&number);
    cout << "The changed number is: " << number;

    int data[5] = {5, 10, 15, 20 , 25};
    result = add_ten(data);

    for (int i=0; i<5; i++){
        cout << "Upgraded value is: " << *(result+i) << endl;
    }

    return 0;
}