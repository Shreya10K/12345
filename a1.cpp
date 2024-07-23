#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<stack>
#include<set>
using namespace std;

int main(){
    int a,b,ans;
    cin>>a>>b;
    ans = (a+b)/2;
    cout<<ans<<endl;
    for(int i=a;i<=b;i++){
        cout<<i<<" ";
    }
    return 0;
}
