#include<stdio.h>
#include<stdlib.h>
#include <assert.h>
#include "slist.h"
void SListInit(SList* plist)
{
	plist->_head = NULL;

}//�����ʼ����ͷ��㸳�ɿգ�
void SListDestory(SList* plist)
{
	SListNode *tmp;//����ڵ�
	while (plist->_head)
	{
		tmp = plist->_head;//����������ͷ���ͷž�ͷ
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}
void SListPushFront(SList* plist, SLTDataType x)
{
	//����ͷѹ���õ�ָ������ͷ����ָ�룻
	SListNode *cur = (SListNode *)malloc(sizeof(SListNode));//�������㣨�ṹ�壩���ٿռ�
	cur->_data = x;//��ֵ
	cur->_next = plist->_head;//���������ָ��ָ��NULL
	plist->_head = cur;//������ʱ�ĵ�ַ���Ƹ�ͷָ�룬������ס
	//�����Ƚ���Ļ���ƣ��ͽ�ջһ�����Ƚ����
}
void SListPopFront(SList* plist)
{
	//ͷɾ
	SListNode *tmp;
	if (plist->_head)
	{

		tmp = plist->_head;
		plist->_head = plist->_head->_next;//ÿ������ĵ�һ��������ͷ��ͷ�����Ǻܶ��ָ��
		//nextָ�����ͷ���֮��Ľ�㣬���������cur��ֵ��ͷָ�룬���ı���ͷָ���ָ��
		free(tmp);//�ͷŵ���һ��cur
	}
}
SListNode* SListFind(SList* plist, SLTDataType x)
{
	SListNode* cur;//���ڶ��ڴ�Ĳ������õ�ʱ���Լ����٣���Ϊ���Ƕ���ָ��
	//������Ǹ��ṹ�壬��ʼ������ṹ��֮������һ��int�ͱ�����һ��ָ�룬ָ�����ָ����һ��
	//�飬����ʼ��������ʱ�������ָ��ָ��ָ���������λ��,���������������ֱ����ṹ��
	//����ָ�룬int��_nextָ��,
	for (cur = plist->_head; cur; cur = cur->_next)
//�������
	{
		if (cur->_data==x)
		{
			return cur;
		}
	}
}
void SListInsertAfter(SListNode* pos, SLTDataType x)
{
	//β��
	assert(pos);
	SListNode* cur = (SListNode*)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = pos->_next;
	pos->_next = cur;//һ��������������Ԫ�أ��ֱ������ݣ����Լ����͵�ָ�룬���������ָ��
}
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	SListNode* tmp = pos->_next;
	pos->_next = tmp->_next;
	free(tmp);
}

void SListPrint(SList* plist)
{
	assert(plist);

	SListNode* cur;
	for (cur=plist->_head;cur;cur=cur->_next)
	{
		printf("%d->", cur->_data);
	}
	printf("NULL\n");
}
int SListPopFrontJudge(SList* plist, SLTDataType x)
{
	if (plist->_head->_data == x)
	{
		SListNode *tmp;
		if (plist->_head)
		{

			tmp = plist->_head;
			plist->_head = plist->_head->_next;
			free(tmp);//�ͷŵ���һ��cur
			return 1;
		}
	}
	else
		return 0;
	
}
void SListRemove(SList* plist, SLTDataType x)
{
	//ɾ��x
	int receive = 0;
	receive=SListPopFrontJudge(plist, x);
	if (!receive)
	{
		SListNode* tmp = NULL;
		SListNode* before = plist->_head;
		SListNode* cur;
		cur = plist->_head->_next;
		for (; cur; cur = cur->_next, before = before->_next)
			//�������
		{
			if (cur->_data == x)
			{
				break;
			}
		}
		tmp = cur;
		before->_next = tmp->_next;
		free(tmp);
	}
	
}