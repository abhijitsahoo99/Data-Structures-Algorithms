#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{  
  int arr[] = {1,3,5,7,9,2,4,6,8};
  int size = 9;
  int start=0;
  int end=size-1;
  while(start<=end)
  {
    swap(arr[start] , arr[end]);
    start++;
    end--;
  }
  for(int i=0 ; i<size ; i++){
    cout<<arr[i]<<" ";
  }
}
