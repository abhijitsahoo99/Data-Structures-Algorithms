#include<iostream>
using namespace std;

int factorial(int n){
  if(n==1){
    return 1;
  }
  int ans = n*factorial(n-1);
  return ans;
}


int main(){
  int n;
  cout<<"Enter the digit you want to find the factorial of : ";
  cin>>n;
  int ans = factorial(n);
  cout<<"The factorial of the digit is = "<<ans;
  return 0;
}
