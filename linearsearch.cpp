#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"; 
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cout<<"enter the value";
        cin>>arr[i];
    }
    int x;
    cout<<"enter the value of x";
    cin>>x;
    //searching
    bool flag = false;
    for(int i =0; i<n;i++){
        if(arr[i]==x) flag=true;
        

    }
    if( flag = true){
        cout<<"present";
    }else{
        cout<<"not present";
    }
    
}