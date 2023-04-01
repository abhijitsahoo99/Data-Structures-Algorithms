#include<iostream>
using namespace std;

int lastString(string& str,char key,int& ans,int i){
  if(i>str.length()){
    return 0;
  }
  if(str[i]==key){
    ans=i;
  }
  return lastString(str,key,ans,i+1);
}

int main(){
  string str = "abcddefcdd";
  char key = 'd';
  int ans = -1;
  int i=0;
  lastString(str,key,ans,i);
  cout<<"The last occurence of the string is - "<<ans<<endl;
  return 0;
}
