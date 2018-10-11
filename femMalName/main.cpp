#include <iostream>

using namespace std;

int main()
{

    string imie;
    cout<<"Podaj swoje Imie: ";
    cin>> imie;

    int dlugosc=imie.length();
    //cout<<dlugosc;

    if (imie[dlugosc-1]=='a')
    {
        cout<<"Jestes kobieta.";
    }
    else
        {
        cout<<"Jestes mezczyzna.";
        }



    return 0;
}
