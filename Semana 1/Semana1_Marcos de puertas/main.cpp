#include <iostream>

using namespace std;

int main()
{
int n,a,b,res;
cin>>n>>a>>b;
res=((a*4)+(b*2))/n;
if(a*2>n&&b*2>n)
       {
     res=res+2;
        }
else if(a*2+b*2>n)
       {
     res=res+1;
        }
else if (a*2>n||a*4>n||b*2>n)
    {
     res=res+1;
    }

    cout<<res;
    return 0;
}
