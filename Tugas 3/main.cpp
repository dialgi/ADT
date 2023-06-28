#include <iostream>

using namespace std;

typedef struct {
    int p,l,r,t;
    float phi=3.14;

    int LPP(int p,int l){
        return p*l;
    }
    int LL(int r){
        return r*r*22/7;
    }
    float VK(int r,int t){
        return phi*r*r*t*1/3;
    }
    float VB(int r){
        return phi*r*r*r*4/3;
    }
}Variable;

Variable var;

int main()
{
    cout<<"luas persegi panjang"<<endl;
    cout<<"masukan p : ";
    cin>>var.p;
    cout<<"masukan l : ";
    cin>>var.l;
    cout<<"luas : "<<var.LPP(var.p,var.l)<<endl;
    cout<<"============================"<<endl;
    cout<<"luas lingkaran"<<endl;
    cout<<"masukan r : ";
    cin>>var.r;
    cout<<"luas : "<<var.LL(var.r)<<endl;
    cout<<"============================"<<endl;
    cout<<"volume kerucut"<<endl;
    cout<<"masukan r : ";
    cin>>var.r;
    cout<<"masukan t : ";
    cin>>var.t;
    cout<<"volume : "<<var.VK(var.r,var.t)<<endl;
    cout<<"============================"<<endl;
    cout<<"volume bola"<<endl;
    cout<<"masukan r : ";
    cin>>var.r;
    cout<<"volume : "<<var.VB(var.r)<<endl;
    cout<<"============================"<<endl;
}
