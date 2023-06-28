#include <iostream>
using namespace std;

struct Barang {
    int tahun;
    int harga;
    string merk;
    string type;
};
struct Barang sepeda;
int main() {
    sepeda.merk="Polygon";
    sepeda.type="Sepeda Gunung";
    sepeda.tahun=2013;
    sepeda.harga=2000000;

    cout<<"merk : "<<sepeda.merk<<endl;
    cout<<"type : "<<sepeda.type<<endl;
    cout<<"tahun : "<<sepeda.tahun<<endl;
    cout<<"harga : Rp."<<sepeda.harga<<endl;

    return 0;
}
