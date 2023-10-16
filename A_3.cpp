#include <iostream>
using namespace std;
int inicio, fim, soma;
void somaSequencia(){
    for(int i=inicio; i<=fim; i++){
        soma+=i;
    }
    cout << soma << endl;
}
int main(){
    cin >> inicio;
    cin >> fim;
    somaSequencia();
}