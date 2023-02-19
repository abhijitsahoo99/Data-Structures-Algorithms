#include <iostream>
using namespace std;
int first_occurrence(int arr[], int size, int target){
  int start = 0;
  int end = size-1;
  int ans = -1;
  while(start<=end){
    int mid = start+(end-start)/2;
    if(arr[mid] == target){
      ans = mid;
      end = mid-1;
    }
    else if(arr[mid] < target){
      start = mid+1;
    }
    else if(arr[mid] > target){
      end = mid-1;
    }
  }
  return ans;
}
int last_occurrence(int arr[], int size, int target){
  int start = 0;
  int end = size-1;
  int ans = -1;
  while(start<=end){
    int mid = start+(end-start)/2;
    if(arr[mid] == target){
      ans = mid;
      start = mid+1;
    }
    else if(arr[mid] < target){
      start = mid+1;
    }
    else if(arr[mid] > target){
      end = mid-1;
    }
  }
  return ans;
}
int main(){
    int arr[] = {1,3,4,4,4,4,4,6,7,9};
    int size = 10;
    int target = 4;
    int count = 0;
    int firstOcc = first_occurrence(arr,size,target);
    int lastOcc = last_occurrence(arr,size,target);
    if(firstOcc != -1){
      count = lastOcc-firstOcc+1;
    }
    cout<<"Element's total occurence is = "<<count;
    return 0;
  }
