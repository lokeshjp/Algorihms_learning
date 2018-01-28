
#include<stdio.h>
#include<stdint.h>
void Merge( uint32_t *A,uint32_t p, uint32_t q, uint32_t r)
{
	uint32_t left[100] = {0};
	uint32_t right[100] = {0};
	uint32_t i, j,k;
	uint32_t p1,leftLen,rightLen;


	i = j = k =0;
	leftLen =rightLen =0;
	p1 = p;
	leftLen = (q-p)+1;
	do{
		left[i] = A[p];
		p++,i++;

	}while(i < leftLen);

	q = q+1; 
	rightLen = (r -q)+1;
	do{
		right[j] = A[q];
		q++,j++;
		
	}while(j < rightLen);

	p = p1;
	i = j = 0;
	for( k = p; k <= r; k++)
	{
		if(  left[i] < right[j])
		{
			A[k] = left[i];
			i++;
			if( i == leftLen)
			{
			   while(k < r)
			   {
				k++;
				A[k] = right[j]; 
				j++;
			   break;
			   }
			   
			}
		}
		else
		{
			A[k] = right[j];
			j++;
			if( j == rightLen)
			{
				while( k < r)
				{
				k++;	
				A[k] = left[i];
				i++;
				}
			break;

			}
		}
	}

}


void MergeSort(uint32_t *A, uint32_t p, uint32_t r)
{
	uint32_t q = 0;
	if( p < r)
	{
		q = (p+r)/2;
		MergeSort( A,p,q);
		MergeSort( A,q+1,r);
		Merge(A,p,q,r);
	}


}




void main()
{
	uint32_t array[8] = { 8,7,6,5,4,3,2,1};
	uint32_t p,r;


	p = 0; r = 7;
	MergeSort(array,p,r);
#if 0
	printf("\n");
	for( uint32_t i = 0; i < r; i++)
	printf("%d  ",array[i]);
#endif

}




