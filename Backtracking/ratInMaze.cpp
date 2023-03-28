#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int srcx, int srcy, int row, int col, int maze[][4],
            vector<vector<bool>> &visited) {
  if (((srcx >= 0 && srcx < row) && (srcy >= 0 && srcy < col))
    && (maze[srcx][srcy] == 1 )
    && (visited[srcx][srcy] == false)) {
    return true;
  } else {
    return false;
  }
}

void solveMaze(int maze[][4], vector<vector<bool>> &visited, int srcx,int srcy, int row, int col, vector<string>& path,string output) {
  // base case
  if (srcx == row-1 && srcy == col-1) {
    // answer found
    path.push_back(output);
    return;
  }

  // down ; i+1,j ;
  if(isSafe (srcx+1, srcy, row, col, maze, visited)) {
    visited[srcx+1][srcy] = true;
    solveMaze(maze, visited, srcx+1, srcy, row, col, path, output+'D');
    // Backtrack
    visited[srcx+1][srcy] = false;
  }

  //right ; srcx,srcy+1 ;
    if(isSafe (srcx, srcy+1, row, col, maze, visited)) {
    visited[srcx][srcy+1] = true;
    solveMaze(maze, visited, srcx, srcy+1, row, col, path, output+'R');
    // Backtrack
    visited[srcx][srcy+1] = false;
  }

//left ; srcx,srcy-1 ;
  if(isSafe (srcx, srcy-1, row, col, maze, visited)) {
    visited[srcx][srcy-1] = true;
    solveMaze(maze, visited, srcx, srcy-1, row, col, path, output+'L');
    // Backtrack
    visited[srcx][srcy-1] = false;
  }

  //up ; srcx-1,srcy ;
    if(isSafe (srcx-1, srcy, row, col, maze, visited)) {
    visited[srcx-1][srcy] = true;
    solveMaze(maze, visited, srcx-1, srcy, row, col, path, output+'U');
    // Backtrack
    visited[srcx - 1][srcy] = false;
  }
}

int main() {

  // Creating Maze Array
  int maze[4][4] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
  if (maze[0][0] == 0) {
    cout << "Path doesn't exists" << endl;
    return 0;
  }

  // Source's Index
  int srcx = 0;
  int srcy = 0;

  // Creating Visited Array
  int row = 4;
  int col = 4;
  vector<vector<bool>> visited(row, vector<bool>(col, false));
  visited[0][0] = true;

  vector<string> path;
  string output = "";

  solveMaze(maze, visited, srcx, srcy, row, col, path, output);

  // Printing possible paths
  cout<<"The possible paths are : ";
  for (int i = 0; i < path.size(); i++) {
    cout<< path[i] << " ";
  }

  if (path.size() == 0) {
    cout << "Path doesn't exists" << endl;
  }
}
*/
//DDRDRR DRDDRR
