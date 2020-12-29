#include<iostream>
using namespace std;

int main(){
    cout<<"YEar";
    int n=5;
    int A[n];
    int B[10]={10,9,8,7,6,5,4,3,2,1};
    for (int i = 0; i < n; i++)
        cin>>A[i];
    for (int i =0 ; i < n;i++)
        cout<<A[i]<<" ";
        cout<<"\n Happy New Year"<<endl ;   
    for (int i = 0 ; i < 10 ; i++)
        cout<<B[i];    
    int maxim;
     for (int i = 0 ;i<n; i++){
         maxim=max(maxim,A[i]);
     }
     cout<<maxim;
    system("pause");      
   return 0;
}
