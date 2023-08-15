#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector <int> common_ele(vector<int>& a,vector<int>& b,vector<int>& c){
    int i,j,k;
    i = j = k = 0;
    vector <int> ans;
    set <int> st;
    while(i < a.size() && j < b.size() && k < c.size()){
        if(a[i] == b[j] && b[j] == c[k]) {
            st.insert(a[i]);
            i++; j++; k++;
        }
        else if(a[i] < b[j]) i++;
        else if(b[j] < c[k]) j++;
        else k++;
    }
    for(auto x : st)
        ans.push_back(x);
    return ans;
}
                   
int main()
{
    vector<int> a{3,5,3,20,40,80};
    vector<int> b{3,3,20,80,100};
    vector<int> c{3,3,15,20,30,70,80,120};
    vector<int> arr = common_ele(a,b,c);
    for(int i = 0; i < arr.size(); i++)
        cout<<arr[i]<<" ";
    return 0;
}