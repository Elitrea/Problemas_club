#include <iostream>

using namespace std;

int main()
{
    int a,b,res;
    cin>>a>>b;
    res=a/b;
    if((a%b)!=0){
    cout<<res<<" "<<a%b<<"/"<<b;
    }
    else{
    cout<<res;
    }
    return 0;
}
