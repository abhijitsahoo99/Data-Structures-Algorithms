#include<iostream>
using namespace std;
int climbStairs(int n){
  if(n==0 || n==1){
    return 1;
  }
  return climbStairs(n-1)+climbStairs(n-2);
}

int main(){
  int n;
  cout<<"Enter the number of stairs : ";
  cin>>n;
  cout<<"Number of ways to reach "<<n<<" stairs = "<<climbStairs(n);
}
