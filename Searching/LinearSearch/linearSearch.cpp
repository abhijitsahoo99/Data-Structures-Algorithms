#include <iostream>
using namespace std;
int linear_search(int arr[], int size, int target){
 for(int i=0 ; i<size ; i++){
   if(arr[i] == target){
     return i;
   }
  }
   return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int target = 8;
    int index = linear_search(arr,size,target);
    if(index == -1){
      cout<<"Element not found";
    }
    else{
      cout<<"Element fount at index = "<<index;
    }
    return 0;
  }


