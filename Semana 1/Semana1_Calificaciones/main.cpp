#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    float res;
    cin>>a>>b>>c;
    res=(a+b+c)/3;
    if (res>=6)
    cout << "1" << endl;
    else
    cout << "0" << endl;
    return 0;
}
