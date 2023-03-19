#include<iostream>
#include<vector>
using namespace std;

void printDigit(int n, vector<int>& arr){
  if(n==0){
    return;
  }
  int digit = n%10;
  printDigit(n/10,arr);
  return arr.push_back(digit);
}
void printDigitReverse(int n, vector<int>& brr){
  if(n==0){
    return;
  }
  int digit = n%10;
  brr.push_back(digit);
  printDigitReverse(n/10, brr);
}

int main(){
  int n;
  vector<int>arr;
  vector<int>brr;
  cout<<"Enter the number : ";
  cin>>n;
  cout<<"The digits are - ";
  printDigit(n,arr);
  for(auto val: arr){
    cout<<val<<" ";
  }
  cout<<endl;
  cout<<"The digits in reverse are - ";
  printDigitReverse(n,brr);
  for(auto val: brr){
    cout<<val<<" ";
  }
  cout<<endl;
}

