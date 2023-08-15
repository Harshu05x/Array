#include <iostream>
using namespace std;

void print_extreme(int arr[],int size){
    int i = 0, j = size - 1;
    while(i <= j){
        if(i == j )
            cout<<arr[i++]<<" ";
        else
            cout<<arr[i++]<<" "<<arr[j--]<<" ";
    }
}
int main()
{
    int arr[] = {2,4,1,6,18,90,10,11,34,50,89}; 
    print_extreme(arr,11);
    return 0;
}