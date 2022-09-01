
#include<bits/stdc++.h>
using namespace std;
// class Employee {
// int id;
// public:
// void setid(){
//     cout<<"enter id "<<endl;

//     cin>>id;
// }
// void getid(){
//     cout<<"ENTERED ID IS "<<id<<endl;

// }
// };
// int main(){
//     Employee obj[2];
//     for(int i =0;i<2;i++){
//     obj[i].setid();
//     obj[i].getid();
//     }
// }

//complex number

class Complex{
int a;
int b;
public:
void setdata(int v1, int v2){
    a =v1;
    b = v2;

}

void getdata(){
    cout<<a<<" + "<<b<<"i"<<endl;
}
void complexsum(Complex o1, Complex o2){
a = o1.a+o2.a;
b  = o1.b + o2.b;
}
};

int main(){
    Complex c1,c2,c3;
    c1.setdata(2,3);
    c1.getdata();

    c2.setdata(4,5);
    c2.getdata();
    
    c3.complexsum(c1,c2);   // pass object c1,c2
    c3.getdata();
    
}
