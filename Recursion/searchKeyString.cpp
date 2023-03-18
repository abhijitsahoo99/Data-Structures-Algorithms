#include<iostream>
using namespace std;

void searchKey(string str, int size, int i, char key){
  if(i>=size){
    return;
  }
  if(str[i]==key){
    cout<<"Found at index = "<<i<<endl;
  }
  return searchKey(str,size,i+1,key);
}

int main(){
  string str = "abhijitsahoo";
  int size = str.length();
  char key = 'h';
  int i = 0;
  searchKey(str,size,i,key);
  //cout<<"Index value of the searched alphabet is = "<<ans<<endl;
  return 0;
}
