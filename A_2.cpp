#include <iostream>
using namespace std;
int n;
void paridade(){
    if(n%2==0){
        cout << "O numero eh par." << endl;
    }
    else{
        cout << "O numero eh impar." << endl;
    }
}
int main(){
    cin >> n;
    paridade();
}