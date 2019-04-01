#include<iostream>
using namespace std;

class student
{
    private:
    char name[30];
    int rollno;
    int total;
    float perc;
    public:
    void getDetails()
    {
        cout<< "Enter name: "<<endl;
        cin>>name;
        cout<< "Enter roll number: "<<endl;
        cin>>rollno;
        cout<< "Enter total marks out of 500"<<endl;
        cin>>total;
        perc=(float)total/500*100;

    }
    void putDetails()
    {
        
        cout<< "Name: "<<name<<",Roll no: "<<rollno<<" ,Total: "<<total<<" Percentage: "<<perc;

    }

};
int main()
{
    student std1,std2,std3;
    cout<< "\nStudent details: \n";
    std1.getDetails();
    std3.getDetails();
    std2.getDetails();
    std1.putDetails();
    std2.putDetails();
    std3.putDetails();
    return 0;
}

