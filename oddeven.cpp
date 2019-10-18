// Program to find if the number is even or odd
#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<< "Enter any number"<<endl;
    cin>>num;
    if(num%2==0)
    {
        cout<<"This is an even number"<<endl;

    }
    else
    {
        cout<<"This is an odd number"<<endl;

    }
    return 0;
}