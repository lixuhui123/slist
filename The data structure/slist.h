#pragma once
#ifndef _SLIST_H
#define _SLIST_H
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType _data;
	struct SListNode* _next;
}SListNode;//����ڵ㣬���������еĵ����飬������һ��Ҫ�洢�ı�������һ��ָ�룬����_data
//��ֵ��ʱ����Ҫ��̬���ٸ��ڴ棬�������ʹ�õ��Ƕѿռ�
typedef struct SList
{
	SListNode* _head;
}SList;//������������ʼ�� SList test;plist=&test;������¼ͷ��㣻
 
void SListInit(SList* plist);
void SListDestory(SList* plist);
//SListNode* BuySListNode(SLTDataType x);
void SListPushFront(SList* plist, SLTDataType x);
void SListPopFront(SList* plist);
SListNode* SListFind(SList* plist, SLTDataType x);
// ��pos�ĺ�����в���
void SListInsertAfter(SListNode* pos, SLTDataType x);
// ��pos��ǰ����в���
void SListEraseAfter(SListNode* pos);
void SListRemove(SList* plist, SLTDataType x);
int SListPopFrontJudge(SList* plist, SLTDataType x);
void SListPrint(SList* plist);
void SListreverse(SList* plist);
//void TestSList();
#endif _SLIST_H