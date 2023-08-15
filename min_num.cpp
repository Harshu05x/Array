#include <iostream>
using namespace std;

int min(int arr[],int size){
    int min_num = INT32_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < min_num)
            min_num = arr[i];
    }
    return min_num;
}
int main()
{
    int arr[] = {2,4,1,6,18,90,10,11,34,50}; 
    cout<<"Min num: "<<min(arr,10);
    return 0;
}