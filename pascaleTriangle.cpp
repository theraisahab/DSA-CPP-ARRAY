//For specific number of ncr;


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n=7;
//     int r=2;
//     int result =1;
//     for(int i=0; i<r; i++){
//         result = result*(n-i);
//         result = result/(i+1);
//     }   

//     cout << result;
//     return 0;
// }


// row printing of ncr

// #include<bits/stdc++.h>

// using namespace std;

// int main(){ 
//     int n = 3;
//     int ans = 1;
//     vector<int> result;
//     cout << ans << " ";     
//     for(int i=1; i<=n; i++){
         
//         ans = ans*(n-i+1);
//         ans = ans/i;
//         result.push_back(ans);
//         cout << ans << " ";
// }
    

//     return 0;
// }


//all printing of ncr

#include<bits/stdc++.h>

using namespace std;

vector<int> generateRows(int n){
    long long ans =1;

    vector<int> ansRow;
    ansRow.push_back(ans);
    for(int i=1; i<n; i++){
        ans = ans*(n-i);
        ans = ans/i;
        ansRow.push_back(ans);
    }

    return ansRow;
}

vector<vector<int>> pascaleTriangle(int n){
    vector<vector<int>> ans;

    for(int i=1; i<n; i++){
        ans.push_back(generateRows(i));
    }

    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>  pascale( 0);
    pascale = pascaleTriangle(n);

     for (auto row : pascale) {
        for (auto element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}