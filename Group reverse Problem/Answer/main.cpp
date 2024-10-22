#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    string b;
    cin>>a;
 if(a!=0){

    while(a!=0){
            cin>>b;
            int h=( ( b.size() ) / a );

        for(int i=0;i<b.size();i+=h){
            for(int j=h;j>0;j--){
                    int k=j-1;
                    cout<<b[i+k];
            }
        }

        cout<<endl;
        cin>>a;


}

 }
return 0;
}
