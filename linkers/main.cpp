#include <iostream>
#include "array_pointers.h"

using namespace std;

int main() {

//    int len;
//    cin >> len;
//    int *arr = new int[len];

    int arr[4] = {1, 2, 3, 5};

    int max = find_maximum(arr, 4);
    cout << "The maximum value of the array is; " << max << endl;

    // Looping through the array in a regular way

    for (int i = 0; i<4; i++){
        memory_location(arr[i]);
        cout << &arr[i] << endl;
    }

    // Looping through the array using pointer

    for (int *ptr = arr;ptr<=&arr[4];ptr++ ){

        cout << "Looped using pointer " << *ptr << endl;
    }

    // Dynamically allocate an array and find the maximum values using pointer



    // void pointer

    void *ptr;
    int k = 2;
    ptr = &k;
    cout << "void pointer is assigned " << ptr << endl ;

    // Dangling pointer

    int *ktr  = new int;

    delete ktr;
    ktr = NULL;
    cout << ktr << endl; // should try to avoid dangling pointers

    int x = 150, y=90;

    swap_numbers(&x, &y);
    cout << " X is: " << x << endl;
    cout << " Y is: " << y;






    return 0;
}

