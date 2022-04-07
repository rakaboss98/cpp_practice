#include <iostream>
using namespace std;
void memory_location(int x){

    cout << "The address of this element is: " << &x << endl;

}

void swap_numbers(int *ptr1, int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int find_maximum(int* malloc, int n){
    int largest = *malloc;
    for (int *iter = malloc; iter <= &malloc[n]; iter++){
        if (*(iter)>=largest){
            largest = *(iter);
        }
    }

    return largest;
}