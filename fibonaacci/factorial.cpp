#include<iostream>
using namespace std;
    
    
    int fact(int n){
        int factorial=1;
      for (int i=2; i<=n;i++){
      factorial= factorial*i;
       
    }
    return factorial;
   
    //   cout<<factorial<<endl;
}

int main(){
    
    int n;
    cout<<"enter the number whose factorial you want to find: ";
    cin>>n;
     int ans=fact(n);     //this i didnt include

    cout<<ans;
    //you could directly cout<<fact(n);
    
    
}
    