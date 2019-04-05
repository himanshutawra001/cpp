#include<iostream>
using namespace std;

int main()
{

    int divisor, dividend, quotient, remainder;
    cout<<"Enter the dividend: "<<endl;
    cin>>dividend;

    cout<<"Enter the divisor: "<<endl;
    cin>>divisor;

    quotient=dividend/divisor;
    remainder=dividend%divisor;

    cout<<"Quotient is: "<<quotient<<endl;
    cout<<"Remainder is: "<<remainder<<endl;
    return 0;
}


