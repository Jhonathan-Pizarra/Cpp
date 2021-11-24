#include <iostream>
using namespace std;

int main()
{
    int myArr[5];

    //Recuerda: <5 significa que recorre hasta el 4, es decir de 0 -> 4 y eso está bien puesto que son 5 elementos
    for(int x=0; x<5; x++) {
        myArr[x] = 42;

        cout << x << ": " << myArr[x] << endl;
    }

    //Suma de todos los elementos del array
    //Declaraomos un  array and a variable sum that will hold the sum of the elements.
    int arr1[] = {11, 35, 62, 555, 989};
    int sum = 0;

    //we utilized a for loop to iterate through each element of the array,
    for (int x = 0; x < 5; x++) { //En el array el primer index es 0, por eso mandamos al bucle a iterar desde x = 0
        sum += arr1[x]; //added the corresponding element's value to our sum variable.
    }

    cout << sum << endl;

    return 0;
}
