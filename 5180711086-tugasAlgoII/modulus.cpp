#include<iostream>
using namespace std;
int mod (int angka, int modul)
{
    if (modul==1)
        return 0;
    else
        return angka%modul;
}
main ()
{
    int angka, modul;
    cout<<"Masukkan angka   : "; cin>>angka;
    cout<<"Masukkan modulus : "; cin>>modul;
    cout<<"Hasil modulus    : "<<mod(angka, modul);
    return 0;
}
