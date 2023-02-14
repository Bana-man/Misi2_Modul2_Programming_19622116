#include <iostream>
#include <string>
using namespace std;

string inputNama();
void dashMasuk();
void opsiToko();
void lihatMenu();
void pesanMenu();
void tutupToko();
int main();

string inputNama(){
    cout << "Masukkan nama anda : ";

    string nama;
    getline(cin,nama);

    return nama;
}

void dashMasuk(){
    int pilih1;

    cout << "1. Lihat Menu \n2. Pilih Menu \n3. Keluar Toko" << endl << endl;
    cout << "Masukkan pilihan : ";
    cin >> pilih1;

    if (pilih1 == 1){
        lihatMenu();
        dashMasuk();
    }else if (pilih1 == 2){
        pesanMenu();
    }else if (pilih1 == 3){
        main();
    }else {
        cout << "!!! INVALID INPUT !!!" << endl;
        dashMasuk();
    }
}

void opsiToko(){
    string opsi;
    string nama;

    cout << "Buka Toko? (Y / N)" << endl;
    cin >> opsi;
    cin.ignore();

    if (opsi == "Y") {
        nama = inputNama();
        cout << endl;
        cout << "Hallo " << nama << endl;
        dashMasuk();
    }else if (opsi == "N") {
        tutupToko();
    }else {
        cout << "!!! INVALID INPUT !!!" << endl;
        opsiToko();
    }
}


void lihatMenu(){
    cout << "--- MENU ---" << endl;
    cout << "- Makanan" << endl;
    cout << "1. Nasi Ayam Goreng (F1101) Rp20000" << endl;
    cout << "2. Nasi Ayam Bakar (F1102) Rp21000" << endl;
    cout << "3. Nasi Ayam Crispy (F1103) Rp23000" << endl;
    cout << "4. Nasi Ayam Geprek (F1104) Rp25000" << endl;
    cout << "5. Nasi Ayam Gulai (F1105) Rp20000" << endl;
    cout << "" << endl;
    cout << "- Minuman" << endl;
    cout << "1. Air Mineral (D1201) Rp5000" << endl;
    cout << "2. Es Teh (D1202) Rp8000" << endl;
    cout << "3. Lemon Tea (D1203) Rp10000" << endl;
    cout << "4. Lychee Tea (D1204) Rp10000" << endl;
    cout << "5. Kopi Susu (D1205) Rp9000" << endl << endl;
}

void pesanMenu(){
    string IDmenu;

    cout << "Masukkan ID Menu : ";
    cin >> IDmenu;

    
}

void tutupToko(){

}

int main(){
    int jumlahpelanggan = 0;

    opsiToko();
    return 0;
}