#include <iostream>
#include <cmath>

const double phi = 3.14;

using namespace std;

void balok (){
    int menu; double p, l, t, hasil;

    cout << "\n= = = = = = = GEO-Calculate Balok = = = = = = =\n";
    cout << "[1]. Menghitung luas permukaan" << endl;
    cout << "[2]. Menghitung diagonal ruang" << endl;
    cout << "[3]. Menghitung keliling balok" << endl;
    cout << "[4]. Menghitung volume balok" << endl;
    cout << "[5]. Exit\n\n";

    cout << "Pilih nomor menu: "; cin >> menu;
    switch (menu){
        case 1: cout << "-=-=-= Menghitung Luas Permukaan -=-=-=\n\n";
                cout << "Input panjang: "; cin >> p;
                cout << "Input lebar: "; cin >> l;
                cout << "Input tinggi: "; cin >> t;

                hasil = 2 * (p*l) + (p*t) + (l*t);
 
                cout << "Hasil: " << hasil <<" cm^2\n";
                balok(); break;
        
        case 2: cout << "-=-=-= Menghitung Diagonal Ruang -=-=-=\n\n";
                cout << "Input panjang: "; cin >> p;
                cout << "Input lebar: "; cin >> l;
                cout << "Input tinggi: "; cin >> t;

                hasil = pow((p * p + l * l + t * t), 2);

                cout << "Hasil: " << hasil <<" cm^2\n";
                balok(); break;
        
        case 3: cout << "-=-=-= Menghitung Keliling Balok -=-=-=\n\n";
                cout << "Input panjang: "; cin >> p;
                cout << "Input lebar: "; cin >> l;
                cout << "Input tinggi: "; cin >> t;

                hasil = 4*(p+l+t);

                cout << "Hasil: " << hasil <<" cm^2\n";
                balok(); break;

        case 4: cout << "-=-=-= Menghitung Volume Balon -=-=-=\n\n";
                cout << "Input panjang: "; cin >> p;
                cout << "Input lebar: "; cin >> l;
                cout << "Input tinggi: "; cin >> t;

                hasil = p*l*t;

                cout << "Hasil: " << hasil <<" cm^3\n";
                balok(); break;
        
        case 5: cout << "Keluar, Terima kasih!";
                exit(0);

        default: cout << "Maaf option yang anda masukan tidak tersedia!!" << endl;
                balok();
    }
}

void kubus(){
        int menu; double s, hasil;

        cout << "\n= = = = = = = GEO-Calculate Kubus = = = = = = =\n";
        cout << "[1]. Menghitung luas permukaan" << endl;
        cout << "[2]. Menghitung volume kubus" << endl;
        cout << "[3]. Menghitung keliling kubus" << endl;
        cout << "[4]. Exit" << endl <<endl;
        cout << "Pilih nomor menu: "; cin >> menu;

        switch (menu){
                case 1: cout << "-=-=-= Menghitung Luas Permukaan Kubus -=-=-=\n\n";
                        cout << "Input panjang rusuk: "; cin >> s;
                        
                        hasil = 6* pow(s, 2);

                        cout << "Hasil: " << hasil <<" cm^2\n";
                        kubus(); break;
                
                case 2: cout << "-=-=-= Menghitung Volume Kubus -=-=-=\n\n";
                        cout << "Input panjang rusuk: "; cin >> s;

                        hasil = pow(s, 3);

                        cout << "Hasil: " << hasil <<" cm^3\n";
                        kubus(); break;

                case 3: cout << "-=-=-= Menghitung Keliling Kubus -=-=-=\n\n";
                        cout << "Input panjang rusuk: "; cin >> s;

                        hasil = 12*s;

                        cout << "Hasil: " << hasil <<" cm^2\n";
                        kubus(); break;
                
                case 4: cout << "Keluar, Terima kasih!";
                exit(0);

                default: cout << "Maaf option yang anda masukan tidak tersedia!!" << endl;
                kubus();
        }
}

void bola(){
        int menu; double r, hasil;

        cout << "\n= = = = = = = GEO-Calculate Kubus = = = = = = =\n";
        cout << "[1]. Volume Bola" << endl;
        cout << "[2]. Luas Bola" << endl;
        cout << "[3]. Exit\n\n";
        cout << "Pilih nomor menu: "; cin >> menu;

        switch (menu){
                case 1: cout << "-=-=-= Menghitung Volume Bola -=-=-=\n\n";
                        cout << "Input jari-jari: "; cin >> r;

                        hasil = 4*phi*pow(r,3)/3;

                        cout << "Hasil: " << hasil <<" cm^3\n";
                        bola(); break;

                case 2: cout << "-=-=-= Menghitung Luas Bola -=-=-=\n\n";
                        cout << "Input jari-jari: "; cin >> r;

                        hasil = 4*phi*pow(r,2);

                        cout << "Hasil: " << hasil <<" cm^2\n";
                        bola(); break;
                
                case 3: cout << "Keluar, Terima kasih!";
                        exit(0);

                default: cout << "Maaf option yang anda masukan tidak tersedia!!" << endl;
                bola();
        }
}

