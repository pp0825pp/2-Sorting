//平均时间复杂度O(nlogn) 
#include <iostream>
using namespace std;
int partition(int A[], int p, int q)
{
    int i, j, x;
    x = A[p];
    i = p;
    for(j = i + 1; j <= q; j++)
    {
        if(A[j] <= x)
        {
            i = i + 1;
            swap(A[j], A[i]);        
        }      
    }
    swap(A[p], A[i]);
    return i;    
}
void Quicksort(int A[], int p, int r)
{
    if(p < r)
    {
        int q = partition(A, p, r);
        Quicksort(A, p, q - 1);
        Quicksort(A, q + 1, r);     
    }    
}
int main()
{
    int A[ ] = {6,10,13,5,8,3,2,11,4,12};
    Quicksort(A, 0, 9);
    for(int i = 0; i <= 9; i++)
        cout<<A[i]<<' ';
    return 0;      
}
