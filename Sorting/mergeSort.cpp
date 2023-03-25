#include<iostream>
using namespace std;

void merge(int* arr , int start , int end){
  int mid = (start+end)/2;

  int len1 = mid-start+1;
  int len2 = end-mid;

  int* left = new int[len1];
  int* right = new int[len2];

  //copy values
  int mainArrayIndex = start;
  for(int i=0 ; i<len1 ; i++){
    left[i] = arr[mainArrayIndex++];
  }
  
  mainArrayIndex = mid+1;
  for(int i=0 ; i<len2 ; i++){
    right[i] = arr[mainArrayIndex++];
  }

  //merge 2 sorted arrays 
  int leftindex= 0;
  int rightindex = 0;
  mainArrayIndex = start;

  while(leftindex<len1 && rightindex<len2){
    if(left[leftindex] < right[rightindex]){
      arr[mainArrayIndex++] = left[leftindex++];
    }
    else{
      arr[mainArrayIndex++] = right[rightindex++];
    }
  }
  
  //Copy logic for left array
  while(leftindex < len1){
    arr[mainArrayIndex++] = left[leftindex++];
  }

  //Copy logic for right array
  while(leftindex < len2){
    arr[mainArrayIndex++] = right[rightindex++];
  }
  delete []left;
  delete []right;
}

void mergeSort(int* arr, int start, int end){
  if(start>=end){
    return;
  }
  int mid = (start+end)/2;
  mergeSort(arr,start,mid);
  mergeSort(arr, mid+1, end);
  merge(arr,start,end);
}

int main(){
  int arr[] = {15,5,24,8,1,3,16,10,20};
  int size = 9;
  int start = 0;
  int end = size-1;
  mergeSort(arr,start,end);
  for(int i=0 ; i<size ; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
