//Adriano Pinheiro Fernandes TIA 32055161
#include <iostream>
#include <clocale>
#include <locale.h>
#include "lista.h"


using namespace std;


void Print(const linkedlist* list)
{
	Node* n;
	n = list->head;
	while (n != nullptr) {
		cout << n->data << " ";
		n = n->next;
	}
}

void PrintListInfo(const linkedlist* list)
{
	if (IsEmpty(list))
	{
		cout << "\nLista vazia!\n";
	}
	else
	{
		cout << "lista: ";
		Print(list);
	}
}

int main()
{
	setlocale(LC_ALL, "");
	cout << "*** Lista Ligada/Encadeada (Linked List) ***\n";
	linkedlist* list = Create();
	PrintListInfo(list);
	Insert(list, 1);
	Insert(list, 2);
	Insert(list, 3);
	Append(list, 4);
	Append(list, 5);
	Append(list, 6);
	PrintListInfo(list);

	Clear(list);
	PrintListInfo(list);
	Insert(list, 77);
	Append(list, 88);
	Insert(list, 99);
	Append(list, 3);
	Insert(list, 2);
	Append(list, 1);
	Insert(list, 0);
	PrintListInfo(list);

	Node* temp = RemoveNode(list, 3);
	cout << "\nNó removido: " << temp->data << '\n';
	
	PrintListInfo(list);
	temp = RemoveHead(list);
	cout << "\nNó removido: " << temp->data << '\n';
	
	
	PrintListInfo(list);
	temp = RemoveTail(list);
	cout << "\nNó removido: " << temp->data << '\n';
	
	
	PrintListInfo(list);
	
	cout << "\nFim.\n";

	
	return 0;

}