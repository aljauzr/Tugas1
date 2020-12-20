#include <iostream>
#include <iomanip>
using namespace std;

int p, l, r, t, pilih;
char ulang;
float luasl, kelilingl, volumet;

int luasLing()
{
    cout << "\nJari-jari\t: "; cin >> r;
    luasl = 3.14*(r*r);
    cout << "Luas Lingkaran adalah " << fixed << setprecision(2) << luasl << endl;
}

int luasKeling()
{
    cout << "\nJari-jari\t: "; cin >> r;
    kelilingl = 3.14*(r*2);
    cout << "Keliling Lingkaran adalah " << fixed << setprecision(2) << kelilingl << endl;
}

int luasVolume()
{
    cout << "\nJari-jari\t: "; cin >> r;
    cout << "Tinggi\t\t: "; cin >> t;
    volumet = 3.14*(r*r*t);
    cout << "Volume Tabung adalah " << fixed << setprecision(1) << volumet << endl;
}

int menu()
{
    cout << "Hitung Lingkaran ==========\n";
    cout << "1. Luas Lingkaran\n2. Keliling Lingkaran\n3. Volume Tabung\n";
    cout << "Pilih: "; cin >> pilih;

    switch(pilih)
    {
    case 1:
        luasLing();
        break;

    case 2:
        luasKeling();
        break;

    case 3:
        luasVolume();
        break;

    default:
        cout << "Salah input\n";
        break;
    }
}

int main()
{
    menu();
    cout << "\nUlangi program? (y/n) "; cin >> ulang;

    if(ulang == 'y')
    {
        cout << endl;
        main();
    }

    else if(ulang == 'n')
    {
        cout << "Program selesai, Terima kasih :)\n";
    }
}

