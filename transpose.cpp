// Rotate the matrix
#include<bits/stdc++.h>

using namespace std;
 int main(){
    vector<vector<int>> arr = {
        {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}
    };

    for(int i =0; i<4; i++){
        for(int j=i; j<4; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i=0; i<4; i++){
        int p1=0, p2 =3;
            while(p1<p2){
                swap(arr[i][p1], arr[i][p2]);
                p1++; p2--;
            }
    }
    

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}