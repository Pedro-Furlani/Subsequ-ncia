#include <bits/stdc++.h>

using namespace std;
 typedef long long ll;
 


int main(){
    int n, m;
    cin>>n>>m;
    int a[n]={0}, b[m]={0};
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
      cin>>b[i];
    }
    int j=0;
    for (int i = 0; i <n; i++)
    {
        if(b[j]==a[i])   
            j++; 
    }
    if(j==m)
      cout<<"S";
    else cout<<"N";
}
 