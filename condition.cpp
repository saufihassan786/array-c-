#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;

    if (n>= 18){
    cout<< " eligible foe vote ";
    }
    else if (n>=65){
        cout<< " budha hai aram kro ";
    } 
    else {
        cout << " not vote ";
    }
    return 0;
    }