#include <iostream>
using namespace std;

void reversePrint(int n)
{
  if(n==0){
    return;
  }
  cout<<n<<" ";
  reversePrint(n-1);
}

void print(int n)
{
  if(n==0){
    return;
  }
  print(n-1);
  cout<<n<<" ";
}

int main() {
  int n;
  cout<<"Enter the value of N : ";
  cin>>n;
  cout<<"Print"<<endl;
  print(n);
  cout<<endl;
  cout<<"Reverse Print"<<endl;
  reversePrint(n);
  
}
