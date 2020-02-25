//#include<stdio.h>
//#include<stdlib.h>
//#include <assert.h>
//#include "slist.h"
//void SListInit(SList* plist)
//{
//	plist->_head = NULL;
//
//}//链表初始化，头结点赋成空；
//void SListDestory(SList* plist)
//{
//	SListNode *tmp;//链表节点
//	while (plist->_head)
//	{
//		tmp = plist->_head;//不断任命新头，释放旧头
//		plist->_head = plist->_head->_next;
//		free(tmp);
//	}
//}
//void SListPushFront(SList* plist, SLTDataType x)
//{
//	//链表头压，得到指向链表头结点的指针；
//	SListNode *cur = (SListNode *)malloc(sizeof(SListNode));//给链表结点（结构体）开辟空间
//	cur->_data = x;//赋值
//	cur->_next = plist->_head;//将这个结点的指针指向NULL
//	plist->_head = cur;//将结点此时的地址复制个头指针，让它记住
//	//所以先进入的会后移，和进栈一样，先进后出
//}
//void SListPopFront(SList* plist)
//{
//	//头删
//	SListNode *tmp;
//	if (plist->_head)
//	{
//		tmp = plist->_head;
//		plist->_head = plist->_head->_next;//每个链表的第一个是它的头，头可以是很多的指针
//		//next指向的是头结点之后的结点，将这个结点的cur赋值给头指针，即改变了头指针的指向，
//		free(tmp);//释放掉第一个cur
//	}
//}
//SListNode* SListFind(SList* plist, SLTDataType x)
//{
//	SListNode* cur;//基于堆内存的操作，用的时候自己开辟，因为他们都是指针
//	//这个块是个结构体，初始化这个结构体之后，它有一个int型变量和一个指针，指针可以指向下一个
//	//块，而初始化这个块的时候定义的是指针指向，指针就是他的位置,所以它有三个是手柄，结构体
//	//变量指针，int，_next指针,
//	for (cur = plist->_head; cur; cur = cur->_next)
////链表遍历
//	{
//		if (cur->_data==x)
//		{
//			return cur;
//		}
//	}
//	return 0;
//}
//void SListInsertAfter(SListNode* pos, SLTDataType x)
//{
//	//尾插
//	assert(pos);
//	SListNode* cur = (SListNode*)malloc(sizeof(SListNode));
//	cur->_data = x;
//	cur->_next = pos->_next;
//	pos->_next = cur;//一个链表结点有三个元素，分别是数据，他自己类型的指针，和他自身的指针
//}
//void SListEraseAfter(SListNode* pos)
//{
//	assert(pos);
//	SListNode* tmp = pos->_next;
//	pos->_next = tmp->_next;
//	free(tmp);
//}
//
//void SListPrint(SList* plist)
//{
//	assert(plist);
//
//	SListNode* cur;
//	for (cur=plist->_head;cur;cur=cur->_next)
//	{
//		printf("%d->", cur->_data);
//	}
//	printf("NULL\n");
//}
//int SListPopFrontJudge(SList* plist, SLTDataType x)
//{
//	if (plist->_head->_data == x)
//	{
//		SListNode *tmp;
//		if (plist->_head)
//		{
//
//			tmp = plist->_head;
//			plist->_head = plist->_head->_next;
//			free(tmp);//释放掉第一个cur
//			return 1;
//		}
//	}
//	else
//	{
//		return 0;
//	}
//	return 0;
//	
//}
//void SListRemove(SList* plist, SLTDataType x)
//{
//	//删除x
//	int receive = 0;
//	receive=SListPopFrontJudge(plist, x);
//	if (!receive)
//	{
//		SListNode* tmp = NULL;
//		SListNode* before = plist->_head;
//		SListNode* cur;
//		cur = plist->_head->_next;
//		for (; cur; cur = cur->_next, before = before->_next)
//			//链表遍历
//		{
//			if (cur->_data == x)
//			{
//				break;
//			}
//		}
//		tmp = cur;
//		before->_next = tmp->_next;
//		free(tmp);
//	}
//	
//}
//#if 0
//
//void SListreverse(SList* plist)
//{
//	static SList reve;
//	SListInit(&reve);
//	SListNode* cur;
//	for (cur = plist->_head; cur; cur = cur->_next)
//	{
//		SListPushFront(&reve, cur->_data);
//
//	}
//	SListPrint(&reve);
//}
//#endif
//#if 1
//void SListreverse(SList* plist)
//{
//
//	SListNode* tmp = plist->_head->_next;
//	SListNode* cur = plist->_head;
//	while (tmp)
//	{
//		cur->_next = tmp->_next;
//		tmp->_next = plist->_head;
//		plist->_head = tmp;
//		tmp = cur->_next;
//
//	}
//	//深度理解空循环的用法，不要局限于它的固定的形式
//}
//
//void reverse(SList* plist)
//{
//
//	SListNode * tmp = plist->_head->_next;
//	SListNode * cur = plist->_head;
//
//	while (tmp)
//	{
//		cur->_next = tmp->_next;
//		tmp->_next = plist->_head;
//		plist->_head = tmp;
//		tmp = cur->_next;
//
//	}
//}
//
//#endif
////判断链表是否有环，两个指针一个一次遍历一个，另一个跳着遍历
////SListNode * get(SList *ListA, SList *ListB)
////{
////	int lenA = 0;
////	int lenB = 0;
////	for(cur=ListA;)
////}
//int SListHasCycle(SList * plist)
//{
//	SListNode* fast = plist->_head;
//	SListNode* slow = plist->_head;
//	while (slow && fast && fast->_next)
//	{
//		fast = fast->_next->_next;
//		slow = slow->_next;
//		if (slow == fast)
//		{
//			return 1;
//		}
//
//	}
//	return 0;
//}
//SListNode* SListHasCycle1(SList * plist)
//{
////判断是不是带环链表
//	SListNode* fast = plist->_head;
//	SListNode* slow = plist->_head;
//	while (slow && fast && fast->_next)
//	{
//		fast = fast->_next->_next;
//		slow = slow->_next;
//		if (slow == fast)
//		{
//			return slow;
//		}
//	}
//	return NULL;
//}
//SListNode* Find(SList* plist)
//{
//	//寻找链表的入环点
//	SListNode* tmp= SListHasCycle1(plist);
//	SListNode *cur = plist->_head;
//	for (; cur; cur = cur->_next, tmp = tmp->_next)
//	{
//		if (cur == tmp)
//		{
//			return cur;
//		}
//	}
//	return NULL;
//}
//void SListMakeCycle(SList* plist)
//{
//	plist->_head->_next->_next->_next->_next->_next = plist->_head->_next->_next->_next;
//}