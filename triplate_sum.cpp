#include <iostream>
#include <vector>
using namespace std;


void find_triplate(vector <int> arr,int sum){
    int i,j,k;
    for(i = 0; i < arr.size(); i++){
        for(j = i+1; j < arr.size(); j++){
            for(k = j+1; k < arr.size(); k++){
                if(arr[i]+arr[j]+arr[k] == sum){
                    cout<<"Pair found--> "<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                }
            }
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
    find_triplate(arr,sum);
    return 0;
}