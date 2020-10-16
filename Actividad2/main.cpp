#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    int a,b,c;
    cout<<"Ingrese 3 números:"<<endl;
    cin>>a>>b>>c;

if(a==b&&a==c&&b==c)
{
    cout<<"Todos son iguales";
}
else
    {
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
            cout<<b<<" y "<<c<<" son iguales"<<endl;
        }

    }
    else if(b>a&&b>c)
    {
        cout<<b<<" es el mayor, ";
        if(a>c)
        {
           cout<<a<<" es el segundo mayor y "<<c<<" es el menor"<<endl;
        }
        else if(c>a)
        {
           cout<<c<<" es el segundo mayor y "<<a<<" es el menor"<<endl;
        }
        else
        {
            cout<<a<<" y "<<c<<" son iguales"<<endl;
        }
    }
    else if(c>a&&c>b)
    {
        cout<<c<<" es el mayor, ";
        if(a>b)
        {
           cout<<a<<" es el segundo mayor y "<<b<<" es el menor"<<endl;
        }
        else if(b>a)
        {
           cout<<b<<" es el segundo mayor y "<<a<<" es el menor"<<endl;
        }
        else
        {
            cout<<b<<" y "<<a<<" son iguales"<<endl;
        }
    }
    else if (a==b)
    {
        cout<<a<<" y "<<b<<" son iguales"<<endl;
        {
           if(a>c)
        {
           cout<<a<<" es el mayor y "<<c<<" es el menor"<<endl;
        }
        else if(c>a)
        {
           cout<<c<<" es el mayor y "<<a<<" es el menor"<<endl;
        }
        }
    }
    else if (a==c)
    {
        cout<<a<<" y "<<c<<" son iguales"<<endl;
        if(a>b)
        {
           cout<<a<<" es el mayor y "<<b<<" es el menor"<<endl;
        }
        else if(b>a)
        {
           cout<<b<<" es el mayor y "<<a<<" es el menor"<<endl;
        }
    }
    else if (b==c)
    {
       cout<<b<<" y "<<c<<" son iguales"<<endl;
               if(a>c)
        {
           cout<<a<<" es el mayor y "<<c<<" es el menor"<<endl;
        }
        else if(c>a)
        {
           cout<<c<<" es mayor y "<<a<<" es el menor"<<endl;
        }
    }
    }
    return 0;
}
