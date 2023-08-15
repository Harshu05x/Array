#include <iostream>
#include <vector>
using namespace std;

void print(vector <int> arr){
    for(int i = 0; i < arr.size(); i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void sort(vector<int>& arr){
    print(arr);
    int c0 = 0, c1 = 0, c2 = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0) c0++;
        else if(arr[i] == 1) c1++;
        else if(arr[i] == 2) c2++;
    }

    int i = 0;
    while(c0--) arr[i++] = 0;
    while(c1--) arr[i++] = 1;
    while(c2--) arr[i++] = 2;
    print(arr);
}

// In-place sorting using 3 pointers
void sort01(vector<int>& arr){
    int l = 0, m = 0, h = arr.size()-1;
    while(m <= h){
        if(arr[m] == 0) 
            swap(arr[l++],arr[m++]);
        else if(arr[m] == 1) 
            m++;
        else 
            swap(arr[m],arr[h--]);
    }
    print(arr);
}
int main()
{
    vector <int> arr{1,2,0,1,2,2,1,0,1,0,2,1,0};
    sort01(arr);
    return 0;
}