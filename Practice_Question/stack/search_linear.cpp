


#include <bits/stdc++.h>
using namespace std;

void search(int arr[3][4], int target)
{
     bool flag = false;
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 4; j++)
          {
               int element = arr[i][j];
               if (element == target)
               {
                    flag = true;
               }

          }
     }
     
cout<<"flag "<<flag<<endl;
}
int main()
{

     int arr[3][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12}};

        search(arr,100);
}
