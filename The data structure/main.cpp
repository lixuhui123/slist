//#include<stdio.h>
//#include<stdlib.h>
//#include "seqList.h"
//int main()
//{
//	SeqList test;
//	SeqListInit(&test, 10);
//    system("pause");
//    return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "slist.h"
/*
for(cur=head;cur;cur=cur->next)

{
cur;
}
for(cur=head->next;cur!=head;cur=cur->next)
{
//双向链表把next改成per就倒着遍历
cur;
}
for(cur=head;cur;cur=cur->next)

{
cur;
}
*/
void listtest()
{
	SList test;
	SListInit(&test);
	SListPushFront(&test, 10);
	SListPushFront(&test, 0);
	SListPushFront(&test, 1);
	SListPushFront(&test, 2);
	SListPushFront(&test, 3);
	SListPushFront(&test, 4);
	SListPushFront(&test, 5);
	SListPushFront(&test, 6);
	SListNode* cur = SListFind(&test, 2);
	SListInsertAfter(cur, 20);
	SListEraseAfter(cur);
	SListPrint(&test);
	SListRemove(&test, 4);

	SListPrint(&test);
	SListreverse(&test);
	//SListPrint(&test);
}
int main()
{
	listtest();
	 
	system("pause");
	return 0;
}