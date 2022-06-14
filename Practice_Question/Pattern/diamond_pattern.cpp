


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter vlue of n"<<endl;
    cin>>n;
    int col;
    for(int j = 1;j<2*n-1;j++){
        if(j>=n){
           col = n - (j-n+1); 
        }
        else{
            col = j;
        }
    
    int space= n-col;
    for(int i =0;i<space;i++){
        cout<<" ";
        
    }
    for(int k =0;k<col;k++){
        cout<<"* ";
    }
    cout<<endl;
    }
}
