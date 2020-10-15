#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double r,res;
    cin>>r;
    res=(3.14159)*(r*r);
    cout<<"A="<<fixed<<setprecision(4)<<res<<endl;
    return 0;
}
