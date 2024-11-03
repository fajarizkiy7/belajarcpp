//Switch Case Function
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
	
	switch (pil)
	{
		case 1:
			
			jml=a+b;
	    	cout<<"Hasil Penjumlahan : "<<jml;
			break;
				
		
		case 2:
			
			kurang=a-b;
	   		cout<<"Hasil Pengurangan : "<<kurang;
	    	break;
				
		
		case 3:
			
			kali=a*b;
  	    	cout<<"Hasil Perkalian   : "<<kali;
			break;	
			
		
		case 4:
			
			mod=a%b;
	    	cout<<"Hasil Modulo      : "<<mod;	
	    	break;
    		
    	
		case 5:
		
			bagi=float(a)/b;
	    	cout<<"Hasil Pembagian   : "<<bagi;
	    	break;
			
		
		default:
			
			cout<<"Salah Woyyy Pilihane Mung 1 tekan 5, isih tok lanjutke jal";
			break;
			
		
	}
	
	return 0;
}
