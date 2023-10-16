#include <iostream>
using namespace std;

int numero;
void fatorial(){
    for(int i=numero-1;i>1;i--){
        numero=numero*i;
    }
    cout << "Fatorial: " << numero << endl;
}
int main(){
    cin >> numero;
    fatorial();
}