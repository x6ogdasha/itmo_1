#include <iostream>
using namespace std;
int main() {
    int n,key,j,p=0; // p - для отслеживания массива в случае его неизменности
    cin >> n;
    int a[1001];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i < n; i++){
        key = a[i];
        j = i-1;
        p=0;
        while(j>=0 && key < a[j]){
            a[j+1] = a[j];
            j--;
            p++;
        }

        a[j+1] = key;
        
        if(p!=0){
            for(int k = 0; k < n; k++){
                cout << a[k] << " ";
            }
            cout << endl;
        }

    }
//    for(int k = 0; i < n; k++){
//        cout << a[k] << " ";
//    }
    return 0;
}
