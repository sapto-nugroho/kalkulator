#include <iostream>
using namespace std;

int main(){
	double angka1,angka2, hasil_penjumlahan, hasil_pengurangan, hasil_perkalian;
	
	cout<<"Masukkan angka pertama:";
	cin>>angka1;
	
	cout<<"Masukkan angka kedua:";
	cin>>angka2;
	
	hasil_penjumlahan = angka1 + angka2;
	hasil_pengurangan = angka1 - angka2;
	hasil_perkalian = angka1 * angka2;
	
	cout<<"Hasil Penjumlahan = "<<hasil_penjumlahan<<endl;
	cout<<"Hasil Pengurangan = "<<hasil_pengurangan<<endl;
	cout<<"Hasil Perkalian = "<<hasil_perkalian;
	
	return 0; 
}
