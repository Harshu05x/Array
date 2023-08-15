#include <iostream>
using namespace std;

int linear_search(int arr[],int size,int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
}               
int main()
{
    int arr[] = {2,9,6,7,4,12,15};

    if(linear_search(arr,7,16) == -1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at "<<linear_search(arr,7,16)<<endl;

    return 0;
}