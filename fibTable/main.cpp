#include <iostream>
#include <iomanip>

using namespace std;

long double fib[100000];
int n;

int main()
{
    cout << "Ile liczb fibonaciego mam wyznaczyc?: " ;
    cin>>n;

    fib[0]=1;
    fib[1]=1;

    for (int i=2; i<n; i++)
    {
        fib[i]  = fib[i-1]  + fib[i-2];
    }

    cout<<setprecision(10000);
//ta petla wypisuje wszystkie wyniki
 /*   for (int i=0; i<n; i++)
    {
        cout<<endl<<"wyraz nr"<<i+1<<": "<<fib[i];
    }
  */

  //cout ponizej wypisuje tylko wybrany wyraz ciagu
  cout<<endl<<"wyraz nr "<<n<<": "<<fib[n-1];
    return 0;
}