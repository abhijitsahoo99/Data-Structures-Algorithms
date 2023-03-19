#include<iostream>
#include<vector>
using namespace std;
// int binarySearch(vector<int> arr, int start, int end, int target)
int binarySearch(vector<int> arr, int start, int end, int target){
  if(start>end)
    return -1;
  int mid = start+(end-start)/2;
  if(arr[mid] == target)
    return mid;
  int ans = arr[mid]<target?binarySearch(arr,mid+1,end,target):binarySearch(arr,start,mid-1,target);
  return ans;
  
}

int main(){
  vector<int> arr = {10,20,30,40,50,60,70,80,90};
  int size = arr.size();
  int target = 70;
  int start = 0;
  int end = size-1;
  int ans = binarySearch(arr,start,end,target);
  cout<<"Answer is = "<<ans<<endl;
  return 0;
}


