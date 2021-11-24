#include <iostream>
using namespace std;

void printArray(int arr[], int size) { //Un array también puede ser pasado como parámetro. Este debe tener los [] cuando se declara
    for(int x = 0; x < size; x++) {
        cout << arr[x];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5); //recuerda pasar como argumento el array sin []
}

