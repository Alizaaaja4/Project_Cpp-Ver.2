#include <iostream>
#include <cmath>

const double phi = 3.14;

using namespace std;

void balok (){
    int menu;
    double p, l, t, hasil;

    cout << "\n= = = = = = = GEO-Calculate Balok = = = = = = =\n";
    cout << "[1]. Menghitung luas permukaan\n";
    cout << "[2]. Menghitung diagonal ruang\n";
    cout << "[3]. Menghitung keliling balok\n";
    cout << "[4]. Menghitung volume balok\n";
    cout << "[5]. Kembali\n\n";

    cout << "Pilih nomor menu: "; cin >> menu;
    switch (menu){
        case 1: cout << "-=-=-= Menghitung Luas Permukaan -=-=-=\n\n";
                cout << "Input panjang: "; cin >> p;
                cout << "Input lebar: "; cin >> l;
                cout << "Input tinggi: "; cin >> t;

                hasil = 2 * (p*l) + (p*t) + (l*t);
 
                cout << "Hasil: " << hasil <<" cm\n";
                balok(); break;
        
        case 2: cout << "-=-=-= Menghitung Diagonal Ruang -=-=-=\n\n";
                cout << "Input panjang: "; cin >> p;
                cout << "Input lebar: "; cin >> l;
                cout << "Input tinggi: "; cin >> t;

                hasil = pow((p * p + l * l + t * t), 2);

                cout << "Hasil: " << hasil <<" cm\n";
                balok(); break;
        
        case 3: cout << "-=-=-= Menghitung Keliling Balok -=-=-=\n\n";
                cout << "Input panjang: "; cin >> p;
                cout << "Input lebar: "; cin >> l;
                cout << "Input tinggi: "; cin >> t;

                hasil = 4*(p+l+t);

                cout << "Hasil: " << hasil <<" cm\n";
                balok(); break;

        case 4: cout << "-=-=-= Menghitung Volumen Balon -=-=-=\n\n";
                cout << "Input panjang: "; cin >> p;
                cout << "Input lebar: "; cin >> l;
                cout << "Input tinggi: "; cin >> t;

                hasil = p*l*t;

                cout << "Hasil: " << hasil <<" cm\n";
                balok(); break;
        
        case 5: cout << "Keluar, Terima kasih!";
                exit(0);

        default: cout << "Maaf option yang anda masukan tidak tersedia!!" << endl;
                balok();
    }
}

int main (){
    int menu;
    cout << "\n= = = = = = = GEO-Calculate = = = = = = =\n";
    cout << "[1]. Balok\n";
    cout << "[2]. Kubus\n";
    cout << "[3]. Bola\n";
    cout << "[4]. Limas\n";
    cout << "[5]. Prisma\n";
    cout << "[6]. Tabung\n";
    cout << "[7]. Kerucut\n";
    cout << "= = = = = = = = = = = = = = = = = = = = =\n\n";

    cout << "Pilih nomor menu: "; cin >> menu;

    switch (menu){
        case 1: balok(); break;
        case 2: cout << "test 2"; break;
        case 3: cout << "test 3"; break;
        case 4: cout << "test 4"; break;
        case 5: cout << "test 5"; break;
        case 6: cout << "test 6"; break;
        case 7: cout << "test 7"; break;
        default: cout << "test 8"; break;
    }

    return 0;
}
