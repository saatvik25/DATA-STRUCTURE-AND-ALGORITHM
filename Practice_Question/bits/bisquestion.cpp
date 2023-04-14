
#include <iostream>

using namespace std;

int main()
{
//  int n =5;
//  if(n%4==0){
//      cout<<n<<endl;
//  }
//  if(n%4==1){
//      cout<<(1)<<endl;
//  }
// check odd even

// int n =4;
// if((n & 1) == 0){
//     cout<<"even"<<endl;
// }else
// {
// cout<<"odd"<<endl;
// }

// to check that the bit is set or not at particular position

// never ever alter the data that is give always use mask

int a =4;
// check 1 bit i set or not
int k=1; 
// we shift 1 by k 
// agar non zero hai
if(a & (1<<k)){
    
    cout<<"yes"<<endl;
}
// agar zero hai
else{
    cout<<"no"<<endl;
}
    return 0;
}
