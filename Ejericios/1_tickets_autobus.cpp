/*
A bus can transport 50 passengers at once.
Given the number of passengers waiting in the bus station as input, you need to calculate and output how many empty seats the last bus will have.
Explanation:
 * The first bus will transport 50 passengers, leaving 126-50=76 in the station.
 * The next one will leave 26 in the station, thus, the last bus will take all of the 26 passengers, having 50-26=24 seats left empty.
*/
#include <iostream>

using namespace std;

int main() {

    int passengers = 0;
    int capacity = 50;
    int station = 0;

    cout<<"Por favor, ingresa el numero de pasajeros: ";
    cin>>passengers;

    station =  passengers %  capacity;
    capacity = capacity - station;

    cout<<"Quedan en la estación: "<<station<<endl;
    cout<<"Quedarán libres: "<<capacity<<" asientos";


    return 0;
}
