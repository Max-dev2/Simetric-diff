#include <iostream>

using namespace std;
int c,d;

void vvod(int A[],int n,int B[],int m){
    for (int i=0;i<n;i++)
      A[i]=rand() % 10;
      //  cin>>A[i];
    for (int i = 0; i<n;i++)
        cout<<A[i]<<" ";
    cout<<"\n";
    for (int j=0; j<m;j++)
       //cin>>B[j];
        B[j]=rand()%15;
    for (int j=0;j<m;j++)
        cout<<B[j]<<" ";
    cout<<"\n";
}
void simetric(int A[],int n,int B[],int m,int F[]){

    int C[n];
    bool comp;
    /// різниця А від В
    for (int i=0;i<n;i++){
        comp=true;
        for (int j=0;j<m;j++)
            if (A[i] == B[j])
                comp=false;
        if (comp==true){
            C[c]=A[i];
            c++;
        }
    }
    ///різниця В від А
    int D[m];
    for (int i=0;i<m;i++){
        comp=true;
        for (int j=0; j<n;j++)
            if (B[i]==A[j])
                comp=false;
        if (comp==true){
            D[d]=B[i];
            d++;
        }
    }
    ///об'єдання
    int y=0;
    for (int i=0;i<c+d;i++){
        if (i<c)
            F[i]=C[i];
        else
          F[i]=D[y++];
    }

}
int minofF(int F[]){
    int minofarr;
    minofarr=F[0];

    for (int i=0;i<c+d;i++)
        minofarr=min(minofarr,F[i]);

 return minofarr;

}
void bublesort(int F[]){
    for (int i=1;i<c+d;i++){
        for (int j=0;j<c+d-i;j++)
        if (F[j]>F[j+1]){
            int temp=F[j];
            F[j]=F[j+1];
            F[j+1]=temp;
        }
    }
    cout<<"Sort_array { ";
    for (int i=0;i<c+d;i++)
        cout<<F[i]<<" ";
        cout<<"}"<<endl;
}
void finishArray(int F[]){
    int R[c+d],k=0,nb=0;
    bool repeat;

    for (int i=0; i<c+d; i++){
        repeat=true;
        for (int j=i+1;j<c+d;j++){
            if (F[i] == F[j]){
                repeat=false;
                if(k<=nb && F[i]!=R[nb])
                    k++;
                if (k>nb){
                    nb++;
                    R[nb]=F[i];
                }
            }
        }
        if (repeat==true)
            if(R[nb]!=F[i]){
                nb++;
                R[nb]=F[i];
            }
    }
    cout<<"Finish array { ";
    for(int i=1; i<=nb;i++)
        cout<<R[i]<<" ";
    cout<<"}"<<endl;

}



int main()
{
    cout<<"Enter n: ";
    int n;
    cin>>n;
    cout<<"Enter m: ";
    int m;
    cin>>m;

    int A[n],B[m],F[c+d];
    vvod(A,n,B,m);
    simetric(A,n,B,m,F);
    bublesort(F);
    finishArray(F);
    cout<<"Minimum: "<<minofF(F)<<endl;
    system("pause");
    return 0;
}
