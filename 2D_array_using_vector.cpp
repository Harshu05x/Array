#include <iostream>
#include <vector>
using namespace std;
                   
int main()
{
    // Creating 2D vector
    vector <vector <int> >arr;

    vector<int> a{1,2,3};
    vector<int> b{11,7,2,4};
    vector<int> c{9,8};

    // Inserting vectors
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    // Accessing elements
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    // Creating a 2D array with 3 rows and 5 cols using vector
    vector <vector <int> > brr(3,vector<int>(5,-1));
    for(int i = 0; i < brr.size(); i++){
        for(int j = 0; j < brr[i].size(); j++)
            cout<<brr[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}