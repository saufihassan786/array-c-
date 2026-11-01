#include<iostream>
using namespace std;

int main (){
    int n=10;
    int evensum=0; 
    int i=1;
    while( i<= n ){
        if ( i%2==0){
        evensum+=i;
        i++;

    }
}
cout<< "even are :"<< evensum <<endl;
return 0;
}