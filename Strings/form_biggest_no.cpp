#include<iostream>
#include<algorithm>
using namespace std;
int main(){
     string str="123";
//     int a= stoi(str);


// for(int i=0;i<a.lenth;i++){
//     if(a[i]>=1 && a[i]<=9 )
//     cout<<a.sort();

 sort(str.begin(),str.end(), greater<int>());
 cout<<str;

 }


