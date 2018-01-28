#include<stdio.h>

void insertionSort(uint32_t *array, uint32_t n)
{
        uint32_t temp;
        uint32_t key;
        for( uint32_t j = 1 ; j < n; j++){
                key = array[j];
		int32_t i = j-1;
                while( i >= 0 ) {

			if(key <array[i]){
                        temp = array[i];
                        array[i] = key;
                        array[i+1] = temp;
			i--;

                        }
                }
	}


}


void myprint(uint32_t *array, uint32_t n)
{

        for( uint32_t i = 0 ; i < n ; i++){
                printf("%u  ", array[i]);
        }
}


void main()
{

uint32_t array[5] = { 5,4,3,2,1};
uint32_t n = 5;

	insertionSort(array,n);
	myprint(array,n);

}
