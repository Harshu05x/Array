#include <iostream>
#include <vector>
using namespace std;

void find_sum(vector <int> arr, int sum){
    for(int i = 0; i < arr.size()-1; i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i] + arr[j] == sum)
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<sum<<endl; 
        }
    }
}

int main()
{
    int n;
    cout<<"Enter n: "; 
    cin>>n;
    vector <int> arr;
    int sum;
    cout<<"Enter sum: ";
    cin>>sum;
    int ele;
    for(int i = 0; i < n; i++){
        cout<<"Enter ele: ";
        cin>>ele;
        arr.push_back(ele);
    }
    find_sum(arr,sum);
    return 0;
}