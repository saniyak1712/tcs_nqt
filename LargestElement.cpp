#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int ans = INT_MIN;
    
    for(int i =0; i<n; i++){
        int val =v[i];
        ans = max(val , ans);
    }
    cout << ans << endl;
    return 0;
}
