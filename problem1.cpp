#include <iostream>
using namespace std;

int main()
{
    int n=0,sum=0;
    cout<<"enter the size of the array : ";
    cin>>n;
    cout<<endl;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<"-"<<"num = ";
        cin>>arr[i];
        cout<<endl;
       }
       for(int i=0;i<n;i++){
        sum+=arr1[i]*arr2[i];
        cout<<arr1[i]<<"   "<<arr2[i]<<endl;
    }
    cout<<sum;
    return 0;
}
