

#include <iostream>
using namespace std;
#include <bits/stdc++.h>


int main()
{
    string s,big,small;
    int b,sm;
    cin>>s;
    cout<<endl;
    
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            b++;
            big=big+" "+s[i];
        } 
        else{
            small=small+" "+s[i];
            sm++;
        }
         
    }
    cout<<b<<big<<" "<<endl;
    cout<<sm<<small<<" ";
    
       
    
           
        
    return 0;
}
