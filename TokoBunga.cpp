#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
main(){
	
	system("color 16");
    cout << "Program Penjualan Bunga" <<endl;
        int disk,jum,pil,bayar,kembalian,mawar,aster,lily,matahari,tot,harga_rangk,totalhargabunga,diskon5persen,diskonakhir;
        string nama,rangk;
        mawar = 5000;
        aster = 10000;
        lily = 10000;
        matahari = 20000;
        harga_rangk = 5000;
    
    cout << "Masukkan Nama Pembeli         : ";getline(cin, nama);
    cout << "Pilihan Jenis Bunga" <<endl;
    cout << "[1] Bunga Mawar" <<endl;
    cout << "[2] Bunga Aster" <<endl;
    cout << "[3] Bunga Lily" <<endl;
    cout << "[4] Bunga Matahari" <<endl;
    cout << "Masukkan Pilihan Bunga        : ";
    cin >>pil;
    cout << "Masukkan Jumlah Bunga         : ";
    cin >>jum;
    cout << "Apakah Bunga Di Rangkai (y/t) : ";
    cin >>rangk;
    
    system("cls");
    
    if (pil == 1)
    {
        if (jum <=20)
        {
            totalhargabunga = mawar*jum;
            disk = 0;
            tot = mawar*jum;
        }
        else if (jum >20 && jum <50)
        {
            totalhargabunga = mawar*jum;
            disk = 2000;
            tot = mawar*jum-2000;
        }
        else if (jum >=50)
        {
            totalhargabunga = mawar*jum;
            disk = 5000;
            tot = mawar*jum-5000;
        }
    }
    if (pil == 2)
    {
        totalhargabunga = aster*jum;
        disk = 0;
        tot = aster*jum;
        if (jum > 25 && jum < 70)
        {
            totalhargabunga = aster*jum;
            disk = 3000;
            tot = aster*jum-3000;
        }
        else if (jum >= 70)
        {
            totalhargabunga = aster*jum;
            disk = 7000;
            tot = aster*jum-7000;
        }
    }
    if (pil == 3)
    {
        totalhargabunga = lily*jum;
        disk = 0;
        tot = lily*jum;
        if (jum > 25 && jum < 70)
        {
            totalhargabunga = lily*jum;
            disk = 3000;
            tot = lily*jum-3000;
        }
        else if (jum >= 70)
        {
            totalhargabunga = lily*jum;
            disk = 7000;
            tot = lily*jum-7000;
        }
    }
    if (pil == 4)
    {
        totalhargabunga = matahari*jum;
        disk = 0;
        tot = matahari*jum;
        if (jum >=30)
        {
            totalhargabunga = matahari*jum;
            disk = 8000;
            tot = matahari*jum-8000;
        }
    }
    if (rangk == "y")
    {
        tot = tot+harga_rangk;
    }
    if (rangk == "t")
    {
        harga_rangk= 0;
        tot = tot+harga_rangk;
    }
    if (tot > 50000)
    {
        diskon5persen = tot*0.05;
        tot = tot-diskon5persen;
    }
    if (tot <= 50000)
    {
        diskon5persen = 0;
        tot = tot-diskon5persen;
    }
    diskonakhir = diskon5persen+disk;
    
	system("color b4");
    cout << "=========================================================" <<endl;
    cout << "                  TOKO BUNGA SEJAHTERA                   " <<endl;
    cout << "               Jl.Wachid Hasyim 17 Bantul                " <<endl;
    cout << "---------------------------------------------------------" <<endl;
    cout << "\n";
    cout << " Nama Pembeli      : "<< nama <<endl;
    cout << " Pilihan Bunga     : "<< pil <<endl;
    cout << " Jumlah Bunga      : " << jum << " Ikat"  <<endl;
    cout << " Total Harga Bunga : " << "Rp. " << totalhargabunga <<endl;
    cout << " Diskon            : " << "Rp. " << diskonakhir <<endl;
    cout << " Biaya Rangkai     : " << "Rp. " << harga_rangk <<endl;
    cout << " Total             : " << "Rp. " << tot <<endl;
    cout << "---------------------------------------------------------" <<endl;
    cout << " Uang Bayar        : " << "Rp. ";cin >> bayar;
    kembalian = bayar - tot;
    cout << " Uang Kembalian    : " << "Rp. " << kembalian << endl;
    cout << "\n";
    cout << "---------------------TERIMAKASIH-------------------------" << endl;
    cout << " barang yang sudah dibeli                 Hormat kami,   " << endl;
    cout << " tidak dapat dikembalikan :)                   _         " << endl;
    cout << "                                            | |_   |     " << endl;
    cout << "                                             -  ^^^      " << endl;
    cout << "                                          (Fajar R.Y.)   " << endl;
    cout << "=========================================================" << endl;
}
