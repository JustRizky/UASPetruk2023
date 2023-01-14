#include <iostream>

using namespace std;

struct kubus{
    float sisi;
    float luas;
    float volume;
} myKubus;

struct balok{
    float panjang;
    float lebar;
    float tinggi;
    float luas;
    float volume;
} myBalok;

struct tabung{
    float jariJari;
    float tinggi;
    float luas;
    float volume;
} myTabung;

void header();
int menuAwal();
void menuAkhir();
void menuKubus();
void menuBalok();
void menuTabung();

int main(){
    int pilih = menuAwal();
    char ulang;

    enum opsiPilih{Kubus=1, Balok, Tabung, Keluar};

    while(pilih >1 | pilih <3){
        switch(pilih){
            case Kubus:
                menuKubus();
                break;
            case Balok:
                menuBalok();
                break;
            case Tabung:
                menuTabung();
                break;
            case Keluar:
                break;
            default:
                cout << "Error: Pilihan Tidak Tersedia!" << endl;
                break;
        }

        if (pilih == Keluar){
            break;
        }
        //Menu Ulang
        cout << "=======================" << endl;
        cout << "Apakah Anda Ingin Mengulang (Y/n): ";
        cin >> ulang;
        if(ulang == 'Y' || ulang == 'y'){
            pilih = menuAwal();
        } else if(ulang == 'N' || ulang == 'n'){
            break;
        } else{
            pilih = 100;
        }
    }
    //Menu Keluar
    menuAkhir();
    return 0;
}

void header(){
    system("clear");
    cout << "=======================" << endl;
    cout << "Kalkulator Bangun Ruang" << endl;
    cout << "=======================" << endl;
}

void menuAkhir(){
    system("clear");
    cout << "Program Berakhir :)" << endl;
}

int menuAwal(){
    header();
    cout << "1. Menghitung Kubus" << endl;
    cout << "2. Menghitung Balok" << endl;
    cout << "3. Menghitung Tabung" << endl;
    cout << "4. Keluar" << endl;
    cout << "=======================" << endl;

    int pilihMenuAwal;
    cout << "Masukkan Pilihan: ";
    cin >> pilihMenuAwal;
    return pilihMenuAwal;
}

void menuKubus(){
    header();
    cout << "Menu Kubus" << endl;
    cout << "=======================" << endl;

    cout << "Masukkan Sisi: ";
    cin >> myKubus.sisi;
    cout << "=======================" << endl;

    // Rumus
    myKubus.luas = 6*myKubus.sisi*myKubus.sisi;
    cout << "Luas Kubus = " << myKubus.luas << endl;
    myKubus.volume = myKubus.sisi*myKubus.sisi*myKubus.sisi;
    cout << "Volume Kubus = " << myKubus.volume << endl;
}

void menuBalok(){
    header();
    cout << "Menu Balok" << endl;
    cout << "=======================" << endl;

    cout << "Masukkan Panjang: ";
    cin >> myBalok.panjang;
    cout << "Masukkan Lebar: ";
    cin >> myBalok.lebar;
    cout << "Masukkan Tinggi: ";
    cin >> myBalok.tinggi;
    cout << "=======================" << endl;

    //Rumus
    myBalok.luas = 2*((myBalok.panjang*myBalok.lebar) + (myBalok.panjang*myBalok.tinggi) + (myBalok.lebar*myBalok.tinggi));
    cout << "Luas Balok = " << myBalok.luas << endl;
    myBalok.volume = myBalok.panjang*myBalok.lebar*myBalok.tinggi;
    cout << "Volume Balok = " << myBalok.volume << endl;
}

void menuTabung(){
    header();
    cout << "Menu Kubus" << endl;
    cout << "=======================" << endl;

    cout << "Masukkan Jari-Jari: ";
    cin >> myTabung.jariJari;
    cout << "Masukkan Tinggi: ";
    cin >> myTabung.tinggi;
    cout << "=======================" << endl;

    //Rumus
    float phi = 3.14286;
    myTabung.luas = 2*phi*myTabung.jariJari*(myTabung.jariJari+myTabung.tinggi);
    cout << "Luas Tabung = " << myTabung.luas << endl;
    myTabung.volume = phi*myTabung.jariJari*myTabung.jariJari*myTabung.tinggi;
    cout << "Volume Tabung = " << myTabung.volume << endl;
}