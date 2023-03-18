#include<iostream>
#include<limits.h>
using namespace std;

void findMax(int arr[], int size, int& maxi){
  if(size==0){
    return;
  }
  if(arr[0]>maxi){
    maxi=arr[0];
  }
  findMax(arr+1,size-1,maxi);
}

void findMin(int arr[], int size, int& mini){
  if(size==0){
    return;
  }
  if(arr[0]<mini){
    mini=arr[0];
  }
  findMin(arr+1,size-1,mini);
}

int main(){
  int arr[] = {10,30,21,44,32,17,19,66};
  int size = 8;
  int maxi = INT_MIN;
  int mini = INT_MAX;
  findMax(arr,size,maxi);
  cout<<"Maximum number is = "<<maxi<<endl;
  findMin(arr,size,mini);
  cout<<"Minimum number is = "<<mini;
  
}
