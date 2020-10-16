#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Ingrese 3 números:"<<endl;
    cin>>a>>b>>c;

    if(a>b&&a>c)
    {
        cout<<a<<" es el mayor, ";
        if(b>c)
        {
            cout<<b<<" es el segundo mayor y "<<c<<" es el menor"<<endl;
        }
        else if(c>b)
        {
            cout<<c<<" es el segundo mayor y "<<b<<" es el menor"<<endl;
        }
        else
        {
            cout<<a<<" y "<<b<<"son iguales";
        }

    }
    return 0;
}
