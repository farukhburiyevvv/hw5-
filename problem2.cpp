
#include <iostream>
using namespace std;
#include <bits/stdc++.h>


int main()
{
    int n=0,mini=2e18;
    cout<<"enter the size of the array : ";
    cin>>n;
    cout<<endl;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<i+1<<"-"<<"num = ";
        cin>>arr[i];
        cout<<endl;
       }
       
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
       }
    
    for(int i=0;i<n;i++){
        if(arr[i]%mini!=0){
            mini=-1;
            break;
        }
    }
        
    cout<<mini;
        
    return 0;
}
