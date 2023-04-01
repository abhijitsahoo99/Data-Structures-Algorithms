#include<iostream>
#include<algorithm>
using namespace std;

void addStrings(string& num1, int p1, string& num2, int p2, int carry, string& ans){

  if(p1<0 && p2<0 && carry<=0){
    return;
  }
  int sum = 0;
  if(p1>=0)
    sum += num1[p1] - '0';
  if(p2>=0)
    sum += num2[p2] - '0';
  if(carry>0)
    sum += carry;

  carry = sum/10;
  ans += (sum%10)+'0';
  
  return addStrings(num1,p1-1,num2,p2-1,carry,ans);
}

int main(){
  string num1 = "456";
  string num2 = "77";
  string ans="";
  int carry = 0;
  addStrings(num1,num1.size()-1,num2,num2.size()-1,carry,ans);
  reverse(ans.begin(),ans.end());
  cout<<"The sum of two strings is - "<<ans;
  return 0;
}


