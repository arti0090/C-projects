#include <iostream>
#include<cstdlib>
#include<time.h>

using namespace std; //uzywaj bibliotek standard
int liczba;  // zarezerwuj liczba jako liczba calkowita
int strzal;
int ile_prob;

int main()
{
    cout << "Witaj! Pomyslalem liczbe od 1 do 100" << endl;
    srand(time(NULL)); //wystartuj z funkcja randomize i pobierz czas od poczatku do uruchomienia programu
    liczba = rand()%100+1; //% rozmiar przedzialu + liczba rozpoczecia przedzialu
    cout<<liczba<<endl;

    while(strzal!=liczba)
        {
            ile_prob++;
            cout<< "Zgadnij jaka: (to Twoja "<<ile_prob<< " proba):";
            cin>> strzal;

            if (strzal==liczba)
                cout<<"Udalo sie! Wygrywasz w "<<ile_prob<<" probie."<<endl;
            else if(strzal<liczba)
                cout<<"To za malo"<<endl;
            else if(strzal>liczba)
                cout<<"To za duzo"<<endl;


        }
    system("pause");

    return 0;
}
