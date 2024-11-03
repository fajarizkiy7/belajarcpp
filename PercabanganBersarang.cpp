#include <iostream>
using namespace std;

int main(){
	char nama[50];
	int jenisKelamin, statusPernikahan, kendaraan;
	double gajiPokok, uangMakan, pajak, uangTransport = 0, tunjanganAyah = 0;
	long nik, gajiKotor, gajiBersih;
	
	//input
	cout << "Masukkan nama : ";
	cin.getline(nama, sizeof(nama));
	
	cout << "Masukkan NIK  : ";
	cin >> nik;
	
	cout << "Masukkan jenis kelamin (0 = laki-laki, 1 = perempuan) : ";
	cin >> jenisKelamin;
	
	cout << "Masukkan status pernikahan (0= single, 1 = menikah)   : ";
	cin >> statusPernikahan;
	
	cout << "Jenis transportasi (0 = mobil, 1 = motor)             : ";
	cin >> kendaraan;
	
	cout << "Gaji pokok    : ";
	cin >> gajiPokok;
	
	cout << "Uang makan    : ";
	cin >> uangMakan;
	
	//logic
	if (jenisKelamin == 1 && statusPernikahan == 1){
		//jika jenis kelamin laki-laki dan status sudah menikah
		tunjanganAyah = 500;
	}
	if (kendaraan == 0){
		//jika kendaraan mobil
		uangTransport = 500;
	} else if (kendaraan == 1){
		//jika kendaraan motor
		uangTransport = 1000;
	}
	
	gajiKotor = gajiPokok + tunjanganAyah + uangMakan + uangTransport;
	
	pajak = 0.05 * gajiKotor;
	gajiBersih = gajiKotor - pajak;
	system("cls");
	
	//output
	cout << "============================================" << endl;
	cout << "Nama karyawan         : " << nama << endl;
	cout << "N I K                 : " << nik << endl;
	cout << "Tunjangan             : " << tunjanganAyah << endl;
	cout << "Uang Transportasi     : " << uangTransport << endl;
	cout << "Gaji kotor            : " << gajiKotor << endl;
	cout << "Pajak                 : " << pajak << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Total gaji karyawan   : "<< gajiBersih << endl;
	cout << "============================================";
	
	return 0;
}
