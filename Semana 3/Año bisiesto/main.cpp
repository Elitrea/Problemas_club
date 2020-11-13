#include <iostream>

using namespace std;

int main()
{
    int anio=0;
    cin>>anio;

    if(anio%4==0||anio%400==0)
    {
        if(anio%100==0)
        {
          cout<<"NO BISIESTO";
        }
    cout<<"BISIESTO";
    }
    else
    cout<<"NO BISIESTO";
    return 0;
}
