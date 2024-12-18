#include<iostream>

using namespace std;

#define int long long 
#define ld long double
#define For(i,a,b) for(int i =a; i<=b;i++)
#define pii pair<int, int> 

const int MOD = 1e9+7;
const int N = 100;
const int maxn = 150000;

int arr[maxn], n, k, multi;
void GetInput()
{
    cin >> n;
    For(i, 0, n) cin >> arr[i];
    cin >> k >> multi;
}   


void solve(){   
    while(k--){
    int min_ = arr[0];
    int index = 0;
    for(int i = 1; i< n;i++){
        if(arr[i]  < min_ ){
            min_ = arr[i];
            index = i;
        }
    }
    arr[index] = arr[index] * multi;
    }
    
}      
void rep()
{
    For(i, 0, n) cout << arr[i] << " ";
}
signed main()
{
#ifndef LOCAL
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#endif
    GetInput();
    solve();
    rep();
}