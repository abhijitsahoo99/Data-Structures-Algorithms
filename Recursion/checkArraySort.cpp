#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int>& arr, int& size, int i){
  if(i==size-1){
    return true;
  }
  if(arr[i+1]<arr[i]){
    return false;
  }
  return checkSorted(arr,size,i+1);
}

int main(){
  vector<int>arr = {10,20,30,40,50};
  int size = arr.size();
  int i = 0;
  bool isSorted = checkSorted(arr,size,i);
  if(isSorted){
    cout<<"Array is sorted"<<endl;
  }
  else{
    cout<<"Array is not sorted"<<endl;
  }
  return 0;
}

