#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n1, n2,sum;

    cout << "Enter the size of first array: ";
    cin >> n1;

    cout << "Enter the size of second array: ";
    cin >> n2;

    cout << "Enter the sum: ";
    cin >> sum;

    vector<int> arr1(n1);
    vector<int> arr2(n2);
    vector<int> arr3;
   cout << "Enter the elements of first array" << endl;
  for (int i = 0; i < n1; i++) {
    cin >> arr1[i];
  }

  cout << "Enter the elements of second array" << endl;
  for (int i = 0; i < n2; i++) {
    cin >> arr2[i];
  }
    

    for(int i=0 ; i<n1 ; i++){
      for(int j=0 ; j<n2 ; j++){
        if(arr1[i]+arr2[j] == sum){
          arr3.push_back(arr1[i]);
          arr3.push_back(arr2[j]);
        }
      }
    }
    cout << "Pair Sum : " << endl;
    for (int i = 0; i < arr3.size(); i+=2) {
        cout << "{" << arr3[i]<<","<<arr3[i+1]<<"}"<<" ";
    }
    cout << endl;

    return 0;

}
