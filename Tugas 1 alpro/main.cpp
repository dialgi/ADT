#include <iostream>
//DIALGI ANAQAH
//4212
//A11.2022.14463
using namespace std;

struct hitung{
    int p,l,r,t,kerucut;
    float phi=3.14;
};

int main()
{
    struct hitung rumus;

    cout<<"Luas Persegi Panjang "<<endl;
    cout<<"input P : ";
    cin>>rumus.p;
    cout<<"input L : ";
    cin>>rumus.l;
    cout<<"Luas : "<<rumus.p*rumus.l<<endl;
    cout<<"=========================="<<endl;
    cout<<"Luas Lingkaran "<<endl;
    cout<<"input R : ";
    cin>>rumus.r;
    cout<<"Luas Lingkaran : "<<rumus.r*rumus.r*22/7<<endl;
    cout<<"=========================="<<endl;
    cout<<"Volume Kerucut "<<endl;
    cout<<"input R : ";
    cin>>rumus.r;
    cout<<"input T : ";
    cin>>rumus.t;
    cout<<"Volume Kerucut : "<<rumus.r*rumus.r*rumus.t*rumus.phi*1/3<<endl;
    cout<<"=========================="<<endl;
    cout<<"Volume Bola"<<endl;
    cout<<"input r : ";
    cin>>rumus.r;
    cout<<"Volume Bola : "<<rumus.r*rumus.r*rumus.r*rumus.phi*4/3<<endl;


}
