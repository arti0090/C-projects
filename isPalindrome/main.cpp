#include<iostream>
#include <cstring>

using namespace std;



int main()
{
    int dl;
    char napis[31];

    cin.get(napis, 30);

    dl=strlen(napis);
    bool pal = true;
    //cout << napis << endl;
    //cout << dl << endl;

   // cout << napis[0] << endl;
    //cout << napis[dl-1] << endl;

    for(int i=0;i<=dl-1;i++)
    {
        dl=dl-1;
        //cout << napis[i] << endl;
        //cout << napis[dl] << endl;
        if (napis[i]!= napis[dl])
        {
            pal = false;
            cout << "podany napis nie jest palindromem" << endl;
            break;
        }


    }

if (pal==true)
    {
       cout << "Napis jest palindromem";
    }









    return 0;
}