The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i.
Note:
1.Return -1 if the array is null
2.Return 0 if the total amount of food from all houses is not sufficient for all the rats.
3.Computed values lie within the integer range.



#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int calculate(int n,int arr[],int unit,int r){
    int foodtill = 0;
    int i;
    int totalfood = r*unit;
    for(i=0;i<n;i++){
        foodtill += arr[i];
        if(foodtill > totalfood){
            break;
        }
    }
    if(foodtill <totalfood ){
        return 0;
    }
    return i+1;
}
int main()
{
    int n,unit,r;
    cin>>n>>r>>unit;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<calculate(n,arr,unit,r);

    return 0;
}
