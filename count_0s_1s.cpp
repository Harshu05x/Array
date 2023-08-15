#include <iostream>
using namespace std;

void count(int arr[],int size){
    int c0 = 0,c1 = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0)
            c0++;
        else if(arr[i] == 1)
            c1++;
    }
    cout<<"0's: "<<c0<<endl;
    cout<<"1's: "<<c1<<endl;
}
                   
int main()
{
    int arr[] = {0,1,1,0,1,0,1,1,1,0,1,0,1,0,1,0,0,0,1,1};
    count(arr,20);
    return 0;
}