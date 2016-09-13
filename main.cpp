#include <iostream>
#include <fstream>
using namespace std;
bool czy_pierwsza(int n)
{
  if(n<2){
    return false;
    }
  for(int i=2;i*i<=n;i++)
    if(n%i==0){
      return false;
    }
  return true;

}
int main()
{
    int ilosc=0;
    int n;
    cout<<"Podaj liczbe: ";
    cin>>n;
    ofstream outfile ("Pierwsze.txt");
    outfile.precision(0);
    for(int a=0;a<n;a++)
    {
    if(czy_pierwsza(a)==1)
        {

        outfile << fixed << a << "\n";
        ilosc++;
        }
    }
    cout << ilosc;
}

