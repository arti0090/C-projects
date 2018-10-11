#include <iostream>

using namespace std;

string wyraz;

int main()
{
    cout << "Wpisz swoj wyraz: ";
    getline(cin,wyraz);

    int i=wyraz.length();

    while(i!=0)
   {
        cout<<wyraz[i-1];
        i--;
   }




    return 0;
}
