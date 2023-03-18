#include<iostream>
using namespace std;

int root(int base, int power){
  if(power==0){
    return 1;
  }
  return base*root(base,power-1);
}
int main(){
  int base, power;
  cout<<"Enter the value of base and power : ";
  cin>>base>>power;
  cout<<root(base,power);
}
