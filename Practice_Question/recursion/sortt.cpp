


#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[0];
    int c = 0;
    for (int i = 0; i < e; i++)
    {
        if (arr[i] <= pivot)
        {
            c++;
        }
    }
    // we have find the location of pivot
    int pivotindex = s + c;
    swap(arr[pivotindex] , arr[s]);
    // now arrange all element < pivot left side and all element larger tahn the pivot element in the right
    int i = s;
    int j = e;

    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {

            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}

void quicksort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    // left sort
    quicksort(arr, s, p - 1);
    // right sort
    quicksort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {3, 1, 4, 5, 2};
    int n = 5;
    quicksort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}
