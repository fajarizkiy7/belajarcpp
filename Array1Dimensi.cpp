#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int A[10],bil,hapus,pil,edit,jml; //deklarasi array
	char jwb;
	
	menu:
		system("cls");
		cout<<"\n\nManipulasi Array\n";
		cout<<"[1] Input Array \n";
		cout<<"[2] Output Array \n";
		cout<<"[3] Cari Nilai Array \n";
		cout<<"[4] Edit \n";
		cout<<"[5] Hapus Index Array \n";
		cout<<"[6] Keluar \n";
		
		cout<<"Silahkan Pilih : ";
		cin>>pil;
		
		switch(pil){
			case(1):
				//input element array
				ulangi:
					cout<<"Input Jml Data : ";
					cin>>jml;
					if (jml > 9)
					{
						//Jika data melebihi dari batas yang ditentukan maka tampilkan pesan
						cout<<"\nMaaf, max jumlah data adalah 10!\n\n";
						
						//Kemudian meminta user mengulangi memasukkan jumlah data
						goto ulangi;
					}
					else
					{
						for (int i=0; i<jml; i++)
						{
							cout<<"A["<<i<<"] = ";
							cin>>A[i];
						}
						cout<<"\nApa akan kembali ke menu[Y/T]: ";
						cin>>jwb;
						if(jwb == 'Y'||jwb == 'y')
						goto menu;
						break;
					}
			case(2):
				//menampilkan isi dari elemen array
				cout<<"\nNilai Array : \n";
				for(int c=0; c < jml; c++)
				{
					cout<<A[c]<<" ";
				}
				cout<<"\nApa akan kembali ke menu[Y/T]: ";
				cin>>jwb;
				if(jwb == 'Y'||jwb == 'y')
				goto menu;
				break;
			case(3):
				//cari
				cout<<"\nMasukkan Nilai yang Dicari : ";
				cin>>bil;
				for (int c = 0; c < jml; c++)
				{
					if (A[c] == bil)
					cout<<"Di elemen ke "<<c+1;
				}
				cout<<"\nApa akan kembali ke menu[Y/T]: ";
				cin>>jwb;
				if(jwb == 'Y'||jwb == 'y')
				goto menu;
				break;
			case(4):
				//edit
				cout<<"Index yang akan diedit : ";
				cin>>edit;
				cout<<"A["<<edit<<"]=";
				cin>>A[edit];
				
				//output
				cout<<"\nSetelah Edit : \n";
				for(int n=0; n<jml; n++)
				{
					cout<<A[n]<<" ";
				}
				cout<<"\nApa akan kembali ke menu[Y/T]: ";
				cin>>jwb;
				if(jwb == 'Y'||jwb == 'y')
				goto menu;
				break;
			case(5):
				//hapus
				cout<<"\nNilai yang akan dihapus : ";
				cin>>hapus;
				/*cout<<"\nData yang baru : \n";
				for (int n = 0; n<5; n++)
				{
					A[n] = A[n+1];
				}*/
				
				for (int j = 0; j<jml; j++)
				{
					if (hapus == A[j])
					{
						//Jika nilai yang di masukkan user sesuai dengan salah satu
						//nilai data di index array
						for (int k=j /* dimulai dari index nilai yang dutemukan */; k<5;k++)
						{
							//menggeser nilai i data pada index array sampai jumlah maksimal data array
							A[k]/* Nilai index saat ini */ = A[k + 1]/* Nilai index selanjutnya */;
						}
					
					//Mengurangi jumlah array karena salah satu datanya telah dihapus
					jml -= 1;
					break;
					}
				}
				//output hapus
				for (int n=0; n<jml; n++)
				{
					cout<<" "<<A[n];
				}
				cout<<"\nApa akan kembali ke menu[Y/T]: ";
				cin>>jwb;
				if(jwb == 'Y'||jwb == 'y')
				goto menu;
				break;
			default:
			cout<<"\nTerimakasih...\n";
			break;	
		}
	getch();
}
