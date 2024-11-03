#include <iostream>

using namespace std;

//Variabel Global
float total_bobot=0,total_sks=0,ips[5],jml_sks[15],jml_bobot[15];

//Prosedur
void jumlahSemester(int c){
	for (int i=1;i<=c;i++){
		cout<<"+++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"<< Semester ke-"<<i<<" >>"<<endl;
		cout<<"|  Jumlah SKS     : ";cin>>jml_sks[i];
		cout<<"|  Bobot SKS      : ";cin>>jml_bobot[i];
		cout<<"-------------------------------------------"<<endl;
		
		//Menghitung IPS
		ips[i]=jml_bobot[i]/jml_sks[i];
		
		//Menampilkan IPS
		cout<<"Indeks Prestasi Semester (IPs) : "<<ips[i]<<endl;
		cout<<"-------------------------------------------"<<endl;
		
		/*Menjumlahkan total bobot dan total sks setiap proses perulangan */
		total_bobot += jml_bobot[i];
		total_sks += jml_sks[i];
	}
}

//Fungsi
float hitungIPk(float a, float b){
	float total;
	total=total_bobot/total_sks;
	return total;
}

main(){
	
	//Variabel Lokal
	int jml_sm,nim;
	float total_akhir;
	string nama;
	
	cout<<"==========================================="<<endl;
	cout<<"|                                         |"<<endl;
	cout<<"|     MENGHITUNG IPK & IPS MAHASISWA      |"<<endl;
	cout<<"|                                         |"<<endl;
	cout<<"==========================================="<<endl;
	cout<<"| >>> Selamat Datang di Portal Amikom <<< |"<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"| Nama Mahasiswa  : "; getline(cin,nama);
	cout<<"| NIM Mahasiswa   : "; cin>>nim;
	cout<<"| Anda Semester   : "; cin>>jml_sm;
	cout<<"-------------------------------------------\n\n";
	
	//Memanggil Prosedur
	jumlahSemester(jml_sm);
	
	//Memanggil Fungsi
	total_akhir=hitungIPk(total_sks,total_bobot);
	
	cout<<"\n\n===========================================\n";
	cout<<"|       --- Kartu Hasil Studi ---         |\n";
	cout<<"===========================================\n";
	cout<<"| Nama Mahasiswa  : "<<nama<<endl;
	cout<<"| NIM Mahasiswa   : "<<nim<<endl;
	cout<<"| Semester        : "<<jml_sm<<endl;
	cout<<"-------------------------------------------\n";
	cout<<"| Total seluruhan bobot : "<<total_bobot<<endl;
	cout<<"| Total seluruhan SKS   : "<<total_sks<<endl;
	cout<<"| IPK Selama "<<jml_sm<<" Semester : "<<total_akhir<<endl;
	cout<<"-------------------------------------------\n";
	if(total_akhir>=3.51 && total_akhir<=4){
		cout<<"===========================================\n";
		cout<<"| SELAMAT !! Anda Lulus Predikat Pujian   |\n";
		cout<<"===========================================\n";
	}else if(total_akhir>=3.01 && total_akhir<=3.50){
		cout<<"===========================================\n";
		cout<<"|       IPK Anda Sangat Memuaskan         |\n";
		cout<<"===========================================\n";
	}else if(total_akhir>=2.76 && total_akhir<=3){
		cout<<"===========================================\n";
		cout<<"|           IPK Anda Memuaskan            |\n";
		cout<<"===========================================\n";
	}else{
		cout<<"===========================================\n";
		cout<<"|        Terus Tingkatkan IPK Anda        |\n";
		cout<<"===========================================\n";
	}
}
