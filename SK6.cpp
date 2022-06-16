#include <iostream>
using namespace std;

class hitung{
public:
  void input();
  void proses();
  void output();

private :
  char nama [30], matkul[100];
  float nilai1, nilai2, nilai3,akhir;
int rata;
};


void hitung::input(){
  cout<<"Masukkkan Nama Mahasiswa : ";
  cin>>nama;
  cout<<"Masukkan Nama Mata Kuliah : ";
  cin>>matkul;
  cout<<endl;
  cout<<"Masukkan Nilai TUGAS  : "; cin>>nilai1;
  cout<<"Masukkan Nilai UTS    : "; cin>>nilai2;
  cout<<"Masukkan Nilai UAS    : "; cin>>nilai3;
}
   
void hitung::proses(){
  cout<<"Nilai Tugas : "<<nilai1<<endl;
  cout<<"Nilai UTS : "<<nilai2<<endl;
  cout<<"Nilai UAS : "<<nilai3<<endl;
  akhir= nilai1*0.20 + nilai2*0.35 + nilai3*0.45;
  int rata = (nilai1 + nilai2 + nilai3)/3;
  cout<<"Nilai Akhir : "<<akhir<<endl;
  cout<<"Nilai rata-rata : "<<rata;
}

void hitung::output(){
  cout<<endl;
  cout<<endl;
  cout<<"-------------------------------------------"<<endl;
  cout<<"Nama Mahasiswa : "<<nama<<endl;
  cout<<"Nama Mata Kuliah : "<<matkul<<endl;
  cout<<"Nilai Tugas : "<<nilai1<<endl;
  cout<<"Nilai UTS : "<<nilai2<<endl;
  cout<<"Nilai UAS : "<<nilai3<<endl;
  cout<<endl;
  cout<<"Nilai Akhir :"<<akhir<<endl;
  int rata = (nilai1 + nilai2 + nilai3)/3;
  cout<<"Nilai rata-rata : "<<rata<<endl;
  cout<<"-------------------------------------------"<<endl;  
}


int main (){
  hitung x;
  x.input();
  x.proses();
  x.output();

  }