#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        int m=i;
        int c=0;
        while(m!=0){
            m=m/10;
            c++;
        }

        m=i;
        int sum=0;
        while(m!=0){
            int r=m%10;
            sum+=pow(r,c);
         m=m/10;
        }
        if(sum==i) cout<<i<<endl;
    }
    return 0;
}