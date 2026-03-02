//Library
#include <iostream>
using namespace std;

//deklarasi variabel
int p, l;

//implementasi fungsi dan prosedur
void input(){
    cout << "Masukkan Panjang : ";
    cin >> p;
    cout << "Masukkan Lebar : ";
    cin >> l;
}

int luasPersegiPanjang(){
    return p * l;
}

void output(){
    cout << "Hasilnya : " << luasPersegiPanjang();
}

int main(){ //mulai
    input();
    output();
} //selesai