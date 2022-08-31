// static when we dont want to change the vlaue
#include <bits/stdc++.h>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setdata()
    {
 cout<<"enter id "<<endl;
        cin >> id;
        count++;
    }

    void getdata()
    {
       cout<<"id of employee is "<<id<<" at count number is "<<count<<endl;
    }
    // static function is created inthis we can not print non static member
    static void countdata(){
        //cout<<id;  
        cout<<"count value is "<<count<<endl;
    }
};
//static data member 
int Employee ::count; // default value is zero
int main()
{
    Employee obj1, obj2;
    obj1.setdata();
    obj1.getdata();
    // call without reference of object
    Employee:: countdata();  

    obj2.setdata();
    obj2.getdata();
    Employee:: countdata();

}
