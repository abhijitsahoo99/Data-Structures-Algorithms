// Q1 Find the unique element

#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int> arr) {
  int ans = 0;
  for (int i = 0; i < arr.size(); i++) {
    ans = ans ^ arr[i];
  }
  return ans;
}

int main() {
  int n;
  cout << "Enter the size" << endl;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements" << endl;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int uniqueElement = findUniqueElement(arr);
  cout << "Unique element is" << uniqueElement;
  return 0;
}
