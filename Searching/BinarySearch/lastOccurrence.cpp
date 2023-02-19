#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int target){
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
    int target = 0;
    int index = binary_search(arr,size,target);
    if(index == -1){
      cout<<"Element not found";
    }
    else{
      cout<<"Element's last occurence is = "<<index;
    }
    return 0;
  }
