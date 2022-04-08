#include <iostream>
using namespace std;

void change_value(int *ptr){
    *ptr = 100;
}

int *add_ten(int *data){
    for (int i=0; i<5; i++){
        *(data + i) = *(data+i)+10;
    }
    return data;
}