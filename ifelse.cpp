#include <iostream>
using namespace std;
int main (){
    int a= 14;
    int b=7;
    int c=20;
    if (a>b){
        if (a>c){
            cout<<" A is the max no  "<<a<< endl; 
        }
        else {
            cout<<" c is the max no "<<c<<endl;

            //cout<< " a is not max";

        }
    
    }
    // else(//condition is wrong indentation){}
    //else if (//use this){ }
    // else{//also works here.}
   else if(b>a) {
       if (b >c ){
           cout<< b <<" is the max no " << endl;
        
       }
       else {
           cout <<" c is the max no "<<c <<endl;
           //cout" b is not max"

       }

   }
   /*
   else{
   cout << " c is the greater no "<<c << endl;
   }
   */
   return 0;
}





//commented lines is the code wrongly written for the first time.




/*6 5 10
a> b true and    false and b> c true  b is max 
                          b> c false then c is max

a> c       a> c false then c is greater 
max is a 
*/
