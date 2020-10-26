#include <iostream>

using namespace std;

int main()
{
    float salario;
    cin>>salario;

    if(salario>=0.01&&salario<=969.5)
    {
        cout<<((salario-0.01)*(0.192))+0;
    }
    else if(salario>=969.51&&salario<=1703.8)
    {
        cout<<((salario-969.51)*(0.1088))+56.91;
    }
    else if(salario>=1703.81&&salario<=4872.61)
    {
        cout<<((salario-1703.81)*(0.16))+136.85;
    }
    else if(salario>=4782.62&&salario<=14391.44)
    {
        cout<<((salario-4782.62)*(0.2352))+766.15;
    }
    else if(salario>=14391.45&&salario<=19188.61)
    {
        cout<<((salario-14391.45)*(0.32))+3470.25;
    }
    else if(salario>=19188.62&&salario<=57656.76)
    {
        cout<<((salario-19188.62)*(0.34))+5005.35;
    }
    else if(salario>=57565.77)
    {
        cout<<((salario-57656.77)*(0.35))+18053.63;
    }
    return 0;
}
