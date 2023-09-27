


void rotate(int arr[], int n)
{
    int i = n-1;
    int j= n-2;
    while(i>0){
        swap(arr[i],arr[j]);
        i--;
        j--;
    }
}
