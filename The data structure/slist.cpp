//#include<stdio.h>
//#include<stdlib.h>
//#include <assert.h>
//#include "slist.h"
//void SListInit(SList* plist)
//{
//	plist->_head = NULL;
//
//}//�����ʼ����ͷ��㸳�ɿգ�
//void SListDestory(SList* plist)
//{
//	SListNode *tmp;//����ڵ�
//	while (plist->_head)
//	{
//		tmp = plist->_head;//����������ͷ���ͷž�ͷ
//		plist->_head = plist->_head->_next;
//		free(tmp);
//	}
//}
//void SListPushFront(SList* plist, SLTDataType x)
//{
//	//����ͷѹ���õ�ָ������ͷ����ָ�룻
//	SListNode *cur = (SListNode *)malloc(sizeof(SListNode));//�������㣨�ṹ�壩���ٿռ�
//	cur->_data = x;//��ֵ
//	cur->_next = plist->_head;//���������ָ��ָ��NULL
//	plist->_head = cur;//������ʱ�ĵ�ַ���Ƹ�ͷָ�룬������ס
//	//�����Ƚ���Ļ���ƣ��ͽ�ջһ�����Ƚ����
//}
//void SListPopFront(SList* plist)
//{
//	//ͷɾ
//	SListNode *tmp;
//	if (plist->_head)
//	{
//		tmp = plist->_head;
//		plist->_head = plist->_head->_next;//ÿ������ĵ�һ��������ͷ��ͷ�����Ǻܶ��ָ��
//		//nextָ�����ͷ���֮��Ľ�㣬���������cur��ֵ��ͷָ�룬���ı���ͷָ���ָ��
//		free(tmp);//�ͷŵ���һ��cur
//	}
//}
//SListNode* SListFind(SList* plist, SLTDataType x)
//{
//	SListNode* cur;//���ڶ��ڴ�Ĳ������õ�ʱ���Լ����٣���Ϊ���Ƕ���ָ��
//	//������Ǹ��ṹ�壬��ʼ������ṹ��֮������һ��int�ͱ�����һ��ָ�룬ָ�����ָ����һ��
//	//�飬����ʼ��������ʱ�������ָ��ָ��ָ���������λ��,���������������ֱ����ṹ��
//	//����ָ�룬int��_nextָ��,
//	for (cur = plist->_head; cur; cur = cur->_next)
////�������
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
//	//β��
//	assert(pos);
//	SListNode* cur = (SListNode*)malloc(sizeof(SListNode));
//	cur->_data = x;
//	cur->_next = pos->_next;
//	pos->_next = cur;//һ��������������Ԫ�أ��ֱ������ݣ����Լ����͵�ָ�룬���������ָ��
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
//			free(tmp);//�ͷŵ���һ��cur
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
//	//ɾ��x
//	int receive = 0;
//	receive=SListPopFrontJudge(plist, x);
//	if (!receive)
//	{
//		SListNode* tmp = NULL;
//		SListNode* before = plist->_head;
//		SListNode* cur;
//		cur = plist->_head->_next;
//		for (; cur; cur = cur->_next, before = before->_next)
//			//�������
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
//	//�������ѭ�����÷�����Ҫ���������Ĺ̶�����ʽ
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
////�ж������Ƿ��л�������ָ��һ��һ�α���һ������һ�����ű���
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
////�ж��ǲ��Ǵ�������
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
//	//Ѱ��������뻷��
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