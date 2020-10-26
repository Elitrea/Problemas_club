#include <iostream>

using namespace std;

int main()
{
    float salario=0;
    cin>>salario;

    if(salario>=0.01&&salario<=969.5)
    {
        cout<<((salario-0.01)*(0.0192))+0;
    }
    if(salario>=969.51&&salario<=1703.8)
    {
        cout<<((salario-969.51)*(0.1088))+56.91;
    }
   if(salario>=1703.81&&salario<=4872.61)
    {
        cout<<((salario-1703.81)*(0.16))+136.85;
    }
    if(salario>=4782.62&&salario<=14391.44)
    {
        cout<<((salario-4782.62)*(0.2352))+766.15;
    }
   if(salario>=14391.45&&salario<=19188.61)
    {
        cout<<((salario-14391.45)*(0.32))+3470.25;
    }
    if(salario>=19188.62&&salario<=57565.76)
    {
        cout<<((salario-19188.62)*(0.34))+5005.35;
    }
    if (salario>=57565.77&&salario<=200000)
    {
        cout<<((salario-57565.77)*(0.35))+18053.63;
    }
    return 0;
}
