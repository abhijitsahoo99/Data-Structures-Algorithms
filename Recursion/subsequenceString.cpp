#include<iostream>
using namespace std;

void subSequence(string str,string output,int i){
  if(i>=str.length()){
    cout<<output<<endl;
    return;
  }
  subSequence(str,output,i+1);
  output = output+str[i];
  subSequence(str,output,i+1);
  
}

int main(){
  string str = "abcd";
  int i = 0;
  string output = " ";
  subSequence(str,output,i);
  return 0;
}
