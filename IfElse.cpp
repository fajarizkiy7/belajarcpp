//If and Else If Function
#include<iostream>
#include<conio.h>

using namespace std;

main(){
	int a,b,jml,kurang,kali,mod,pil;
	float bagi;
	
	cout<<"Pilihan Rumus : "<<endl;
	cout<<"\n1. Jumlah ";
	cout<<"\n2. Kurang ";
	cout<<"\n3. Kali   ";
	cout<<"\n4. Modulo ";
	cout<<"\n5. Bagi   "<<endl;
	cout<<"\nInput Pilihan : ";cin>>pil;
	system("cls");
	
	cout<<"Input Bilangan 1 : ";cin>>a;
	cout<<"Input Bilangan 2 : ";cin>>b;
	
	if(pil==1){
		jml=a+b;
	    cout<<"Hasil Penjumlahan : "<<jml;	
	}
	
	else if(pil==2){
		kurang=a-b;
	    cout<<"Hasil Pengurangan : "<<kurang;
	}
	
	else if(pil==3){
		kali=a*b;
  	    cout<<"Hasil Perkalian   : "<<kali;	
	}
	
	else if(pil==4){
		mod=a%b;
	    cout<<"Hasil Modulo      : "<<mod;	
    }
	
	else if(pil==5){
		bagi=float(a)/b;
	    cout<<"Hasil Pembagian   : "<<bagi;
	}
	
	else
	cout<<"Salah Woyyy Raono To :(";
	
	return 0;
}
