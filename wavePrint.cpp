#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> wave(vector<vector<int>> arr){
    vector<int> ans;
    int i = arr.size();
    int j = arr[0].size();
    
    for (int col = 0; col < j; col++) {
        if (col & 1) {
            for (int row = i - 1; row >= 0; row--) {
                ans.push_back(arr[row][col]);
            }
        } else {
            for (int row = 0; row < i; row++) {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main(){ 

    int i = 3, j = 3;
    vector<vector<int>> arr(i, vector<int>(j));
    for (int row = 0; row < i; row++) {
        for (int col = 0; col < j; col++) {
            cin >> arr[row][col];
        }
    }
    for (int row = 0; row < i; row++) {
        for (int col = 0; col < j; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    //call the function
    vector<int> result = wave(arr);
    for (int value : result) {
        cout << value << " ";
    }
    cout << endl;

    return 0;

    

}