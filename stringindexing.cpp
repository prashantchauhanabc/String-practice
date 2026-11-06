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
    // 
    for(char ch : s){
        cout<<ch;
    }

}