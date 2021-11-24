#include <iostream>
using namespace std;

int main()
{
    int matriz[2][3]; //creamos una matriz de 2 filas x 3 columnas
    int x[2][3] = {
            {2, 3, 4}, //fila 0
            {8, 9, 10} //fila 1
    };

    cout << x[0][2] << endl;
    //The first index 0 refers to the first row.
    // The second index 2 refers to the 3rd element of the first row, which is 4.


    return 0;
}
