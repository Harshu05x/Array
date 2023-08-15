#include <iostream>
using namespace std;

void print(int arr[][4],int rows,int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(int arr[][4],int rows,int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i; j++)
            swap(arr[i][j],arr[j][i]);
    }
    cout<<"After Transpose --> "<<endl;
    print(arr,rows,cols);
}                   
int main()
{
    int arr[4][4] = {{1,2,3,4},
                    {9,4,5,6},
                    {1,7,8,9},
                    {4,5,1,3}};
    cout<<"Before Transpose --> "<<endl;
    print(arr,4,4);
    transpose(arr,4,4);
 
    return 0;
}