
#include<iostream>
#include<stdlib.h>
using namespace std;

void Merge(int *A,int *L,int left,int *R,int right) {
	int i,j,k;
	i = 0; j = 0; k =0;

	while(i<left && j< right) 
	{
		if(L[i]  < R[j]) 
            A[k++] = L[i++];
		else
            A[k++] = R[j++];
	}
	while(i < left) 
    {
        A[k++] = L[i++];
    }
	while(j < right) 
    {
        A[k++] = R[j++];
    }
}


void MergeSort(int *A,int n) 
{
	int m,i, *L, *R;
	if(n < 2) 
        return; 

	m = n/2;  

	
	L = (int*)malloc(m*sizeof(int)); 
	R = (int*)malloc((n- m)*sizeof(int)); 
	
	for(i = 0;i<m;i++) 
    {
        L[i] = A[i];
    } 
	for(i = m;i<n;i++) 
    {
        R[i-m] = A[i];
    } 

	MergeSort(L,m);  
    MergeSort(R,n-m);
	Merge(A,L,m,R,n-m);   
        free(L);
        free(R);
}

int main() {
	
	
	int A[] = {6,2,3,1,9,10,15,13,12,17};  
	int i,N;
    N = sizeof(A)/sizeof(A[0]); 

	
	MergeSort(A,N);

	
	for(i = 0;i < N;i++) 
    cout<<A[i]<<" ";
	return 0;
}