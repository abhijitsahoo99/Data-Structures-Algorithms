#include<iostream>
using namespace std;

void traverse(int arr[], int size){
  if(size==0){
    return;
  }  
  cout<<arr[0]<<" ";
  traverse(arr+1,size-1);
}
void reverseTraverse(int arr[], int size){
  if(size==0){
    return;
  }  
  reverseTraverse(arr+1,size-1);
  cout<<arr[0]<<" ";
}

int main(){
  int arr[5] = {10,20,30,40,50};
  int size = 5;
  cout<<"Traverse Array - ";
  traverse(arr,size);
  cout<<endl;
  cout<<"Reverse Traverse Array - ";
  reverseTraverse(arr,size);
  return 0;
}
