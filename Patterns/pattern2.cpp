#include <iostream>
using namespace std;
int main(){
    
    for (int i=0; i<5; i++){
       for (int j=0; j<4;j++){
           if( i==0 ||i==4){
             cout <<"*";
           }
           else if( j==0|| j==3){
             cout <<"*";
           }

           else{
           cout <<" ";
           }      
          
       }
           cout<<endl;        
    }  
    
    }

// you can combine else and else if together. my logic was giving space to the rows and coloumns 
//where nothing is to be printed but rather is it easier to have rows and columns printed.
