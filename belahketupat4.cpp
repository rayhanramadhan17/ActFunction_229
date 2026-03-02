#include <iostream>
using namespace std;

float diagonal1, diagonal2, luas;

void prosedurinput(){
    cout << "Masukkan diagonal 1 : ";
    cin >> diagonal1 ;
    cout << "Masukkan diagonal 2 : ";
    cin >> diagonal2 ;
}

float LuasBelahKetupatBerpameter(float diagonal1, float diagonal2){
    return 0.5 * diagonal1 * diagonal2;
}

void proseduroutput(){
    cout << "LuasKetupat :" <<LuasBelahKetupatBerpameter(diagonal1, diagonal2);

}
int main(){
    prosedurinput();
    proseduroutput();
}