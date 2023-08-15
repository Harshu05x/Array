#include <iostream>
#include <vector>
using namespace std;

vector <int> add(vector<int> arr,vector<int> brr){
    int i = arr.size()-1, j = brr.size()-1;
    int carry = 0;
    vector<int> ans;
    while(i >= 0 && j >= 0){
        int x = arr[i--] + brr[j--] + carry;
        int digit = x % 10;
        ans.push_back(digit);
        carry = x / 10;
    }
    while(i >= 0){
        int x = arr[i--] + 0 + carry;
        int digit = x % 10;
        ans.push_back(digit);
        carry = x / 10;
    }
    while(j >= 0){
        int x = 0 + brr[j--] + carry;
        int digit = x % 10;
        ans.push_back(digit);
        carry = x / 10;
    }
    if(carry) ans.push_back(carry);
    return ans;
}
                   
int main()
{
    vector<int> arr{9,1,2,3,4};
    vector<int> brr{9,4,5,7,8};
    vector<int> ans = add(arr,brr);
    for(int i = ans.size()-1; i >= 0; i--){
        cout<<ans[i]<<" ";
    }
    return 0;
}