#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout<<"Enter number to check if its prime or non-prime"<<endl;
    int i;
    bool flag=0;  //not int flag
    int n; 
    cin>>n;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<" NON-PRIME"<<endl;
            int flag =1;
            break;
        }
    }

    if (flag==0){
        cout<<n<<"IS A PRIME NO";
    }

      //or this
        // if(n==i){   
        //     cout<<"Prime no found";
        // }
    
    
   

    
}