#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{  
  int arr[] = {1,3,5,7,9,2,4,6,8};
  int size = 9;
  int start=0;
  int end=size-1;
  while(true){
     if(start>end)
      break;
    //or while(start<=end)
    cout<<arr[start]<<",";
    cout<<arr[end]<<",";
    start++;
    end--;
  }
 return 0;
}

//Second Method
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{  
  int arr[] = {1,3,5,7,9,2,4,6,8};
  int size = 9;
  for(int i=0 ; i<size ; i++)
  {
    cout<<arr[i]<<",";
    cout<<arr[size-1]<<",";
    size--;
  }
