#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    fast
    int t; cin>>t;
    while(t--){
        int n;cin>>n;int ans1 = 0; int ans2 = 0; 
        int arr[n + 1][n + 1];
        for(int i = 1; i <= n;i++){
            for(int j =1;j<=n;j++){
                cin>>arr[i][j];
            }
        }
        for(int it = 2; it <= n; it++){
            if(arr[1][it] != it) {
                ans1 = ans2 + 1;
                }
            else ans2 = ans1 + 1; 
        }
        if(arr[1][n] != n) cout << ans2 + 1<<endl;
        else cout << ans1<<endl;
    }
    return 0;
}