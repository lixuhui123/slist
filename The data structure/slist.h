#pragma once
#ifndef _SLIST_H
#define _SLIST_H
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType _data;
	struct SListNode* _next;
}SListNode;//链表节点，这是链表当中的单个块，包含了一个要存储的变量，和一个指针，当给_data
//赋值的时候需要动态开辟个内存，因此链表使用的是堆空间
typedef struct SList
{
	SListNode* _head;
}SList;//链表，用它来初始化 SList test;plist=&test;用来记录头结点；
 
void SListInit(SList* plist);
void SListDestory(SList* plist);
//SListNode* BuySListNode(SLTDataType x);
void SListPushFront(SList* plist, SLTDataType x);
void SListPopFront(SList* plist);
SListNode* SListFind(SList* plist, SLTDataType x);
// 在pos的后面进行插入
void SListInsertAfter(SListNode* pos, SLTDataType x);
// 在pos的前面进行插入
void SListEraseAfter(SListNode* pos);
void SListRemove(SList* plist, SLTDataType x);
int SListPopFrontJudge(SList* plist, SLTDataType x);
void SListPrint(SList* plist);
void SListreverse(SList* plist);
//void TestSList();
#endif _SLIST_H