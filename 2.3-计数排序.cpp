#include<iostream>
using namespace std;
int main()
{
    int A[5] = {4,1,3,4,3}; 
    int B[5], C[4];
    for(int i=0; i<=3; i++)
        C[i] = 0;
    for(int j=0; j<=4; j++)
        C[A[j]-1] = C[A[j]-1] + 1;
    for(int i=1; i<=3; i++)
        C[i] = C[i] + C[i-1];
    for(int j=4; j>=0; j--)
    {
        B[C[A[j]-1]] = A[j];
        C[A[j]-1] = C[A[j]-1] - 1;        
    }
    for(int i=1; i<=5; i++)
        cout<<B[i]<<' ';        
    return 0;
}
