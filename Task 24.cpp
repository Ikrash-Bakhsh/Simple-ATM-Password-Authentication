#include<iostream>
#include<string>
using namespace std;
int main()
{
    // PASSWORD= F2023266611
    int atm = 3;
    string pass;
    string a="F2023266611";
    string b="f2023266611";

    do
    {
        cout<<"Enter Password = ";
        getline(cin,pass);

        if (pass==a||pass==b)
        {
            cout<<"ACCESS GRANTED";
            break; 
        }
        else
        {
            cout<<"ACCESS DENIED";
            cout<<"\nYou have "<< atm - 1 <<" attempts remaining!"<<endl;
            atm--;

            if(atm==0)
            {
                cout<<"Attempts finished! ACCESS DENIED";
                break; 
            }
        }
    } while(atm>0);

    return 0;
}

