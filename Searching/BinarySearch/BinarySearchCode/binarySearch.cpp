#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int target){
  int start = 0;
  int end = size-1;
  while(start<=end){
    int mid = start+(end-start)/2;
    if(arr[mid] == target){
      return mid;
    }
    else if(arr[mid] < target){
      start = mid+1;
    }
    else if(arr[mid] > target){
      end = mid-1;
    }
    else{
      return -1;
    }
  }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int target = 8;
    int index = binary_search(arr,size,target);
    if(index == -1){
      cout<<"Element not found";
    }
    else{
      cout<<"Element fount at index = "<<index;
    }
    return 0;
  }

