#include <iostream>
using namespace std;
int main() {
    
    int m,n,plots[40],k,mesks[2000],key,j,count=0,curr_mesk=0,curr_plot=0;
    
    cin >> m >> n;
    for(int i = 0; i < m*n; i++){
        cin >> plots[i];
    }
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> mesks[i];
    }
    //sort plots
    for(int i = 1; i < n*m; i++){
        key = plots[i];
        j = i-1;
        while(j>=0 && key <= plots[j]){
            plots[j+1] = plots[j];
            j--;
        }
        plots[j+1]=key;
    }
    //sort mesks
    for(int i = 1; i < k; i++){
        key = mesks[i];
        j = i-1;
        while(j>=0 && key <= mesks[j]){
            mesks[j+1] = mesks[j];
            j--;
        }
        mesks[j+1]=key;
    }
     //checking
     while(curr_mesk < k && curr_plot < m*n){
         if(mesks[curr_mesk]<=plots[curr_plot]){
            count++;
            curr_mesk++;
            curr_plot++;
        }else curr_plot++;
     }
    
    

    cout << count;

    return 0;
}