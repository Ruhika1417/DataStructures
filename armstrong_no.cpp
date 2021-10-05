#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number to check if its armstrong or not: "<<endl;
    cin>>n;
    
    int a=0;
    int originaln=n; 
    while(n>0){      //..was not working coz of n>=0
    int lastdigit=n%10; 
     a= a + lastdigit*lastdigit*lastdigit;//can use math library and power fun..pow(lastdigit,3)
    n=n/10;

    } 

    if (a==originaln){
        cout<<"yes an- armstrong number"<<endl;
    }
        else{
            cout<<"its not an armstrong no"<<endl;
        }
    return 0;
    
}