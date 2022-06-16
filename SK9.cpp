#include<iostream>
#include <string.h>
using namespace std;

class sk9{
	public :
		void input(){
			cout << "Banyak Mahasiswa : ";
      cin >> n;
      
			for (i=0; i<n; i++){
              cout << "Masukkan nim ke  "<<i  <<" = ";
            	cin >> B[i];
              cout << "Masukkan nama ke "<<i  <<" = ";
            	cin >> nama[i];
        
    		}
      cout<<endl;
		 }
		void proses(){
      cout<<"masukkan baris ";cin>>baris;
      cout<<"masukkan kolom ";cin>>kolom;
		    i=0;
		    for(k=0;k<baris;k++){
		    	for(L=0;L<kolom;L++){
            if (L==0){
             F[k][L] = B[i]; 
            }
             else {
               F[k][L] = nama[i];
             } 
              }
					i++;	
				}
			}
		void output(){
      cout<<endl;
		  cout << "mahasiswa : "<<endl;
			for(k=0;k<baris;k++){
		    	for(L=0;L<kolom;L++){
		    		cout <<F[k][L] << " ";
				}
				cout<<endl;
			}	
		}
	private:
	string F[10][10]; 
  string B[24];
  string nama[10];
  int baris,kolom;
	int i, k, L, q;
	int n ;
};

int main(){
	sk9 x;
	x.input();
	x.proses();
	x.output();
	return 0;
}