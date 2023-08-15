#include <iostream>
#include <vector>
using namespace std;

void print(int crr[],int n){
    for(int i = 0; i < n; i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
}

void intersection_arr(int arr[],int brr[],int n,int m){

    cout<<"Enter ele in arr-->"<<endl;
    for(int i = 0; i < n; i++){
        cout<<"Enter "<<i+1<<" th ele: ";
        cin>>arr[i];
    }
    print(arr,n);

    cout<<"Enter ele in brr-->"<<endl;
    for(int i = 0; i < m; i++){
        cout<<"Enter "<<i+1<<" th ele: ";
        cin>>brr[i];
    }
    print(brr,m);

    int crr[n+m];
    int size = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            if(arr[i] == brr[j]){
                size++;
                brr[j] = -1;
                crr[i] = arr[i];
            }
    }
    for(int i = 0; i < size; i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    int n,m;
    cout<<"Enter size of arr: ";
    cin>>n;
    cout<<"Enter size of brr: ";
    cin>>m;
    int arr[n];
    int brr[m];

    intersection_arr(arr,brr,n,m);


    return 0;
}