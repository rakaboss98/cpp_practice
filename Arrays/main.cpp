#include <iostream>

using namespace std;

int main() {

    double var[3][2] = {
            {2.2,4.3},
            {5.2,6.6},
            {7,9}
    };

    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            cout << var[i][j] << endl;
        }
    }

}
