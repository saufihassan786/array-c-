#include <iostream>
using namespace std;

int main (){

int num[]={ 5,11,22,1,-24,4};

int size = 6 ;
int smallest= 0;

for ( int i =0; i<size ; i ++ ){
    if ( num[i]<smallest){
    smallest=num[i];
    }
}
cout<< "smallest"<< smallest << endl;
return 0;
}