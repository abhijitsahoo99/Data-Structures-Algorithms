#include<iostream>
using namespace std;
int powerBase(int base, int power){
  if(power<1){
    return 1;
  }
  int ans = base*powerBase(base,power-1);
  return ans;
}
int main(){
  int base,power;
  cout<<"Enter the base - ";
  cin>>base;
  cout<<"Enter the power - ";
  cin>>power;
  int ans = powerBase(base,power);
  cout<<"The answer is - "<<ans;
  return 0;
}
