#include <iostream>
#include <vector>
using namespace std;

int main() {
  // int arr[] = {19,12,10,11,4};
  // int n = 5;
  vector<int> arr{19,12,10,11,4};
  int n = arr.size();
  for(int i=0 ; i<n-1 ; i++){
    int minIndex = i;
    for(int j=i+1 ; j<n ; j++){
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
    }
    swap(arr[i] , arr[minIndex]);
  }
  for(int i=0 ; i<n ; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
