#include <iostream>
using namespace std;

int max(int arr[],int size){
    int max_num = INT32_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > max_num)
            max_num = arr[i];
    }
    return max_num;
}
int main()
{
    int arr[] = {2,4,1,6,18,90,10,11,34,50}; 
    cout<<"Max num: "<<max(arr,10);
    return 0;
}