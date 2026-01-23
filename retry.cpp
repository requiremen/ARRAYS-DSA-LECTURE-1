#include <iostream>
using namespace std;
#include <climits>
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"enter the elements";
        cin>>arr[i];
        }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int max = INT_MIN;
    for(int i = 0; i<n;i++){
        if(max<arr[i]) max = arr[i];


        
    }
    cout<<endl<<"this the the first max:"<<max;
    int smax = INT_MIN;
    for(int i =0; i<n; i++){
        if(smax<arr[i]&& arr[i]!=max) smax = arr[i];
    }
    cout<<endl<<"this is your second max :"<<smax;


    
}