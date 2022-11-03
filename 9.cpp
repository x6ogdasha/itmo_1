#include <iostream>
using namespace std;

void quicksort(int a[], int l, int r){
    int i = l, j = r, x = a[(l+r)/2];
    while(i <= j){
        while(a[i] < x){
            i++;
        }
        while(a[j] > x){
            j--;
        }
        if(i <= j){
            swap(a[i++],a[j--]);
        }
    }
    if(l < j) quicksort(a, l, j);
    if(r > i) quicksort(a, i, r);
}



int main() {
    int n,a[100000];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];    
    }   
    quicksort(a,0,n-1);
     for(int i = 0; i < n; i++){
        cout << a[i] << " ";    
    }
    return 0;
}