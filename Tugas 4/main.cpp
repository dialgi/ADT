#include <iostream>

using namespace std;


struct DataMahasiswa {
    string nim;
    string nama;
    string jurusan;
    int lulus;
};

int main(){

    const int n=4;
    DataMahasiswa dataStatis[n];

    dataStatis[0]={"A11.2020.01234","Andi","Broadcasting",2023};
    dataStatis[1]={"A11.2020.01234","Budi","Sistem Informasi",2013};
    dataStatis[2]={"A11.2020.01234","Ali","DKV",2003};
    dataStatis[3]={"A11.2020.01234","Siti","Kesehatan",1993};

    cout << "data mahasiswa (arr statis) : "<<endl;
    cout << "================================"<<endl;
    cout << "nim\t\tnama\t\tjurusan\t\t\ttahun lulus"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<dataStatis[i].nim<<"\t"<<dataStatis[i].nama<<"\t"<<dataStatis[i].jurusan<<"\t"<<dataStatis[i].lulus<<endl;
    }
    cout<<endl;


    int nd;
    cout<<"masukan jumlah data mahasiswa (array dinamis): ";
    cin>>nd;

    DataMahasiswa*dataDinamis=new DataMahasiswa[nd];

    for (int i=0;i<nd;i++) {
        cout<<"Data Mahasiswa ke-" <<i+1<<":"<<endl;
        cout<<"NIM : ";
        cin>>dataDinamis[i].nim;
        cout<<"Nama : ";
        cin>>dataDinamis[i].nama;
        cout<<"Jurusan: ";
        cin>>dataDinamis[i].jurusan;
        cout<<"Tahun Lulus: ";
        cin>>dataDinamis[i].lulus;
    }

    cout<<endl;
    cout<<"data mahasiswa (arr dinamis) : "<<endl;
    cout<<"================================"<<endl;
    cout<<"nim\tnama\tjurusan\ttahun lulus"<<endl;
    for (int i = 0; i < nd; i++) {
    cout<<dataDinamis[i].nim<<"\t"<<dataDinamis[i].nama<<"\t"<<dataDinamis[i].jurusan<<"\t"<< dataDinamis[i].lulus<<endl;
    }

    delete[] dataDinamis;

    return 0;
}
