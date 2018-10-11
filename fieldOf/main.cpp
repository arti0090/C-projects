#include <iostream>

using namespace std;

void wypisz_menu ()
{

cout << "Dla jakiej figury chcesz obliczyc pole i obwod?" << endl;
    cout << "1.Prostokat" << endl;
    cout << "2.Kwadrat" << endl;
    cout << "3.Kolo" << endl;


}


void oblicz_wszystko(int a,int b, int &pp, int &op)
{
    pp = a*b;
    op = a+a+b+b;
}

void oblicz_wszystko(int a, int &pp, int &op)
{
    pp = a*a;
    op = a+a+a+a;
}

void oblicz_wszystko(int r, float &pp1, float &op1)
{
    float pi;
    pi = 3.14;
    pp1 = pi*r*r;
    op1 = 2*pi*r;
}

int main()
{

    int w, pp, op;
    float pp1, op1;

    wypisz_menu();
    cin >> w;

    int a,b,r;

 switch( w )
        {
        case 1:
            cout << "Podaj bok prostokata"; cin >> a;
            cout << "Podaj drugi bok prostokata"; cin >> b;
            oblicz_wszystko(a,b,pp,op);
            cout << "Pole " << pp << endl << "Obwod " << op << endl;
            break;
        case 2:
            cout << "Podaj bok prostokata"; cin >> a;
            oblicz_wszystko(a,pp,op);
            cout << "Pole " << pp << endl << "Obwod " << op << endl;
            break;
        case 3:
            cout << "Podaj promien kola"; cin >> r;
            oblicz_wszystko(r,pp1,op1);
            cout << "Pole " << pp1 << endl << "Obwod " << op1 << endl;
            break;
        default:
            cout << "Podano bledna wartosc" << endl;
            break;
        }





    return 0;
}