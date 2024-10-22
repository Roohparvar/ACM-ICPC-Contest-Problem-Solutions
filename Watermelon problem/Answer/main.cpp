#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,l;
    while(cin>>n){
            int t=0;
            if(n==1 || n==2 || n==3){
                cout<<"NO"<<endl;
                t=1;
            }else{
            for(int i=2;i<n;i+=2){
                int k=(n-i);
                if((k%2)==0){
                    cout<<"YES"<<endl;
                    t=1;
                    break;
                }


                }

                   }
                   if(t==0){
                    cout<<"NO"<<endl;
                   }
            }


    return 0;
}
