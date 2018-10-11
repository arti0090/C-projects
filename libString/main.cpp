#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string jeden="Ala ma ";
    string dwa="kota";

    string trzy=jeden+dwa; //laczenie dwoch napisow
    string napis=trzy;
    transform(napis.begin(),napis.end(),napis.begin(),::toupper) ;  //transform wymaga biblioteki algorithm
    //transform(poczatek,koniec,poczatek po zmianie, rodzaj zmiany)
    cout<<napis<<endl;
    transform(napis.begin(),napis.end(),napis.begin(),::tolower) ; //toupper-duze litery, tolower-male litery
    cout<<napis<<endl;

    cout<<"Znajdywanie frazy w tekscie"<<endl;
    string szukaj="kot";

    size_t pozycja=napis.find(szukaj); //znajdz w 'napisie' wystepowanie wyrazu 'szukaj'

    if (pozycja!=string::npos)
        cout<<"Znaleziono na pozycji: " <<pozycja<<endl;
    else cout<<"Nie znaleziono"<<endl;

//cout<<endl<<"Kasowanie frazy w tekscie."<<endl;

    // napis.erase(3,3);                    //erease(od ktorego znaku , ile znakow)
    //cout<<napis<<endl;

//cout<<"Wstawianie tekstu"<<endl;

    //napis.insert(11, " Filemona");       //insert(od znaku , fraza)

 //cout<<"Zastepowanie tekstu"<<endl;
    //napis.replace(4,2,"nie ma");            //replace(od znaku, ilosc znakow, co wstawic)
    //cout<< napis;

cout<<"Wyjmij i zapisz z lancucha"<<endl;
    string nowynapis=napis.substr(4,7);               //substr(od ktorego znaku, ile znakow)
    cout<<nowynapis<<endl;
    return 0;
}
