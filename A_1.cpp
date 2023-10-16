#include <iostream>
using namespace std;
int n;
void multiploQuatro(){
    if(n%4==0){
        cout << "O numero selecionado e multiplo de 4." << endl;
    }
    else{
        cout << "O numero selecionado NAO e multiplo de 4." << endl;
    }
}
int main(){
    cin >> n;
    multiploQuatro();
}