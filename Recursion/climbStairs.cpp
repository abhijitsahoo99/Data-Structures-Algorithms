#include<iostream>
using namespace std;

int climbStairs(int n){
  //base condition
  if(n==0 || n==1){
    return 1;
  }
  return climbStairs(n-1)+climbStairs(n-2);
}

int main(){
  //Steps Allowed
  //- 1 step at a time or
  //- 2 step at a time
  int n;
  cout<<"Enter the number of stairs to climb - ";
  cin>>n;
  int ans = climbStairs(n);
  cout<<"The total number of ways to reach the stairs is - "<<ans;
  return 0;
}
