#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Postioning Method
int duplicate_03(vector<int>& arr){
    while(arr[0] != arr[arr[0]])
        swap(arr[0],arr[arr[0]]);
    return arr[0];
}

// Negative marking method
int duplicate_02(vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        int ele = abs(arr[i]);
        if(arr[ele] < 0)
            return ele;
        arr[ele] *= -1;
    }
    return -1;
}

// sort and return
int duplicate_01(vector<int>& arr){
    sort(arr.begin(),arr.end());
    for(int i = 0; i < arr.size()-1; i++){
        if(arr[i] == arr[i+1])
            return arr[i];
    }
    return -1;
}

int duplicate(vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i] == arr[j])
                return arr[i];
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,9,6};
    cout<<"Duplicate ele: "<<duplicate_03(arr);
    return 0;
}