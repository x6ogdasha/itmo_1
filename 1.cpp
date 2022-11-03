#include <iostream>
using namespace std;
int main() {
    int n,a[100000],status=-1;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];

    for(int i = 1; i <=n/2; i++){
        if(2*i<=n && a[i]<=a[2*i]){
            continue;
        }else status=1;
        if(2*i+1<=n && a[i] <= a[2*i+1]){
            continue;
        }else status=1;

    }
    cout << (status==1 ? "NO" : "YES");


    return 0;
}
