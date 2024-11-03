#include <iostream>
#include <conio.h>

using namespace std;

main(){
	//deklarasi variabel
	char nama[20], alamat[30];
	float ipk,nilai1,nilai2,rata;
	
	//input data ke variabel
	cout<<"Nama  : ";gets(nama);
	cout<<"Alamat: ";gets(alamat);
	cout<<"IPK   : ";cin>>ipk;
	cout<<"Nilai1: ";cin>>nilai1;
	cout<<"Nilai2: ";cin>>nilai2;
	system("cls");
	
	//menampilkan hasil inputan variabel
	cout<<"\n\tContoh Variabel\n\n";
	cout<<"Nama  : "<<nama<<endl;
	cout<<"Alamat: "<<alamat<<"\n";
	cout<<"IPK   : "<<ipk<<endl;
	rata=(nilai1+nilai2)/2;
	cout<<"Rata  : "<<rata;
	
	return 1;
}
