#include<iostream>
#include<math.h>
#include<array>
using namespace std;

int main() {

    int n;
    cout<<"enter the array size:  ";
    cin>>n;
    int array[n];
     for (int i=0;i<n;i++){
      cout<<"enter the elements of the array: " <<endl;
      cin>>array[i];

  }

const int N=1e6+2;

int index[N];
for (int i=0;i<N;i++){
    index[i]= -1;
}

int minIndex=INT16_MAX;

for(int i=0; i<n;i++){
    if( index[array[i]] != -1){
     minIndex= min(minIndex, index[array[i]]);
  }
 else{
    index[array[i]]=i;
 }

}

  if(minIndex==INT16_MAX)
  {
    cout<< "-1" <<endl;

   }
 else
 {
    cout<< minIndex + 1 <<endl;
 }


    return 0;
}