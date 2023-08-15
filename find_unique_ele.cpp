#include <iostream>
#include <vector>
using namespace std;

int find_unique(vector <int> arr){
    int ans = 0;
    for(int i = 0; i < arr.size(); i++){
        ans = ans ^ arr[i];     // perform xor operation with all ele in array
                                // xor cancel out all similar items and return unique ele
    }
    return ans;
}
                   
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector <int> arr(n);
    for(int  i = 0; i < arr.size(); i++){
        cout<<"Enter "<<i+1<<" th ele: "; 
        cin>>arr[i];
    }

    int unique_ele = find_unique(arr);
    cout<<"Unique ele: "<<unique_ele<<endl;
    return 0;
}