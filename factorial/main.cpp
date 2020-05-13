#include <iostream>
using namespace std;

int suma(int i, int j); // Esta función existe. Búsquela.



int main(){
    int n = 3, a = 5;
    int b = suma(n,a); 
    cout << b <<endl;
    return 0;
}


int suma(int i, int j){
    return i + j;
}