#include <iostream>
using namespace std;

int main(){
	int harga1, harga2, harga3, harga4, harga5, a, agrg, ab, cg, ug, ag, total, bayar, diskon, jarak, ongkir;
	char c;
	
	cout<<"Berapa jauh rumah anda dari restoran kami? [dalam km] : ";cin>>jarak;
	cout<<endl;
	cout<<"Daftar menu"<<endl;
	cout<<"1. ayam goreng \t Rp 17.000 \n2. ayam bakar \t Rp 25.000   \n3. udang goreng  Rp 19.000 \n4. cumi goreng \t Rp 20.000 \n5. ayam geprek \t Rp 21.000" <<endl;
	cout<<endl;
	
	cout<<"berapa ayam goreng yang anda pesan : ";cin>>agrg;
	harga1= agrg * 17000;
	cout<<"berapa ayam bakar yang anda pesan : ";cin>>ab;
	harga2 = ab * 25000;
	cout<<"berapa cumi goreng yang anda pesan : ";cin>>cg;
	harga3= cg * 20000;
	cout<<"berapa udang goreng yang anda pesan : ";cin>>ug;
	harga4 = ug * 19000;
	cout<<"berapa ayam geprek yang anda pesan : ";cin>>ag;
	harga5= ag* 21000;
	
	if (jarak <= 3 ){
		ongkir = 15000;	
	}
	else {
		ongkir = 25000;
	}
	
	total = harga1 + harga2 + harga3 + harga4 + harga5;
	
	if (total >=25000 && total <=49999){
		bayar = total + ongkir - 3000;
	}
	else if ( total >= 50000 && total <=149999){
		diskon = total * 15/100;
		bayar= (total - diskon) + ongkir - 5000;
	}
	else if (total >= 150000){
		diskon = total * 35/100;
		bayar= (total - diskon) + ongkir - 8000;	
	}
	else {
		bayar= total + ongkir;
	}
	system("cls");
	
	cout<<"--------------------------------------------"<<endl;
	cout<<"		RUMAH MAKAN DIDIK SENTOSA 	"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"AYAM GORENG 		: "<<agrg<<endl;
	cout<<"AYAM BAKAR 		: "<<ab<<endl;
	cout<<"UDANG GORENG 		: "<<ug<<endl;
	cout<<"CUMI GORENG 		: "<<cg<<endl;
	cout<<"AYAM GEPREK 		: "<<ag<<endl;
	if (total >=25000 && total <=49999){
		cout<<"Ongkir anda		: "<<ongkir<<endl;
		cout<<"Total bayar anda 	: "<<total<<" + "<<ongkir<<" - 3000 = "<<bayar;
	}
	else if (total >= 50000 && total <=149999){
		cout <<"Total diskon anda 	: "<<diskon<<endl;
		cout<<"Ongkir anda 		: "<<ongkir<<endl;
		cout<<"Total bayar anda 	: "<<total<<" + "<<ongkir<<" - 5000 - "<<diskon<<" = "<<bayar<<endl;
		cout<<"total bayar anda 	= "<<bayar;
	}
	else if (total >= 150000){
		cout <<"Total diskon anda 	: "<<diskon<<endl;
		cout<<"Ongkir anda 		: "<<ongkir<<endl;
		cout<<"Total bayar anda 	: "<<total<<" + "<<ongkir<<" - 8000 - "<<diskon<<" = "<<bayar<<endl;
		cout<<"total bayar anda 	= "<<bayar;
	}
	else {
		cout<<"Ongkir anda 		: "<<ongkir<<endl;
		cout<<"Total bayar anda 	: "<<total<<" + "<<ongkir <<" = "<<bayar<<endl;
		cout<<"total bayar anda 	= "<<bayar;
		
	}
	return 0;
}
	