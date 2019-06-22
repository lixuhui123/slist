//#include<stdio.h>
//#include<stdlib.h>
//#include "seqList.h"
//#include <assert.h>
//
//void SeqListInit(SeqList* psl, size_t capacity)
//{
//	assert(psl);
//	psl->capicity = capacity;
//	psl->size = 0;
//	psl->array = (SLDataType *)malloc(sizeof(SLDataType)*capacity);
//	assert(psl->array);
//}
//void SeqListDestory(SeqList* psl)
//{
//	assert(psl);
//	if (psl->array)
//	{
//		free(psl->array);
//		psl->array = NULL;
//	}
//	psl->capicity = 0;
//	psl->size = 0;
//
//}
//
//void CheckCapacity(SeqList* psl)
//{
//	assert(psl);
//if (psl->size==psl->capicity)
//{
//	psl->capicity *= 2;
//	psl->array= (SLDataType *)realloc(psl->array,sizeof(SLDataType)*psl->capicity);
//}
//}
//void SeqListPushBack(SeqList* psl, SLDataType x)
//{
//	assert(psl);
//	CheckCapacity(psl);
//	psl->array[psl->size] = x;
//	psl->size++;
//}
//void SeqListPopBack(SeqList* psl)
//{
//	assert(psl || psl->size);
//	psl->size--;
//}
//void SeqListPushFront(SeqList* psl, SLDataType x)
//{
//	assert(psl);
//	CheckCapacity(psl);
//	int i = 0;
//	for (i=psl->size-1;i>=0;--i)
//	{
//		psl->array[i + 1] = psl->array[i];
//		
//	}
//	psl->array[0] = x;
//	psl->size++;
//}
//void SeqListPopFront(SeqList* psl)
//{
//	assert(psl);
//	psl->size--;
//	int i = 0;
//	for (i=0;i<psl->size;++i)
//	{
//		psl->array[i] = psl->array[i + 1];
//	}
//
//}
//int SeqListFind(SeqList* psl, SLDataType x)
//{
//	assert(psl);
//	int i = 0;
//	for (i = 0; i < psl->size; ++i)
//	{
//		 if (psl->array[i]==x)
//		 {
//			 return 1;
//		 }
//	}
//	return -1;
//}
//void SeqListBubbleSort(SeqList* psl)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i=0;i<psl->size;++i)
//	{
//		for (j=0;j<psl->size-i-1;j++)
//		{
//			if (psl->array[j]>psl->array[j+1])
//			{
//				tmp = psl->array[j];
//				psl->array[j] = psl->array[j + 1];
//				psl->array[j + 1] = tmp;
//			}
//		}
//	}
//}
//int SeqListBinaryFind(SeqList* psl, SLDataType x)
//{
//	int left = 0;
//	int right = psl->size - 1;
//	int mid;
//	while (left<right)
//	{
//		mid = (left + right) / 2;
//		if (psl->array[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (psl->array[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//		 
//	}
//	return 0;
//}
//void SeqListPrint(SeqList* psl)
//{
//	assert(psl);
//	int i = 0;
//	for (i=0;i<psl->size;++i)
//	{
//		printf("%d ", psl->array[i]);
//	}
//}
// 