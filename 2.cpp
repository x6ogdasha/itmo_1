#include <iostream>
using namespace std;
int main() {
    int n,key,j;
    cin >> n;
    int a[1001];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i < n; i++){
        key = a[i];
        j = i-1;
        while(j>=0 && key < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
