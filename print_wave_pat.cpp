#include <iostream>
using namespace std;


// column wise 
void print(int arr[][4],int row,int cols){
    for(int i = 0; i < cols; i++){
        if(i % 2 == 0){
            for(int j = 0; j < row; j++)
                cout<<arr[j][i]<<" ";
        }
        else{
            for(int j = row-1; j >= 0; j--)
                cout<<arr[j][i]<<" ";
        }
        cout<<endl; 
    }
}
// row wise
void print_01(int arr[][4],int row,int cols){
    for(int i = 0; i < row; i++){
        if(i % 2 == 0){
            for(int j = 0; j < cols; j++)
                cout<<arr[i][j]<<" ";
        }
        else{
            for(int j = cols-1; j >= 0; j--)
                cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }
}
int main()
{
    int arr[5][4] = {{1,2,3,4},
                    {9,4,5,6},
                    {1,7,8,9},
                    {4,5,1,3},
                    {8,3,1,7}};   
    print(arr,5,4);
    cout<<endl;
    print_01(arr,5,4);
    return 0;
}