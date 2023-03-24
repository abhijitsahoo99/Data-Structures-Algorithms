#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int>arr{19,8,38,6,78,48,90,2};
  int size = arr.size();
  for(int round=1 ; round<size; round++){
    bool swapped = false;
    for(int j=0 ; j<size-round ; j++){
      if(arr[j]>arr[j+1]){
        swapped = true;
        swap(arr[j],arr[j+1]);
      }
    }
    if(swapped == false)
    break;
  }
  for(int i=0 ; i<size ; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
