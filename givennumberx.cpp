// couunt the number of elements greater than a number x//
#include <iostream>
using namespace std;
int main(){
    int count = 0;
    int x;
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    cout<<"enter the value of x :";
    cin>>x;

    int arr[n];
    for(int i = 0; i<n;i++){
        cout<<"enter the value of elments";
        cin>> arr[i];
        
    }
    for(int i =0; i<n;i++){
        if(arr[i]< x){
            count +=1;
        }
    }
    cout<<count;
   
    
}