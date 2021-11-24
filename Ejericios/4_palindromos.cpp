/*
* A palindromic number is a number (such as 626) that remains the same when its digits are reversed.
* Write a function that returns true if a given number is a palindrome, and false, if it is not.
* Complete the given function, so that the code in main works and results in the expected output.
*/

#include <iostream>
using namespace std;

bool isPalindrome(int n);

int main() {
    int n;
    cin >>n;

    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}

bool isPalindrome(int n){
    int aux,resto,numInv=0;
    aux = n;

    while(aux > 0){
        resto = aux%10;
        aux = aux/10; //
        numInv = numInv*10+resto;
    }

    if(numInv==n){
        return true;
    }
    else{
        return false;

    }

}