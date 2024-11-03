#include <iostream>
#include <iomanip>
#define p 6 // deklarasi konstanta

using namespace std;

main(){

	char nama[50];
	string alamat, hobi;
	
	int a,b,c,d,e,f;
	float g,r,hasil;//luas,keliling;
	
	const float phi=3.14; //deklarasi konstanta
	
	cout<<"Nama   : ";
	gets(nama);
	cout<<"Alamat : ";
	getline(cin,alamat); //fungsi gets untuk string bukan char
	cout<<"Hobi   : ";
	getline(cin,hobi);
	
	cout<<"Nilai a  :";
	cin>>a;
	cout<<"Nilai b  :";
	cin>>b;
	/*cout<<"Jari-jari:";
	cin>>r;*/
	
	c=a+b;
	d=a*b;
	e=a-b;
	f=a%b;
	g=float(a)/b; //g=a/float(b) --> tipa casting --> manipulasi tipe data
	hasil=phi+c;
	/*luas=phi*r*r;
	keliling=2*phi*r;*/
	
	cout<<" Jumlah "<<c<<" Kali "<<d<<" Kurang "<<e<<" Modulo "<<f
	    <<" Bagi "<<setprecision(3)<<g;
	cout<<"\nHasil "<<setiosflags(ios::fixed)<<setprecision(2)<<hasil<<" Konst "<<p<<endl; //mengatur desimal
	/*cout<<"Luas Lingkaran = "<<luas<<endl;
	cout<<"Keliling Lingkaran = "<<keliling;*/
	
	return 0;

}


