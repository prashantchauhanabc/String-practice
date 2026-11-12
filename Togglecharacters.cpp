#include<iostream>
#include<string>
using namespace std;
int main(){
    string x;
    cout<<"Enter string :";
    getline(cin,x);
    int n = x.size();
    for(int i=0; i<n; i++){
    if(x[i]>='A' && x[i]<='Z'){
        x[i] += 32;
    }
    else if(x[i]>= 'a' && x[i]<= 'z'){
        x[i] -= 32;
    }
    }
    cout<<"After toggling :";
    cout<<x<<endl;







}