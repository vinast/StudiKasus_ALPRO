#include <iostream>
#include <string.h>
using namespace std;

class perpus{
public : 
  void input();
  void proses();
  void output();

private : 
string buku[10][3]{"jenis buku", "judul buku", "penulis"}, 
  {"novel", "laut becerita", "lella s.chudori"}, 
  {"\0", "azzamine", "sophie aulia"}, 
  {"\0","Matahari", "Tere liye"},
  {"komik", "doraemon", "fujiko f. fujiyo"},
  {"\0","detektif conan", "aoyama gosho"},
  {"\0", "miko", "Ono eriko"},
  {"ensiklopedi", "ensiklopedia sains", "usborne"},
  {"\0", "ensiklopedia Kiamat", "tim gema insani"},
  {"\0", "ensiklopedia akhir zaman", "abu fatlah al-adnani"};
string carijudul, jenis, judulbuku, penulis;
int i,j;
};

void perpus::input(){
  cout<<"=======================================================" << endl;
  cout<<"Masukkan judul buku yang ingin dicari : "; getline(cin, carijudul);
  cout<<"=======================================================" << endl;
}

void perpus::proses(){
  cout<<"cari judul buku : ";getline(cin,carijudul);
  for (i=0; i<9;i++){
    for(j=0; j<3;j++){
      if ( carijudul == buku[i][1]){
        cout<<buku[i][j]<<" \t\t";
      }
    }
  }
}
void perpus::output(){
  cout<<"------------------------------------------------------------------"<<endl;
  cout<<"|/tJenis buku/t||/tJudul buku/t||/tPenulis/t|"<<endl;
  cout<<"------------------------------------------------------------------"<<endl;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cout << "|\t" << judulbuku[i][j] << "\t|";
    }
    cout<<endl<<"------------------------------------------------------------------"<<endl;
  }
}




int main(){
  perpus x;
  x.input();
  x.output();
  x.proses();
}