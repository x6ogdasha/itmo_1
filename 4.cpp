#include <iostream>
using namespace std;
int main() {
    int n,a[100],count=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i < n-1; i++){
        if(a[i-1]<a[i] && a[i+1]<a[i]) count++;
    }
    cout << count;
    return 0;
}
