/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HeapSort.h
 * Author: ljayaram
 *
 * Created on 20 January, 2018, 7:26 PM
 */

#ifndef HEAPSORT_H
#define HEAPSORT_H
#include<stdint.h>
#include<stdio.h>
#ifdef __cplusplus
extern "C" {
#endif
    
#define left(i)  ((i<<1)+1)
#define right(i) ((i<<1) + 2)
  
    struct heapArray{
        uint32_t length;
        uint32_t heapSize;
        uint32_t *ptrArray;
    };

    void maxHeapify(uint32_t *Array,uint32_t index, uint32_t HeapSize);
    void buidMaxHeap(uint32_t *Array,uint32_t HeapSize);
    void printArray(uint32_t *Array, uint32_t len);
    void printPLR(uint32_t *Array, uint32_t index,uint32_t heapSize);
    void heapSort(uint32_t *Array, uint32_t len);
    void maxHeapInsert();
    void heapExtractMax();
    void heapIncreaseKey();
    uint32_t heapMaximum();


#ifdef __cplusplus
}
#endif

#endif /* HEAPSORT_H */

