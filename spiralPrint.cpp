#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();

        int count = 0;
        int total =row*col;

        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;

        while(count<total){
            //print starting row
            for(int index=startingCol;count<total && index<=endingCol; index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
       

            //print ending column
            for(int index=startingRow;count<total && index<=endingRow; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
          

            for(int index=endingCol;count<total && index>=startingCol; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            

            for(int index=endingRow;count<total && index>=startingRow; index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
            
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
    vector<int> result = spiralOrder(arr);
    for (int value : result) {
        cout << value << " ";
    }
    cout << endl;

    return 0;

    

}