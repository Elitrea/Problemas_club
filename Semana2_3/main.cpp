#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    char let1,let2,let3;
    cin>>num1>>num2>>num3>>let1>>let2>>let3;

    if (let1=='A')
    {
        if(let2=='B')
        {
            if(let3=='C')
            {
                if(num1<num2)
                {
                    if(num1<num3)
                    {
                        if(num2<num3)
                        {
                            cout<<num1<<num2<<num3;
                        }
                        else
                        {
                            cout<<num1<<num3<<num2;
                        }
                    }
                }
                else if(num2<num1)
                {
                    if(num2<num3)
                    {
                        if(num1<num3)
                        {
                            cout<<num2<<
                        }
                    }
                }
                else
                {

                }

            }
        }
        else if (let2=='C')
        {
            if(let3=='B')
            {

            }
        }
    }
    else if (let1=='B')
    {
        if(let2=='A')
        {
            if(let3=='C')
            {

            }
        }
        else if(let2=='C')
        {
            if(let3=='B')
            {

            }
        }

    }
    else
    {
        if(let2=='A')
        {

        }
        else if(let2=='B')
        {

        }
    }
    return 0;
}
