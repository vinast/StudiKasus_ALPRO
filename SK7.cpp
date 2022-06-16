#include <iostream>
using namespace std;

class pencarian {
public:
  void input();
  void proses();
  void output();

private:
  string nama[50], prodi[10], no_telp[10];
  int nim[50], jumlah, temp, no, ketemu, b;
};

void pencarian ::input() {
  cout << "masukkan jumlah mahasiswa : ";
  cin >> jumlah;
  cout<<endl;
  for (int i = 0; i < jumlah; i++) {
    cout << "Masukkan NIM anda         : ";
    cin >> nim[i];
    cout << "Masukkan Nama anda        : ";
    cin >> nama[i];
    cout << "Masukkan Prodi anda       : ";
    cin >> prodi[i];
    cout << "Masukkan No telpon anda   : ";
    cin >> no_telp[i];
  }
  cout<<endl<<endl;
}
void pencarian ::proses() {
  for (int i = 0; i < jumlah; i++) {
    for (int b = 0; b < jumlah - 1; b++) {
      if (nim[b] > nim[b + 1]) {
        temp = nim[b];
        nim[b] = nim[b + 1];
        nim[b + 1] = temp;
      }
    }
  }
  cout<<endl;
  cout << "Urutkan berdasarkan nim terkecil " << endl;
  for (int i = 0; i < jumlah; i++) {
    cout << "nama       : " << nama[i] << endl;
    cout << "nim        : " << nim[i] << endl;
    cout << "prodi      : " << prodi[i] << endl;
    cout << "no telp    : " << no_telp[i] << endl;
  }
  cout << endl;
  for (int i = 0; i < jumlah; i++) {
    for (int b = 0; b < jumlah - 1; b++) {
      if (nim[b] < nim[b + 1]) {
        temp = nim[b];
        nim[b] = nim[b + 1];
        nim[b + 1] = temp;
      }
    }
  }
  cout<<endl;
  cout << "Urutkan berdasarkan nim terbesar " << endl;
  for (int i = 0; i < jumlah; i++) {
    cout << "nama       : " << nama[i] << endl;
    cout << "nim        : " << nim[i] << endl;
    cout << "prodi      : " << prodi[i] << endl;
    cout << "no telp    : " << no_telp[i] << endl;
  }
  cout<<endl;
  
  // cout << "Input NIM yang dicari : ";

//   for (int i = 0; i < jumlah; i++) {
//     if (no == nim[i]) {
//       cout<<endl;
//       cout << "\nData ditemukan pada indeks ke : " << i<<endl;
//       cout << "nama        : " << nama[i] << endl;
//       cout << "nim         : " << nim[i] << endl;
//       cout << "prodi       : " << prodi[i] << endl;
//       cout << "no telp     : " << no_telp[i] << endl;
//     }
//   }
//   cout<<endl;
// 
  }



void pencarian::output() {
  cout<<endl;
  cout<<"Urutan data dari Kecil Ke Besar"<<endl<<endl;
  for (int i = 0; i < jumlah; i++) {
    for (int b = 0; b < jumlah - 1; b++) {
      if (nim[b] > nim[b + 1]) {
        temp = nim[b];
        nim[b] = nim[b + 1];
        nim[b + 1] = temp;
      }
    }
  }
  for (int i = 0; i < jumlah; i++) {
    cout << "NIM        : " << nim[i] << endl;
    cout << "NAMA       : " << nama[i] << endl;
    cout << "PRODI      : " << prodi[i] << endl;
    cout << "NO_TELP    : " << no_telp[i] << endl;
  }

  cout<<endl;
  cout<<"Urutan data dari Besar ke Kecil"<<endl<<endl;
   for (int i = 0; i < jumlah; i++) {
    for (int b = 0; b < jumlah - 1; b++) {
      if (nim[b] < nim[b + 1]) {
        temp = nim[b];
        nim[b] = nim[b + 1];
        nim[b + 1] = temp;
      }
    }
  }
  for (int i = 0; i < jumlah; i++) {
    cout << "NIM        : " << nim[i] << endl;
    cout << "NAMA       : " << nama[i] << endl;
    cout << "PRODI      : " << prodi[i] << endl;
    cout << "NO_TELP    : " << no_telp[i] << endl;
  }

cout<<endl;
cout<<"Data yang Dicari : ";cin >> no;
  for (int i = 0; i < jumlah; i++) {
    if (no == nim[i]) {
      cout<<endl;
      cout << "\nData ditemukan pada indeks ke: " << i<<endl;
      cout << "NAMA        : " << nama[i] << endl;
      cout << "NIM         : " << nim[i] << endl;
      cout << "prodi       : " << prodi[i] << endl;
      cout << "no telp     : " << no_telp[i] << endl;
    }
  }
}

int main() {
  pencarian x;
  x.input();
  x.proses();
  x.output();
}