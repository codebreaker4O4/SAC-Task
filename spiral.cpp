#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int top_row=0, bottom_row=n-1, left_col=0, right_col=n-1;
    int arr[n][n];
    int count=0;
    int m=n/2;
    while(true){
        for(int i=left_col;count <n*n && i<=right_col;i++){
            count++;
            arr[top_row][i]=count;
        }
        top_row++;
        for(int i=top_row;count <n*n && i<=bottom_row;i++){
            count++;
            arr[i][right_col]=count;
        }
        right_col--;
        for(int i=right_col;count <n*n && i>=left_col;i--){
            count++;
            arr[bottom_row][i]=count;
        }
        bottom_row--;
        for(int i=bottom_row;count <n*n && i>=top_row;i--){
            count++;
            arr[i][left_col]=count;
        }
        left_col++;
        if(count>=n*n)break;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< arr[i][j]<<"\t";
        }
        cout<<endl;
    }
	return 0;
}
