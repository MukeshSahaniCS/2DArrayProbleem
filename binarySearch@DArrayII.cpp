#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        int rowIndex=0;
        int colIndex=col-1;

        while(rowIndex<row&&colIndex>=0){
            int ele=matrix[rowIndex][colIndex];
            if(ele==target){
                return 1;
            }
            if(ele<target){
                rowIndex++;
            }
            else{
                colIndex--;
            }
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