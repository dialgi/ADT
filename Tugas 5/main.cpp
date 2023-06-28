#include <iostream>

using namespace std;

struct barang {
    string merk;
    string type;
    int tahun;
    string harga;
};

int main() {
    barang sepeda;
    barang*ptrsepeda = &sepeda;

    (*ptrsepeda).merk="Polygon";
    (*ptrsepeda).type="Sepeda Gunung";
    (*ptrsepeda).tahun=2013;
    (*ptrsepeda).harga="2.000.000";

    cout<<"Data Sepeda:"<<endl;
    cout<<"Merk   : "<<(*ptrsepeda).merk<<endl;
    cout<<"Type   : "<<(*ptrsepeda).type<<endl;
    cout<<"Tahun  : "<<(*ptrsepeda).tahun<<endl;
    cout<<"Harga  : "<<(*ptrsepeda).harga<<endl;

    return 0;
}
