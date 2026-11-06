// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s = "prashant chauhan";
//     cout<<s[1]<<endl;
//     s[0]='z';
//     cout<<s<<endl;
// }   


#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "prashant chauhan";
    int n = s.size();
    for(int i=0; i<n; i++){
        cout<<s[i];
    }

}