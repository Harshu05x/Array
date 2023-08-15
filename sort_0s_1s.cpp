#include <iostream>
#include <vector>
using namespace std;

void print(int arr[],int n){
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}    
void sort(int arr[],int n){
    int start = 0;
    int end = n-1;
    int i = 0;
    print(arr,n);
    cout<<endl;
    while(i <= end){  
        if(arr[i] == 0)
            swap(arr[start++],arr[i++]);
        else if(arr[i] == 1)
            swap(arr[end--],arr[i]);
    }
    print(arr,n);
}
int main()
{
    int n;
    cout<<"enter num: ";
    cin>>n;

    int arr[n];
    int ele;
    for(int i = 0; i < n; i++){
        cout<<"Enter ele: ";
        cin>>arr[i];
    }
    sort(arr,n);
    return 0;
}