/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ljayaram
 *
 * Created on 20 January, 2018, 7:23 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include"HeapSort.h"
/*
 * 
 */
int main(int argc, char** argv) {
    
   // uint32_t A[10] = {5,3,17,10,84,19,6,22,9,1};
    uint32_t B[6] = {1,2,3,4,5,6};
    uint32_t A[10] ={4,1,3,2,16,9,10,14,8,7};
    uint32_t len = sizeof(A)/sizeof(uint32_t);
    
 //   buidMaxHeap(A,len);
   printArray(A,len);
    
   heapSort(A, len);
  //  printArray(B,len);
    

    return (EXIT_SUCCESS);
}

