#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num,f,c,s,t;
    cin>>num;
    int arreglo[num][num];
    for(int f=0;f<num;f+2){
    for(int c=0;c<num;c++){
    arreglo[f][c]='o';
    arreglo[f][c]='a';
    }
    }

    for(int s=0;s<num;f++){
    for(int t=0;t<num;c++){

        cout<<arreglo[f][c];
    }
    }
return 0;
}
