#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the rows : ";
    cin>>n;
    int a =1;
    for(int i=1;i<=n;i++){
        a=i;
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }
    return 0;
}