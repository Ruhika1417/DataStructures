#include<iostream>
using namespace std;
#include<math.h>

int main() {
    int n;
    
    int mx=-199999;
    cout<<"enter the array size:  ";
    cin>>n;
    int array[n];
  for (int i=0;i<n;i++){
      cout<<"enter the elements of the array: "<<endl;
      cin>>array[i];
  }



// for (int j=1;j<=n;j++){
//     if (max>array[j]&& array[j]>array[j-1]){
       
//         max=array[j];
//         //  cout<<max<<endl;
//     }
//     else{
//         max=array[j-1];
//         // cout<<max<<endl;
//     }
//    cout<<max<<endl;

// }
for (int i=0;i<n;i++){
    mx=max(mx,array[i]);  // mx will get updated to a[0] n then will check w other elements;
    cout<<mx<<endl; 
}

   return 0;
}




