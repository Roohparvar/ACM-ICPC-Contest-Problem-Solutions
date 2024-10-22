#include <bits/stdc++.h>

using namespace std;
int main()

{
    int n;
    while(cin>>n){
    int ff=0;
    int x[n];
    int y[(n-1)];
    int one,two;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
            if(i!=(n-1)){
            one=x[i];
            two=x[(i+1)];
            y[i]=abs(one-two);
            }
    }
    int flag=0;
    for(int i=1;i<=(n-1);i++){
      for(int j=0;j<n;j++){
            if(y[j]==i)
               flag=1;
          }
          if(flag==0){
                if(ff==0){
            cout << "Not jolly" << endl;
                    ff=1;
                }

          }
          flag=0;
      }
      if(ff==0)
cout << "Jolly" << endl;
    }
    return 0;
}
