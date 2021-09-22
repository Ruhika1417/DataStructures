
//prime no between a and b.

#include <iostream>
using namespace std;
int main(){
    cout<<" Enter two numbers: ";
    int i;
    int j;
    int a,b;
    cin>>a;
    cin>>b;
    for ( int i=a+1; i< b;i++){
        for (int j=2; j<i;j++){
            if(i%j==0){ //mistake j%i
                cout<<"Not a prime number "<<i<<endl;
                break;
            }
        }
        
    }
    if(j==i){ //to know agar woh pura loop complete karke bhar aaya hai or break statement throu.
    cout<<"prime no found"<<i<<endl;
    }
    
    return 0;

}