#include <iostream>
using namespace std;
int somaSequencia(int inicio, int fim){
    int soma=0;
    for(int i=inicio; i<=fim ; i++){
        soma+=i;
    }
    return soma;
}
int main(){
    int n_inicio, n_fim;
    cin >> n_inicio >> n_fim;
    cout << somaSequencia(n_inicio, n_fim) << endl;
}