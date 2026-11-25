#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[] = {"0123","0023","456","00182","940","2901"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi = 0;
    for(int i=0; i<n; i++){
        maxi = max(maxi,stoi(arr[i]));
    }
    cout<<maxi;


}