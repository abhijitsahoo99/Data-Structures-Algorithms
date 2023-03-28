#include<iostream>
#include<vector>
using namespace std;

void printSolution(vector<vector<char>> &board,int n){
  for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
      cout<<board[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl<<endl;
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n ){
  //To check if in the current cell you can keep the Queen
  int i=row; 
  int j=col;

  //check row 
  while(j>=0){
    if(board[i][j]=='Q'){
      return false;
    }
    j--;
  }
  //check upper left diagonal
  i=row;
  j=col;
  while(i>=0 && j>=0){
    if(board[i][j]=='Q'){
      return false;
    }
    i--;
    j--;
  }
  //check button left diagonal
  i=row;
  j=col;
  while(i<n && j>=0){
    if(board[i][j]=='Q'){
      return false;
    }
    i++;
    j--;
  }
  //If queen isn't found anywhere then position is safe so return true 
  return true;

}

void solve(vector<vector<char>> &board,int col, int n){
  //base case
  if(col>=n){
    printSolution(board,n);
    return;
  }
  //Solve 1 case, remaining recursion will handle 
  for(int row=0 ; row<n ; row++){
    if(isSafe(row,col,board,n)){
      board[row][col] = 'Q';
      solve(board,col+1,n);
      //backtracking
      board[row][col]='-';
    }
  }
}

int main(){
  int n=4;
  vector<vector<char>> board(n,vector<char>(n,'-'));
  int col=0;
  solve(board,col,n);
  return 0;
}
