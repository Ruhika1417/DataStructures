#include<iostream>
using namespace std;
string reverse;
int main(){
    string str=" Ruhika";
    for (int i=str.length();i>=1;i--){
    reverse+=str[i];
    }
    cout<<" reverse string is : "<<reverse;

    return 0;
}