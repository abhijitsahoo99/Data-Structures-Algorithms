#include<iostream>
#include<vector>
using namespace std;

// int main() {
//     int n1;
//     cout << "Enter the size of the array: ";
//     cin >> n1;

//     vector<int> arr1(n1);
//     vector<int> arr2;
  
//    cout << "Enter the elements of array" << endl;
//     for (int i = 0; i < n1; i++) {
//       cin >> arr1[i];
//     }

//     for(int i=0 ; i<n1 ; i++){
//       if(arr1[i] == 0){
//          arr2.push_back(arr1[i]);
//       }
//     }

//     for(int i=0 ; i<n1 ; i++){
//       if(arr1[i] == 1){
//          arr2.push_back(arr1[i]);
//       }
//     }
    // for (int i = 0; i < arr2.size(); i++) {
    //     cout << arr2[i] ;
    // }
    // cout << endl;

//     return 0;

// }

int main (){
    int n1;
    cout << "Enter the size of the array: ";
    cin >> n1;

    vector<int> arr(n1);

    cout << "Enter the elements of array" << endl;
      for (int i = 0; i < n1; i++) {
      cin >> arr[i];
    }
  
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while(i != end){
      if(arr[i] == 0){
        swap(arr[start] , arr[i]);
        i++;
        start++;
      }
      else{
        swap(arr[i] , arr[end]);
        end--;
      }
    }

    for (int i = 0; i < arr.size(); i++) {
      cout << arr[i] ;
    }
    cout << endl;
  
    return 0;
}
