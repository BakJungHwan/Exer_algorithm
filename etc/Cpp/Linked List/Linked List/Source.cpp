#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
	int data;
	Node* link;
} Node;

void appendNode(Node** Head, int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->link = NULL;

	Node* tempPoint = (*Head);
	if (tempPoint != NULL) {
		while (tempPoint->link != NULL) tempPoint = tempPoint->link;
		tempPoint->link = newNode;
	}else
	{
		*Head = newNode;
	}
}

void printNode(Node** Head)
{
	Node* tempPoint = (*Head);

	if (tempPoint == NULL) printf("List is empty\n");
	else if (tempPoint->link == NULL) printf("%d->NULL", tempPoint->data);
	else {
		while (tempPoint != NULL)
		{
			printf("%d->", tempPoint->data);
			tempPoint = tempPoint->link;
		}
		printf("NULL\n");
	}
}


Node* sequentialSearch(Node** Head, int findData)
{
	Node* tempPoint = (*Head);

	while (tempPoint != NULL)
	{
		if (findData == tempPoint->data) return tempPoint;
		tempPoint = tempPoint->link;
	}
	return NULL;
}


int main()
{
	Node* Head = NULL;
	Node* findNode = NULL;
	int findData = 0;

	appendNode(&Head, 33);
	appendNode(&Head, 128);
	appendNode(&Head, 64);
	appendNode(&Head, 72);
	appendNode(&Head, 53);

	while (1)
	{
		printf("Input the data you want to find");
		scanf("%d", &findData);

		findNode = sequentialSearch(&Head, findData);
		if (findNode != NULL) printf("The location of finded Node : %#x\n", findNode);
		else printf("Can't find Node");
	}
}
