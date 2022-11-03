#include <iostream>
using namespace std;
int main() {
    int n,a[100],min_dif,z,min_dif_pos;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> z;
    min_dif=abs(z-a[0]);
    min_dif_pos=0;
    for(int i = 0; i < n; i++){
       if(abs(z-a[i])<min_dif){
           min_dif = abs(z-a[i]);
           min_dif_pos = i;
       }
    }
    cout << a[min_dif_pos];
    return 0;
}
