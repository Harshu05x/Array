#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int repeating_ele_01(vector<int>& arr){
    unordered_map<int,int> hash;
    for(int i = 0; i < arr.size(); i++)
        hash[arr[i]]++;
    
    for(int i = 0; i < arr.size(); i++){
        if(hash[arr[i]] > 1)
            return i+1;
    }
    return -1;
}

int repeating_ele(vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i] == arr[j]){
                cout<<"Ele: "<<arr[i]<<endl;
                return i+1;
                break;
            }
        }
    }
    return -1;
}               
int main()
{
    vector<int> arr{1,6,3,4,4,5,9,7,2,9};
    cout<<"Index: "<<repeating_ele_01(arr);
    cout<<"Aniket"<<endl;
    return 0;
}
