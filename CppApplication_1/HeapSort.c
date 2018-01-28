/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include"HeapSort.h"


void printPLR(uint32_t *Array, uint32_t index, uint32_t heapSize)
{
    uint32_t l = left(index);
    uint32_t r = right(index);
   
    printf("\nHeapify for index:%d\n",index);
    
    printf("Parent:%d\n",Array[index]);
     if(l < heapSize)
    printf("Left  :%d\n",Array[l]);
     if(r < heapSize)
    printf("Right :%d\n",Array[r]);
    
}
#if 0

uint32_t heapExtractMax(uint32_t *A,uint32_t heapSize)
{
    uint32_t max;
    if( heapSize < 1)
        printf("Heap underflow\n");
    
    max = A[1];
    A[1] = A[heapSize-1];
    heapSize -= 1;
    maxHeapify(A,1);
    return max;
         
}
void heapMaximum(uint32_t *A)
{
    return A[1];
    
}


 void heapIncreaseKey(uint32_t *A,index,key)
 {
     if (key < A[index]  )
         printf("new key is smaller than current key");
     A[index] = key;
     
     
     
 }
#endif
void maxHeapify(uint32_t *Array, uint32_t index,uint32_t heapSize)
{
    uint32_t l,r,t,p,largest;
    
    p = index;
    r = right(index);
    l = left(index);
    
      if( (r  <= heapSize) && (l < heapSize))
    {
         
         if(r == heapSize )
         {
             largest = l;
         }
         else if(Array[r] > Array[l])
        {
             largest = r;
        }
         else
        {
             largest = l;
            
        }
   
      
         if( Array[p] < Array[largest])
         {
            t =  Array[p];
            Array[p] = Array[largest];
            Array[largest] = t;
            maxHeapify(Array,largest,heapSize);
         
         }
     
    }
    return;
}

#if 0
 void maxHeapify(uint32_t *Array,uint32_t index,uint32_t heapSize)
 {
     uint32_t temp,largest;
     uint32_t p,l,r;
     
     p = index; 
     r = right(index);
     l = left(index);
     
    // if(l > heapSize)
    //     return;
     if( (r  <= heapSize) && (l < heapSize))
    {
         
         if(r == heapSize )
         {
             largest = l;
         }
         else if(Array[r] > Array[l])
        {
             largest = r;
        }
         else
        {
             largest = l;
            
        }
         
         if( Array[p] < Array[largest])
         {
            temp =  Array[p];
            Array[p] = Array[largest];
            Array[largest] = temp;
         
         }
         
     }
  
    // printPLR(Array,index,heapSize);
   //  maxHeapify(Array,l,heapSize);
        
 }
#endif
  void buidMaxHeap(uint32_t *Array, uint32_t len)
  {
      int32_t i,j;
    
      for(i = len/2; i >= 0; i--)
      {
          maxHeapify(Array,i,len);  
      }
 
      
      

  }
  
  
  void printArray(uint32_t *Array, uint32_t len)
  {
      printf("\n");
      for(uint32_t i = 0; i < len; i++)
      {
          printf("%u ",Array[i]);
      }
      
  }
  
  
  void heapSort(uint32_t *Array, uint32_t len)
  {
      uint32_t temp;
     buidMaxHeap(Array,len);
      printArray(Array,len);
     
     for(int i = len-1; i >= 1; i--)
     {
         if(Array[i] < Array[0])
         {
         temp = Array[i];
        Array[i] = Array[0];
        Array[0]  = temp;
         }
        maxHeapify(Array,0,i);
             
     }    
      
      printArray(Array,len);     
  }
  