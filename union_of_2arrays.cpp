#include <iostream>
#include <vector>
using namespace std;

void print(vector <int> crr){
    cout<<"Ele in crr: "<<endl;
    for(int i = 0; i < crr.size(); i++)
        cout<<crr[i]<<" ";
}

void uniou_arr01(vector <int> arr, vector <int> brr){
   
    cout<<"Enter ele in arr-->"<<endl;
    for(int i = 0; i < arr.size(); i++){
        cout<<"Enter "<<i+1<<" th ele: ";
        cin>>arr[i];
    }

    cout<<"Enter ele in brr-->"<<endl;
    for(int i = 0; i < brr.size(); i++){
        cout<<"Enter "<<i+1<<" th ele: ";
        cin>>brr[i];
    }

    vector <int> crr;
    for(int i = 0; i < arr.size(); i++){
        int flag = 0,j = 0;
        for(; j < brr.size(); j++){
            if(arr[i] == brr[j]){
                flag = 1;
            }
        }
        if(flag == 0){
            crr.push_back(arr[i]);
            brr[j] = -1;
        }
    }
    
    print(crr);   
}

// Duplicates not allowed
void union_arr(vector <int> arr, vector <int> brr){

    cout<<"Enter ele in arr-->"<<endl;
    for(int i = 0; i < arr.size(); i++){
        cout<<"Enter "<<i+1<<" th ele: ";
        cin>>arr[i];
    }

    cout<<"Enter ele in brr-->"<<endl;
    for(int i = 0; i < brr.size(); i++){
        cout<<"Enter "<<i+1<<" th ele: ";
        cin>>brr[i];
    }

    vector <int> crr;
    for(int i = 0; i < arr.size(); i++)
        crr.push_back(arr[i]);
    for(int i = 0; i < brr.size(); i++)
        crr.push_back(brr[i]);

    print(crr);
    
}
                   
int main()
{
    int n,m;
    cout<<"Enter size of arr: ";
    cin>>n;
    cout<<"Enter size of brr: ";
    cin>>m;
    vector <int> arr(n);
    vector <int> brr(m);

    union_arr(arr,brr);
    
    return 0;
}