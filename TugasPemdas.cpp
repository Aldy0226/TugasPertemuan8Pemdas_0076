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
    
    public :
    void outputData()
    {
        if (alas % 2 == 0) 
        {
            cout << "Luas Segitiga : " << luas (alas, tinggi) << "cm" << endl;
        } else
        {
            cout << "Alas Yang dimasukkan adalah bilangan ganjil. Luas tidak dapat dihitung";
        }
            
    }

};

int main()
{
    Segitiga ziz;
        
    ziz.inputData();
    
    ziz.outputData();
}

