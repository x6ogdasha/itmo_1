#include <iostream>
using namespace std;
int main() {
    int n,a[1000],min1,min2;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    min1=a[0]; // 99
    min2=a[1]; // 1

    for(int i = 0; i < n; i++){
       if (a[i]<min1) { // 1 < 99 => min2 = 99 and min1 = 1
           min2 = min1; //
           min1 = a[i];
       }else if(a[i]<min2){
           min2 = a[i];
       }
    }
    cout << min1 << " " << min2;

    return 0;
}
