#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "prashant";
    s.pop_back();
    s.push_back('k');
    cout<<s<<endl;
    reverse(s.begin()+1,s.end()-1);
    cout<<s<<endl;
}