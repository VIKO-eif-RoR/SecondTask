//Ruslan Nosko
#include<iostream>
#include<iomanip>
using namespace std;
//--------------------------------------
int max(int n, int A[]);
int min(int n, int A[]);
void paieska_ir_salinimas(int & n, int A[], int x, int & o);
//-------------------------------------

int main()
{
    int n;
    int A[100];
    int maxi=0;
    int mini=0;
    cout<<"Iveskite sveikaji skaiciu: ";cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Iveskite elementa: ";cin>>A[i];
    }
    int mx=max(n, A);
    int mn=min(n, A);
    paieska_ir_salinimas(n, A, mx, maxi);
    paieska_ir_salinimas(n, A, mn, mini);
    for(int i=0; i<n; i++){
        cout<<A[i]<<endl;
    }
    return 0;
}
int max(int n, int A[])
{
    int max=A[0];
    for(int i=1; i<n; i++){
        if(A[i]>max)
            max=A[i];
    }
    return max;
}
int min(int n, int A[])
{
    int min=A[0];
    for(int i=1; i<n; i++){
        if(A[i]<min)
            min=A[i];
    }
    return min;
}
void paieska_ir_salinimas(int & n, int A[], int x, int & o)
{
    o=0;
    for(int i=0; i<n; i++){
        if(A[i]==x){
                for(int j=i; j<n-1; j++){
                    A[j]=A[j+1];

                }
            n--;
            o++;

        }

    }
}
