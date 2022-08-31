//constructr (32)
#include<bits/stdc++.h>
using namespace std;
// class student{
//     int rno;
//     char name[10];
//     double fee;
//     public:
//     student(){
//         cout<<"enter the roll no."<<endl;
//         cin>>rno;

//         cout<<"enter name"<<endl;
//           cin >> name;

//         cout<<"enter the fee"<<endl;
//         cin>>fee;

//     }

//     void display(){
//         cout<<rno<<"\t"<<name<<"\t"<<fee;
//     }

// };

// int main(){
//     student s;
//     s.display();
// }




//Parameterized Constructors
// class constructor{
//     int x,y;
//     public:
//     constructor(int a,int b){
//         x = a;
//         y = b;
//     }
//     void display(){
//         cout<<x<<","<<y<<endl;
//     }
// };
// int main(){
// constructor p(10,20);
// p.display();
// return 0;
// }


//constructor overloading


// class constructor{
//     int x,y;
//     public:
//     constructor(int a,int b){
//         x = a;
//         y = b;
//     }
//     constructor(){
//         x=0;
//         y=0;
//     }

//     constructor(int a){
//         x = a;
//         y =0;

//     }

//     void display(){
//         cout<<x<<","<<y<<endl;
//     }
// };
// int main(){
// constructor p(10,20);
// p.display();
// constructor p1;
// p1.display();

// constructor p3(40);
// p3.display();


// return 0;
// }

// default constructor

class constructor{
    int x,y,z;
    public:
    
    constructor(int a ,int b = 10,int c=8){
        x = a;
        y =b;
        z =c;

    }

    void display(){
        cout<<x<<","<<y<<","<<z<<endl;
    }
};
int main(){



constructor p2(40,200);
p2.display();


return 0;
}
