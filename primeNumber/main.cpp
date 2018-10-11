#include<iostream>
using namespace std;

int main()
{
    bool lpierwsza;
  int G;
  cout << "Podaj liczbe:";
  cin >> G;
    cout << "1" <<endl;
 for(int A=2;A<G;A++)
 {

    lpierwsza=true;
    int pod;
    for(pod=2;pod<=A-1;pod++)
    {
        if(A%pod==0)
            {
                lpierwsza=false;
                break;
            }
    }
  if (lpierwsza==true)
    {
        cout << A << endl;
    }


 }

  return 0;
}