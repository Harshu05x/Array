#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& arr){
    for(int i = 0; i < arr.size(); i++)
        cout<<arr[i]<<" ";
        cout<<endl;
}

// 2 pointer apporch or Dutch National Flag algo
void move(vector <int>& arr){
    int start = 0;
    int end = arr.size()-1;
    while(start <= end){  
        if(arr[start] < 0)
            start++;
        else if(arr[end] > 0)
            end--;
        else
            swap(arr[start++],arr[end--]);
    }
    print(arr);
}
       
int main()
{
    vector<int> arr{1,2,3,-2,-1,5,-1,4,-1,2};
    move(arr);

    return 0;
}