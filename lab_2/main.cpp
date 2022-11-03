#include <iostream>
using namespace std;
int main() {
    int n,a[1001],x,pos_x;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cin >> x >> pos_x;

    for(int i=n+1; i > pos_x; i--){ //двигаю массив от pos_x на 1 эл вправо
        a[i] = a[i-1];
        
    }
    a[pos_x] = x; // вставляю эл-т на позицию
    for(int i = 1; i <= n+1; i++){
        cout << a[i] << " ";
    }
    return 0;
}
