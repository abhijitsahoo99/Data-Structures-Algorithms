#include<iostream>
using namespace std;

bool isPalindrom(string& str,int start,int end){
  if(start>=end){
    return true;
  }
  if(str[start]!=str[end]){
     return false;
  }
  return isPalindrom(str,start+1,end-1);
}

int main(){
  string str = "racecar";
  int start = 0;
  int end = str.length()-1;
  cout<<isPalindrom(str,start,end);
  return 0;
}

