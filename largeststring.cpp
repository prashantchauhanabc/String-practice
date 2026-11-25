#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[] = {"0123","0023","456","00182","2901"};
    int n =  sizeof(arr)/sizeof(arr[0]);
    string largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i].length() > largest.length()){
            largest = arr[i];
        }
    }
    cout<<"Largest string : ";
    cout<<largest;
    return 0;

}