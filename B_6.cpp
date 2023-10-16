#include <iostream>
using namespace std;
int potencia(int base, int exp);
int main(){
    int base, exp;
    cout << "Escolha uma base: ";
    cin >> base;
    cout << "Escolha um Expoente: ";
    cin >> exp;
    cout << base << " elevado ah "
         << exp << " eh igual ah "
         << potencia(base, exp) << endl;
}
int potencia(int base, int exp){
    int resultado = 1;
    while(exp>0){
        resultado*=base;
        exp--;
    }
    return resultado;
}