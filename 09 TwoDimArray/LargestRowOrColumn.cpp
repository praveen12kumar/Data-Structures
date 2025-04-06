/*
You are given a 2D list (array) with dimensions N rows and M columns, filled with integers. 
Your task is to find the row or column that has the largest sum of its elements.

Important Rules:
- If two or more rows/columns have the same sum, choose the one that comes first.
- If a row and a column have the same largest sum, choose the row.
Goal: Return which row or column has the largest sum.

Detailed explanation ( Input/output format, Notes, Images )

Sample Input 1:
6 9 
8 5 
9 2 
Sample Output 1:
column 0 23
*/

#include <iostream>
#include<climits>
using namespace std;

void findLargest(int **input, int nRows, int mCols){

   int largestRow = 0, largestCol = 0;
   int largestSumRow = INT_MIN;
   int largestSumCol = INT_MIN;


   for(int i = 0; i < nRows; i++){
      int sum = 0;
      for(int j = 0; j <mCols; j++){
         sum += input[i][j];
      }
      if(sum > largestSumRow){
         largestRow = i;
         largestSumRow = sum;
      }
   }

   for(int i = 0; i < mCols; i++){
      int sum = 0;
      for(int j = 0; j < nRows; j++){
         sum += input[j][i];
      }
      if(sum > largestSumCol){
         largestCol = i;
         largestSumCol = sum;
      }
      
   }

   if(largestSumRow > largestSumCol){
      cout<<"row"<<" "<<largestRow <<" "<<largestSumRow;
   }
   else if(largestSumCol > largestSumRow){
      cout<<"col"<<" "<<largestCol<< " "<<largestSumCol;
   }
   else{
        cout<<"row"<<" "<<largestRow <<" "<<largestSumRow;
   }
}

int main(){
    int row, col;
    cout<<"Enter number of rows: "<<endl;
    cin>>row;

    cout<<"Enter number of columns: "<<endl;
    cin>>col;

    int **input = new int*[row];
    for(int i = 0; i < row; i++){
        input[i] = new int[col];
        for(int j = 0; j < col; j++){
            cin>>input[i][j];
        }
    }

    findLargest(input, row, col);

    return 0;
}