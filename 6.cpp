#include <iostream>
using namespace std;
int bin_search_left(int a[],int n,int x){
    int l = -1, r = n, mid;
    while(l < r-1){
        mid = l+(r-l)/2;
        if(a[mid]<x){
            l = mid;
        }else r = mid;
    }
    if(r<n && a[r]==x) return r+1;
    else return -1;
}
int bin_search_right(int a[],int n, int x){
    int l = -1, r = n, mid;
    while(l < r-1){
        mid = l+(r-l)/2;
        if(a[mid]<=x){
            l = mid;
        }else r = mid;
    }
    if(l<n && a[l]==x) return l+1;
    else return -1;
}
int main() {
    int a[100000],n,m,requests[100000];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    for(int i = 0; i < m; i++) cin >> requests[i];
    for(int i = 0; i < m; i++){
        cout  << bin_search_left(a,n,requests[i]) << " " << bin_search_right(a,n,requests[i]) << endl;
    }

    return 0;
}
