
#include <iostream>
using namespace std;
#include <bits/stdc++.h>


int main()
{
    int n=0,num=0,maximum=0;
    cout<<"enter the size of the array : ";
    cin>>n;
    cout<<endl;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<i+1<<"-"<<"num = ";
        cin>>arr[i];
        cout<<endl;
       }
       
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
              maximum = max(maximum,arr[i]-arr[j]);  
            }
            
        }
    }
    cout<<maximum;
           
        
    return 0;
}
