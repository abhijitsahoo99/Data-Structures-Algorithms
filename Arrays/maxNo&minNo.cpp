#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{  
  int arr[] = {-2,3,7,10,12,14,17,10,20,24,30,12,-88,36,16};
  int size = 15;
  int maxi = INT_MIN;
  int mini = INT_MAX;
  for(int i=0 ; i<size ; i++)
  {
    if(arr[i] > maxi)
    {
      maxi = arr[i];
    }
  }
  for(int i=0 ; i<size ; i++)
  {
    if(arr[i] < mini)
    {
      mini = arr[i];
    }
  }
  cout<<"Maximum number inside the array is : "<<maxi<<endl;
  cout<<"Minimum number inside the array is : "<<mini;
}
