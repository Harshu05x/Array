#include <iostream>
using namespace std;

void print(int arr[],int size){
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
}

void reverse(int arr[],int size){
    int i = 0, j = size - 1;
    while(i <= j){
        swap(arr[i++],arr[j--]);
    }
    print(arr,size);
}

int main()
{
    int arr[] = {2,4,1,6,18,90,10,11,34,50,89}; 
    reverse(arr,11);
    return 0;
}