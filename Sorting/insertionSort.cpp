#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int>arr{19,8,38,6,78,48,90,2,-5,-10};
  int size = arr.size();
  for(int round=1 ; round<size ; round++){
    //Step1 - Fetch
    int val = arr[round];
    //Step2 - Compare
    int j=round-1;
    for(; j>=0 ; j--){
      if(arr[j]>val){
        //Step3 - Shift
        arr[j+1]=arr[j];
      }
      else{
        break;
      }
    }
    //Step4 - Copy
    arr[j+1] = val;
  }
for(int i=0 ; i<size ; i++){
  cout<<arr[i]<<" ";
}
cout<<endl;
}
