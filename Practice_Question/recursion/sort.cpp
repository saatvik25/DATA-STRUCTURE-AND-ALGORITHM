


//bubblesort
#include <bits/stdc++.h>
using namespace std;
void bubblesort(int *arr,int len){
  if(len ==1 || len ==0)
  return;

  for(int i =0;i<len-1;i++){
    if(arr[i]>arr[i+1])
    swap(arr[i],arr[i+1]);
  }
  bubblesort(arr,len-1);
}
int main(){
int arr[] = {7,5,2,8,1,0,6,4,2,7};
int len = sizeof(arr)/sizeof(arr[0]);
bubblesort(arr,len);
for(int i=0;i<len;i++){
cout<<arr[i]<<" ";
}
}
