#include<stdio.h>
#include<stdint.h>
//#include "./array_100000.h"
//#include "./array_10000.h"



int BinarySearch (int a[], int low, int high, int key)
{
    int mid;

    if (low == high)
        return low;

    mid = low + ((high - low) / 2);
    printf("LOW :%d MID:%d HIGH:%d\n",low,mid,high);

    if (key > a[mid])
        return BinarySearch (a, mid + 1, high, key);
    else if (key < a[mid])
        return BinarySearch (a, low, mid, key);

    return mid;
}



void
BinaryInsertionSort (int a[], int n)
{
    int ins, i, j;
    int tmp;

    for (i = 1; i < n; i++) {
	printf("Key:%d  Position:%d \n",a[i],ins);
        ins = BinarySearch (a, 0, i, a[i]);
	
        tmp = a[i];
        for (j = i - 1; j >= ins; j--)
            a[j + 1] = a[j];
        a[ins] = tmp;
    }
}

void insertion_sort(uint32_t *arr,uint32_t n)
{
uint32_t i,j;
uint32_t swap;
uint32_t iter = 0;
uint32_t swamp_count =0;

	for( i = 0; i < n; i++)
	{
	for(j = 1; j < n ; j++)
	{
		if( arr[j] < arr[j-1])
		{
			swap = arr[j];	
			arr[j] = arr[j-1];
			arr[j-1] = swap;
//		swamp_count++;
		
		}
//		iter++;
		

	}
//	iter++;
	}

printf("No of itertions i.e T(n) it took to sort:%d\n",iter);
printf("No of swamps    i.e T(n) it took to sort:%d\n",swamp_count);

}	


void main()
{

//uint32_t ua[10] = {9,8,7,6,5,4,3,2,1,0};
//uint32_t ua[10] = {9,1,2,3,4,5,6,7,8,0};
uint32_t ua[10] = { 7,5,3,1,6,4,2,8,9,0};
uint32_t sa[10];
uint32_t nelements, i;

	nelements = sizeof(ua)/sizeof(int);
	//nelements = sizeof(array)/sizeof(int);
	printf("N elements in array = %d\n",nelements);

	//insertion_sort(array,nelements);
        BinaryInsertionSort(ua,nelements);
	#if 0
	printf("Before insertion sort\n");
	for( i = 0; i < nelements;i++)
	printf("  %d  ",ua[i]);
	printf("\n");
	insertion_sort(ua,nelements);

	printf("After insertion sort\n");
        for( i = 0; i < nelements;i++)
        printf("%d  ",ua[i]);

	printf("\n");
	#endif


	
	#if 0
        printf("Before binary insertion sort\n");
        for( i = 0; i < nelements;i++)
        printf("  %d  ",ua[i]);
        printf("\n");
        BinaryInsertionSort(ua,nelements);

        printf("After binary insertion sort\n");
        for( i = 0; i < nelements;i++)
        printf("%d  ",ua[i]);

        printf("\n");
        #endif



}
