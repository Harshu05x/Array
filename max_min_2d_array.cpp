#include <iostream>
using namespace std;

void max_min(int arr[][4],int rows,int cols){
    int max = INT32_MIN, min = INT32_MAX;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] > max) max = arr[i][j];
            if(arr[i][j] < min) min = arr[i][j];
        }
    }
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;
}
int main()
{
    int arr[5][4] = {{1,2,3,4},
                    {9,4,5,6},
                    {1,7,8,9},
                    {4,5,1,3},
                    {8,3,1,7}};

    max_min(arr,5,4);     
    return 0;
}