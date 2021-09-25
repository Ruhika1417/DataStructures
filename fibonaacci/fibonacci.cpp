#include<iostream>
using namespace std;
 void fib(int n){
     int t1= 0;
     int t2=1;
     int  nextTerm;


     for(int i=1; i<=n; i++){   //i=1;t1=0; nt=1; t1=1;t2=1;
     cout<<t1<<endl;            //i=2;t1=1;nt=2;t1=1;t2=2;                          
     nextTerm=t1+t2;            //i=3;t1=2;nt=3; t1=2; t2=3; ..so on
     t1=t2; 
     t2=nextTerm;

     }
     return ;
 }


int main(){
    int n; 
    cout<<" enter the digit for fibonacci series: ";
    cin>>n;
    fib(n);
}


// 0 1 1 2 3 5 