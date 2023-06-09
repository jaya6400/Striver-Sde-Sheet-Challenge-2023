#include<bits/stdc++.h>
using namespace std;

int search(int* arr, int n, int key) {
    int lo = 0, hi = n-1, mid;
    while(lo <= hi){
        mid = (lo+hi)>>1;
        if(arr[mid] == key)
        return mid;
        if(arr[lo] <= arr[mid]){
            if(key >= arr[lo] && key <= arr[mid])
            hi = mid - 1;
            else
            lo = mid + 1;
        }else{
            if(key >= arr[mid] && key <= arr[hi])
            lo = mid + 1;
            else
            hi = mid -1;
        }
    }
    return -1;
}

 int main(){
 int n;
 cin>>n;
 int arr[n];
 for(int i = 0; i < n; i++)
 cin>>arr[i];
 cout<<search(arr);
 return 0;
 }
