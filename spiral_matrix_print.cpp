#include <iostream>
#include <vector>
using namespace std;

void print(vector <int>& ans){
    for(int i = 0; i < ans.size(); i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}
vector <int> spiral_print(vector <vector<int> > arr){
    int m = arr.size();
    int n = arr[0].size();
    int total_ele = m * n;
    int count = 0;
    int starting_row = 0;
    int ending_col = n-1;
    int ending_row = m-1;
    int starting_col = 0;
    vector <int> ans;
    int i;
    while(count < total_ele){
        for(i = starting_col; i <= ending_col; i++){
            ans.push_back(arr[starting_row][i]);
            count++;
        }
        starting_row++;
        for(i = starting_row; i <= ending_row; i++){
            ans.push_back(arr[i][ending_col]);
            count++;
        }
        ending_col--;
        for(i = ending_col; i >= starting_col; i--){
            ans.push_back(arr[ending_row][i]);
            count++;
        }
        ending_row--;
        for(i = ending_row; i >= starting_row; i--){
            ans.push_back(arr[i][starting_col]);
            count++;
        }
        starting_col++;
    }
    return ans;
}
                   
int main()
{
    vector <vector<int> > arr {{1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12}};
   
    vector<int> ans = spiral_print(arr);
    print(ans);
    return 0;
}