void limas(){
        int menu; double luas_alas, keliling_alas, tinggi_segitiga, hasil;

        cout << "\n= = = = = = = GEO-Calculate Limas = = = = = = =\n";
        cout << "[1]. Luas permukaan limas" << endl;
        cout << "[2]. Volume limas" << endl;
        cout << "[3]. Exit\n\n";
        cout << "Pilih nomor menu: "; cin >> menu;

        switch (menu){
                case 1: cout << "-=-=-= Menghitung Luas Permukaan Limas -=-=-=\n\n";
                        cout << "Input luas alas: "; cin >> luas_alas;
                        cout << "Input keliling alas: "; cin >> keliling_alas;
                        cout << "Input tinggi segitiga: "; cin >> tinggi_segitiga;

                        hasil = (luas_alas*keliling_alas*tinggi_segitiga)/4;

                        cout << "Hasil: " << hasil <<" cm^2\n";
                        limas(); break;

                case 2: cout << "-=-=-= Menghitung Volume Limas -=-=-=\n\n";
                        cout << "Input luas alas: "; cin >> luas_alas;
                        cout << "Input tinggi segitiga: "; cin >> tinggi_segitiga;

                        hasil = (luas_alas*tinggi_segitiga)/3;

                        cout << "Hasil: " << hasil <<" cm^2\n";
                        limas(); break;

                case 3: cout << "Keluar, Terima kasih!";
                        exit(0);

                default: cout << "Maaf option yang anda masukan tidak tersedia!!" << endl;
                limas();
        }
}

void prisma(){
        int menu; double luas_alas, keliling_alas, tinggi, hasil;

        cout << "\n= = = = = = = GEO-Calculate Prisma = = = = = = =\n";
        cout << "[1]. Luas permukaan prisma" << endl;
        cout << "[2]. Volume prisma" << endl;
        cout << "[3]. Exit\n\n";
        cout << "Pilih nomor menu: "; cin >> menu;

        switch (menu){
                case 1: cout << "-=-=-= Menghitung Luas Permukaan Limas -=-=-=\n\n";
                        cout << "Input luas alas: "; cin >> luas_alas;
                        cout << "Input keliling alas: "; cin >> keliling_alas;
                        cout << "Input tinggi: "; cin >> tinggi;

                        hasil = 2*luas_alas+(keliling_alas*tinggi);

                        cout << "Hasil: " << hasil <<" cm^2\n";
                        prisma(); break;

                case 2: cout << "-=-=-= Menghitung Volume Limas -=-=-=\n\n";
                        cout << "Input luas alas: "; cin >> luas_alas;
                        cout << "Input tinggi: "; cin >> tinggi;

                        hasil = luas_alas * tinggi;

                        cout << "Hasil: " << hasil <<" cm^3\n";
                        prisma(); break;
                
                case 3: cout << "Keluar, Terima kasih!";
                        exit(0);

                default: cout << "Maaf option yang anda masukan tidak tersedia!!" << endl;
                prisma();
        }
}

void tabung(){
        int menu; double hasil, r, t;

        cout << "\n= = = = = = = GEO-Calculate Tabung = = = = = = =\n";
        cout << "[1]. Luas permukaan tabung" << endl;
        cout << "[2]. Volume tabung" << endl;
        cout << "[3]. Exit\n\n";
        cout << "Pilih nomor menu: "; cin >> menu;

        switch(menu){
                case 1: cout << "-=-=-= Menghitung Luas Permukaan Tabung -=-=-=\n\n";
                        cout << "Input jari-jari: "; cin >> r;

                        hasil = 2*phi*pow(r,2);

                        cout << "Hasil: " << hasil <<" cm^2\n";
                        tabung(); break;
                
                case 2: cout << "-=-=-= Menghitung Volume Tabung -=-=-=\n\n";
                        cout << "Input jari-jari: "; cin >> r;
                        cout << "Input tinggi "; cin >> t;

                        hasil = phi*t*pow(r,2);

                        cout << "Hasil: " << hasil <<" cm^3\n";
                        tabung(); break;
                
                case 3: cout << "Keluar, Terima kasih!";
                        exit(0);

                default: cout << "Maaf option yang anda masukan tidak tersedia!!" << endl;
                tabung();
        }
}

void kerucut(){
        int menu; double r, t, hasil;

        cout << "\n= = = = = = = GEO-Calculate Kerucut = = = = = = =\n";
        cout << "[1]. Volume kerucut" << endl;
        cout << "[2]. Exit\n\n";
        cout << "Pilih nomor menu: "; cin >> menu;

        switch (menu){
                case 1: cout << "-=-=-= Menghitung Volume Kerucut -=-=-=\n\n";
                        cout << "Input jari-jari: "; cin >> r;
                        cout << "Input tinggi "; cin >> t;

                        hasil = phi*t*pow(r,2);

                        cout << "Hasil: " << hasil <<" cm^3\n";
                        kerucut(); break;
                
                case 2: cout << "Keluar, Terima kasih!";
                        exit(0);

                default: cout << "Maaf option yang anda masukan tidak tersedia!!" << endl;
                kerucut();
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
        case 2: kubus(); break;
        case 3: bola(); break;
        case 4: limas(); break;
        case 5: prisma(); break;
        case 6: tabung(); break;
        case 7: kerucut(); break;
        default: cout << "Maaf option yang anda masukan tidak tersedia!!" << endl;
                main();
    }
    return 0;
}
