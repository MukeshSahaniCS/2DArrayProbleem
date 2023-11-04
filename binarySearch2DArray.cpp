#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int s=0;
        int e=row*col-1;
        int mid=s+(e-s)/2;

        while(s<=e){
            int element = matrix[mid/col][mid%col];
            if(element==target){
                return 1;
            }
            if(element<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return 0;
        
    }
int main(){ 
    int target;

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

    cout << "Enter the target value: ";
    cin >> target;
    //call the function
    bool found = searchMatrix(arr, target);
    
    if (found) {
        cout << "Target value " << target << " found in the matrix." << endl;
    } else {
        cout << "Target value " << target << " not found in the matrix." << endl;
    }

    return 0;
    
    

}