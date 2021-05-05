//Adriano Pinheiro Fernandes TIA 32055161
#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__


struct Node {
	int data;
	Node* next;

};

struct linkedlist {

	int count;
	Node* tail;
	Node* head;

};


linkedlist* Create();

void Insert(linkedlist* list, int elem);

bool IsEmpty(const linkedlist* list);

void Append(linkedlist* list, int elem);

void Clear(linkedlist* list);

void Destroy(linkedlist* list);

Node* RemoveNode(linkedlist* list, int elem);

Node* RemoveHead(linkedlist* list);

Node* RemoveTail(linkedlist* list);

int Count(const linkedlist* list);

Node* GetHead(const linkedlist* list);

Node* GetTail(const linkedlist* list);

Node* GetNode(const linkedlist* list, int elem);


#endif










