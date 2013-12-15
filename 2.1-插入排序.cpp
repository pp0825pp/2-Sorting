#include <iostream>
using namespace std;
int main()
{
    int i, j, key;
    int A[6] = {8, 2, 4, 9, 3, 6};
    for(j = 1; j <= 5; j++)
    {
	  	key = A[j];
  		i = j - 1;
  		while(i >= 0 && A[i] > key)
  		{
			A[i+1] = A[i];
            i = i - 1;
		}
		A[i+1] = key;
    }

    for(int i = 0; i <= 5; i++)
        cout<<A[i]<<' ';
}
