#include <iostream>

using namespace std;

int main()
{
int n,a,b,res;
cin>>n>>a>>b;
res=((a*4)+(b*2))/n;
if((((a*4)+(b*2))%n)>0)
    {
       cout<<res+1;
    }
else if ((((a*4)+(b*2))%n)<0)
    {
       cout<<res+1;
    }
else
cout<<res;
    return 0;
}
