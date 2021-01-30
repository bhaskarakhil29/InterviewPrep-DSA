#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int smaller=INT_MAX;
    int larger=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>larger){
            larger=arr[i];
        }
        if(arr[i]<smaller){
            smaller=arr[i];
        }
    }
    cout<<larger<<" "<<smaller<<endl;
    return 0;
}