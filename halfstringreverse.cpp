#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s = "prashant";
    int n = s.size();
    int half = n/2;
    reverse(s.begin(),s.begin()+half);
    cout<<s<<endl;



}
