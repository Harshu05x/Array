#include <iostream>
#include <vector>
using namespace std;
                   
int main()
{
    vector <int> arr;
    cout<<"Size: "<<arr.size()<<endl;           // How many elements present in array
    cout<<"Capacity: "<<arr.capacity()<<endl;   // How many elements we can store

    // insert elements
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);


    for(int i = 0; i < arr.size(); i++)
        cout<<arr[i]<<" ";
    
    arr.pop_back();

    cout<<endl;
    cout<<"Size: "<<arr.size()<<endl;           
    cout<<"Capacity: "<<arr.capacity()<<endl;
   
    // Initilise all elements in arr with 1
    vector <int> brr(10,1);
    for(int i = 0; i < brr.size(); i++)
        cout<<brr[i]<<" ";

    cout<<endl;
    cout<<"Size: "<<brr.size()<<endl;           
    cout<<"Capacity: "<<brr.capacity()<<endl;

    vector <int> crr{10,20,30,40,50,60};    
    for(int i = 0; i < crr.size(); i++)
        cout<<crr[i]<<" ";

    cout<<"\nVector crr empty or not "<<crr.empty()<<endl; 

    vector <int> drr;
    cout<<"\nVector drr empty or not "<<drr.empty()<<endl; 
    
    return 0;
}