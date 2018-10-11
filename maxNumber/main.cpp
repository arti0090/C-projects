
//Program liczacy srednia z liczb i szukajacy najblizszej
#include <iostream>

using namespace std;

float tab[5] ,r=0, a ;
float s;

int main()
{
    int i=0;
    while(i<=4)
    {
    cout<< "Wpisz "<<i+1<<" liczbe: ";
    cin>>tab[i];

    s=s+tab[i];
    i++;
    }
    a=s;
    s=s/5;
    cout<<"srednia= "<<s<<endl;
    i=0;
    int d;
    while(i<=4)
    {
        r=0;
        if(tab[i]>s)
        {
            r=tab[i]-s;
        }
        else
        {
            r=s-tab[i];
        }
        if (r<a)
        {
            a=r;
            d=i;
        }
    i++;
    }
cout <<"Najblizsza jest "<< d+1 << " liczba";

    return 0;
}
