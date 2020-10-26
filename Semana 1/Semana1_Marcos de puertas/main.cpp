#include <iostream>

using namespace std;

int main()
{
int n,a,b,res;
cin>>n>>a>>b;
res=((a*4)+(b*2))/n;
if((((a*4)+(b*2))%n)>0)
    {
       res=res+1;
    }
if (a*4<n)
    {
     res=res+1;
    }
if(b*2<n)
    {
       res=res+1;
    }
else
{
cout<<res;
}
cout<<res;
    return 0;
}
