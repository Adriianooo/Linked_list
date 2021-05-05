//Adriano Pinheiro Fernandes TIA 32055161
#include "lista.h"


linkedlist* Create() {

	linkedlist* list = new linkedlist;
	list->count = 0;
	list->head = nullptr;
	list->tail = nullptr;

	return list;

}


void Insert(linkedlist* list, int elem)
{
	Node* node = new Node;
	node->data = elem;
	node->next = list->head;

	if (IsEmpty(list)) {
		list->tail = node;
	}
	list->head = node;
	++list->count;

}


void Append(linkedlist* list, int elem)
{

	Node* node = new Node;
	node->data = elem;
	node->next = nullptr;
	if (IsEmpty(list)) {
		list->head = list->tail = nullptr;
	}

	else {
		list->tail->next = node;
		list->tail = node;

	}
	++list->count;

	
}

bool IsEmpty(const linkedlist* list)
{
	if (list->count == 0) {
		return true;
	}
	else {
		return false;
	}
	 
}


Node* RemoveNode(linkedlist* list, int elem) 
{
	Node* toRemove = list->head;
	Node* previous = nullptr;

	while (toRemove != nullptr && toRemove->data != elem) {
		previous = toRemove;
		toRemove = toRemove->next;
	}
	if (toRemove == nullptr) {
		return nullptr;
	}
	else if (toRemove == list->head) {
		return RemoveHead(list);
	}
	else if (toRemove == list->tail) {
		return RemoveTail(list);
	}
	else {
		previous->next = toRemove->next;
		--list->count;
		return toRemove;
	}

}



Node* RemoveHead(linkedlist* list)
{
	Node* ToRemove = list->head;

	if (list->head == list->tail) {
		list->head = list->tail = nullptr;
	}

	else {
		list->head = list->head->next;
	}

	--list->count;
	return ToRemove;
}

Node* RemoveTail(linkedlist* list) 
{
	Node* ToRemove = list->head;
	Node* previous = nullptr;

	if (list->head == list->tail) {
		return RemoveHead(list);
	}

	while (ToRemove != list->tail) {
		previous = ToRemove;
		ToRemove = ToRemove->next;
	}

	previous->next = nullptr;

	list->tail = previous;
	--list->count;

	return ToRemove;

}

void Clear(linkedlist* list)
{
	Node* node = list->head;
	Node* next = nullptr;
	while (node != nullptr) {
		next = node->next;
		delete node;
		node = next;
		--list->count;
	}
	list->head = list->tail = nullptr;
}

void Destroy(linkedlist* list)
{
	Clear(list);
	delete list;
}

int Count(const linkedlist* list)
{
	return list->count;
}

Node* GetHead(const linkedlist* list)
{
	return list->head;
}

Node* GetTail(const linkedlist* list)
{
	return list->tail;
}

Node* GetNode(const linkedlist* list, int elem)
{
	Node* node = list->head;
	while (node != nullptr) {
		if (node->data == elem) {
			return node;
		}
		node = node->next;
	}

	return nullptr;
}

























