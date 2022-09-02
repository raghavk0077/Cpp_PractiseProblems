#include "bits/stdc++.h"
using namespace std;

int main() {
    vector <int> arr;
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        int value;
        cin>>value;

        arr.push_back(value);
    }

    for(int i = 1; i < n; i+=2){
        if(arr[i] < arr[i - 1]){
            swap(arr[i], arr[i-1]);
        }
        if(arr[i] < arr[i + 1]){
            swap(arr[i], arr[i+1]);
        }
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}