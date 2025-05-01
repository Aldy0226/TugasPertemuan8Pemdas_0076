#include <iostream>
using namespace std;

class Segitiga
{
    public :
    int alas;
    int tinggi;

    void inputData()
    {
        cout << "Masukkan Alas Segitiga \t= ";
        cin >> alas;
        cout << "Masukkan Tinggi Segitiga \t= ";
        cin >> tinggi;
    }
    private :
        float luas(int a, int t) 
        {
            return 0.5 * a * t;
        }

    
    
};

