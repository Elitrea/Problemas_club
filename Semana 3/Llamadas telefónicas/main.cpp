#include <bits/stdc++.h>
using namespace std;

int main(){
    int clave=0, numin=0;
    double costo=0;
cin>>clave;
cin>>numin;

    switch(clave){
        case 12:
            costo=numin*2;
            break;
        case 15:
            costo = numin*2.2;
            break;
        case 18:
            costo = numin*4.5;
            break;
        case 19:
            costo = numin*3.5;
            break;
        case 23:
            costo = numin*6;
            break;
        case 25:
            costo = numin*6;
            break;
        case 29:
            costo = numin*5;
            break;
        default :
            break;

    }

    cout<<costo<<endl;
    return 0;
}
