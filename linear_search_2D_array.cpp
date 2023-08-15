#include <iostream>
using namespace std;

void linear_search(int arr[][4],int rows,int cols,int key){
    int flag = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == key){
                flag = 1;
                cout<<"Key found at: "<<i<<","<<j<<endl;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag) cout<<"Key not found"<<endl;
}
                   
int main()
{
    int arr[5][4] = {{1,2,3,4},
                    {9,4,5,6},
                    {1,7,8,9},
                    {4,5,1,3},
                    {8,3,1,7}};

    linear_search(arr,5,4,8);
    
    return 0;
}