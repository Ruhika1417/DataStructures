//given an unsorted array A of size n of non negative integers find a subarray which adds to a given number S
// 7 3 1 2 5 eg:s=15 7 3 5 selected wont make a subarray coz its not continous

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the array size: ";
    cin>>n;
    int array[n];
    for (int i=0;i<n;i++){
        cout<<"enter the array elements"<<endl;
        cin>>array[i];

    }
    
    int S; //sum
    cout<<"enter the sum to be checked";
    cin>>S;
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(S==array[i]+array[j]){            //mistake:not i; array[i]
                cout<<i<<j<<endl;
                break;
            }
        
            else{
                cout<<" subarray not found ";
    
            }
        }
    }


}