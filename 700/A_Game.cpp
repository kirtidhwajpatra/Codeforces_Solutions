#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    bool firstPlayer = true;

    while(a.size()>1){
        if(firstPlayer==true){
            a.pop_back();
        } else{
            a.erase(a.begin());
        }
        if(firstPlayer==true)firstPlayer=false;
        else firstPlayer=true;
        
    }
    cout<<a[0]<<endl;

    return 0;
}