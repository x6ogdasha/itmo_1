#include <iostream>
using namespace std;
int main() {
    int n,member[1000][2],key1,j,key2;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> member[i][j];
        }
    }
    //sort
    for(int i = n-1; i >=0; i--){
        key1 = member[i][1];
        key2 = member[i][0];
        j = i+1;

        while(j<=n && key1 < member[j][1]){
            member[j-1][1] = member[j][1];
            member[j-1][0] = member[j][0];
            j++;

        }

        member[j-1][1] = key1;
        member[j-1][0] = key2;

    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(member[i][1]==member[j][1]){
                if(member[i][0]<member[j][0]) swap(member[i][0],member[j][0]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cout << member[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}
