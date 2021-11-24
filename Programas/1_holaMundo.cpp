#include <iostream> //#include se utiliza para agregar archivos de encabezado estándar o definidos por el usuario al programa.
                    //El encabezado <iostream> define los objetos de flujo estándar para ingresar y generar datos.

using namespace std;

int main() {


    cout<<"Hola Mundo!";
    //cout es el objeto de flujo que se utiliza para realizar la salida en el dispositivo de salida estándar, que suele ser la pantalla de visualización.
    //cout se utiliza en combinación con el operador de inserción << . Este operador de inserción es un operador de flujo
    //En C ++, los flujos se utilizan para realizar operaciones de entrada (>>) y salida (<<).

    //Saltos de linea
    cout<<endl;
    cout<<"Una sentencia con salto de linea"<<endl;
    cout<<"Otra forma de hacer salto de linea \n";
    cout<<"C++ es fácil!";

    //Comentarios: En algunos IDES es usar CRL+SHIFT+/ para hacer una region de comentarios cubiertos con /*
    //También podemos comnetar varias lineas sombreandolas y aplastando CTRL+MAYUS+/ se comentan como //

    return 0;
}
