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
        arr1[i] = rand()%10;
        arr2[i] = rand()%10;
        sum+=arr1[i]*arr2[i];
        cout<<arr1[i]<<"   "<<arr2[i]<<endl;
    }
    cout<<sum;
    return 0;
}
