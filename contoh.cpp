#include <iostream>
using namespace std;

class PersegiPanjang
{
public: // Akses modifier
    int panjang, lebar;

    public:

    void input()
    {
        cout << "Masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar : ";
        cin >> lebar;
    }

    int luasPp(int a, int b)
    {
        return a * b;
    }

    Lingkaran ol;

};