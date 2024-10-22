#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;

   int x=0;

   for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if((i%2)!=0){
                cout<<"#";
            }else{
                if(x==0){
                    if(j!=m){
                        cout<<".";
                    }else{
                        cout<<"#";
                        x=1;
                    }
                }else if(x==1){
                    if(j==1){
                        cout<<"#";
                    }else{
                        cout<<".";
                    }
                    if(j==m){
                        x=0;
                    }
                }
            }
        }
        cout<<endl;
   }

    return 0;
}
