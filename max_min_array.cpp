#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getmax(int arr[], int n){
    int maxi= INT_MIN;
    for(int i=0; i<n; i++){
        // if(arr[i]>maxi) maxi=arr[i];
         maxi=max(maxi, arr[i]);
    }
    return maxi;
}
int getmix(int arr[], int n){
    int mini= INT_MAX;
    for(int i=0; i<n; i++){
        // if(arr[i]<mini) mini=arr[i];
        //can use a prebuilt fn. :
        mini=min(mini, arr[i]);
    }
    return mini;
}

int main(){
    int size;
    cin>>size;

    int num[10000];
    //taking input from user
    for(int i=0; i<size; i++){
        cin>>num[i];
    }
    cout<<"max value "<<getmax(num, size)<<endl;
    cout<<"mix value "<<getmix(num, size)<<endl;
    return 0;
}