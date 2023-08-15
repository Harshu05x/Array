#include <iostream>
using namespace std;

void row_sum(int arr[][4],int rows,int cols){
    cout<<"Row wise sum-->\n";          
    for(int i = 0; i < rows; i++){
        int sum = 0;
        for(int j = 0; j < cols; j++)
            sum += arr[i][j];
        cout<<"Sum of "<<i<<" row: "<<sum<<endl;
    } 
}

void col_sum(int arr[][4],int rows,int cols){
    cout<<"\nColumn wise sum-->\n";          
    for(int i = 0; i < cols; i++){
        int sum = 0;
        for(int j = 0; j < rows; j++)
            sum += arr[j][i];
        cout<<"Sum of "<<i<<" col: "<<sum<<endl;
    }
}
                   
int main()
{
    
    int arr[5][4] = {{1,2,3,4},
                    {9,4,5,6},
                    {1,7,8,9},
                    {4,5,1,3},
                    {8,3,1,7}};

    row_sum(arr,5,4);
    col_sum(arr,5,4);

    return 0;
}