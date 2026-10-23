#include<bits/stdc++.h>

 using namespace std;

 int main(){
    int arr[] = {1,2,3,-3,1,1,1,4,2,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int count =0;
    for(int i=0; i<n; i++){
        int sum =0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            if(sum == k){
                count ++;
            }
        }
    }

    cout << count;
 }

//Left with optimal solution do it later