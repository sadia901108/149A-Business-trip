#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    vector<int>v;
    int total=0;
    for(int i=0;i<12;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        total=total+v[i];
    }
   // if(k==0) cout<<0<<endl;
    if(total<k) cout<<-1<<endl;
    else{
    sort(v.begin(),v.end(),greater<int>());
    int sum=0,count=0;
    while(sum<k)
    {
        sum=sum+v[count];
        count++;
    }
    cout<<count<<endl;
    }



}
