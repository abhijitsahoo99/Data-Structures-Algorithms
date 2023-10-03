#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter the size of first array: ";
    cin >> n1;

    cout << "Enter the size of second array: ";
    cin >> n2;

    vector<int> arr1(n1);
    vector<int> arr2(n2);
    vector<int> unionArray;

    cout << "Enter the elements of first array:" << endl;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
        unionArray.push_back(arr1[i]);
    }

    cout << "Enter the elements of second array:" << endl;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
        // Check if the element is already in the unionArray
        bool duplicate = false;
        for (int j = 0; j < unionArray.size(); j++) {
            if (arr2[i] == unionArray[j]) {
                duplicate = true;
                break;
            }
        }
        // If it's not a duplicate, add it to the unionArray
        if (!duplicate) {
            unionArray.push_back(arr2[i]);
        }
    }

    cout << "Union of Arrays:" << endl;
    for (int i = 0; i < unionArray.size(); i++) {
        cout << unionArray[i] << " ";
    }
    cout << endl;

    return 0;
}
