#include <iostream>
using namespace std;
                   
int main()
{
    // Declaration
    int arr[3][3];
    
    // Initialization
    int brr[3][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};

    // Row wise accessing
    cout<<"Row wise-->\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            cout<<brr[i][j]<<" ";
        cout<<endl;
    }
    // Column wise accessing
    cout<<"Column wise-->\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            cout<<brr[j][i]<<" ";
        cout<<endl;
    }

    // Taking Inputs
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"Enter "<<i<<" , "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}