#include <iostream>
using namespace std;
int fatorial(int numero);
int main(){
    int numero;
    cout << "Insira um numero: ";
    cin >> numero;
    cout << "O fatorial de " << numero
         << " eh: " << fatorial(numero) << endl;
}
int fatorial(int numero){
    for(int i=numero-1;i>1;i--){
        numero=numero*i;
    }
    return numero;
}
