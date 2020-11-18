#include <iostream>

using namespace std;

int main()
{
string dia;
int dias_mes=0;
int digito=0;
int result=0;
cin>>digito;
cin>>dias_mes;
cin>>dia;

if(dia=="domingo")
{
    if(dias_mes%2==0)
    {
        result=(dias_mes/2)+1;
    }
    else
    {
        result=(dias_mes/2)+2;
    }
}
else if(dia=="lunes")
{
    if(dias_mes%2==0)
    {
        result=(dias_mes/2);
    }
    else
    {
        result=(dias_mes/2)+1;
    }
}
else if(dia=="martes")
{
    if(dias_mes%2==0)
    {
        result=(dias_mes/2)-1;
    }
    else
    {
        result=(dias_mes/2);
    }
}
else if(dia=="miercoles")
{
    if(dias_mes%2==0)
    {
        result=(dias_mes/2)-2;
    }
    else
    {
        result=(dias_mes/2)-1;
    }
}
else if(dia=="jueves")
{
    if(dias_mes%2==0)
    {
        result=(dias_mes/2)-3;
    }
    else
    {
        result=(dias_mes/2)-2;
    }
}
else if(dia=="viernes")
{
    if(dias_mes%2==0)
    {
        result=(dias_mes/2)-4;
    }
    else
    {
        result=(dias_mes/2)-3;
    }
}
else if(dia=="sabado")
{
    if(dias_mes%2==0)
    {
        result=(dias_mes/2)-5;
    }
    else
    {
        result=(dias_mes/2)-4;
    }
}

cout<<result;
    return 0;
}
