#include <iostream>
#include <vector>
using namespace std;

// Postioning approach
void missing_ele_01(vector<int>& arr){
    int i = 0;
    while(i < arr.size()){
        int ele = arr[i] - 1;
        if(arr[ele] != arr[i])
            swap(arr[ele],arr[arr[i]]);
        else i++;
    }
    for(int i = 0; i < arr.size(); i++)
        if(arr[i] != i+1) cout<<i+1<<" ";
}

// Negative marking appraoch
void missing_ele(vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        int ele = abs(arr[i]);
        if(arr[ele - 1] > 0)
            arr[ele - 1] *= -1;
    }
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > 0) cout<<i+1<<" ";
    }
}                  
int main()
{
    vector<int> arr{1,3,4,3,3,6,1,8,9};
    cout<<"Missing ele: "<<endl;
    missing_ele_01(arr);
    return 0;
}