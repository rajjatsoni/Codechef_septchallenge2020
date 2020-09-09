#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1e9+7
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first //used for interator in maps keys eg itr->first
#define ss second //used for interator in maps value eg itr->second
#define all(c) cc.begin(), c.end()
#define mini(a, b, c) min(c, min(a, b))
#define fo1(i, n) for(int i=n-1;i>=0;i--)
#define fo(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main(){
    fast

    // Fuck Ratings, I'm in Love with Experience.
    // charas Ganja merekoh Pyaara

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 0;
        vector <int> v1;
        unordered_map <int, int> hash;
        fo(i,n){
            int x;cin>>x;
            if(hash.find(x) == hash.end() && x != 0){
                ans++;
                hash[x] = x;
            }
            
        }
        
        // sort(v1.begin(), v1.end());
        // fo(j, n - 1){
        //     if(v1[j] != v1[j + 1]){
        //         if(v1[j] != 0 && v1[j + 1] != 0){
        //         ans++;}
        //     }
        // }
        cout <<ans<<endl;
        //Big O mighty God Please help me to implement the logic without any bugs!
    }
    return 0;
}
