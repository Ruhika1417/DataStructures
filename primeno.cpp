#include <iostream>
using namespace std;

int main(){
    int n;
    int number;  
    cout<<" Enter the number to be checked: ";
    cin>>number; 

    for (int n=2; n<=n-1; n++){ 
        if ( number%n == 0 ){

            cout<<" non prime number found: "<< number <<endl;
            break;
        }


        // else {
        //     cout<<" prime no found";
        // }
    }

    if (n ==number){
        cout<<" prime no found "<<number;
    }
    

}





