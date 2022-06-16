#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

void insertFront(Node **t, int n)
{
    Node *newNode = new Node();
    newNode->value = n;
    newNode->next = *t;
    *t = newNode;
}

void insertEnd(Node **t, int n)
{
    Node *newNode = new Node();
    newNode->value = n;
    newNode->next = NULL;

    if (*t == NULL)
    {
        *t = newNode;
        return;
    }
    Node *last = *t;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
}

void insertAfter(Node *prev, int n)
{
    Node *newNode = new Node();
    newNode->value = n;
    newNode->next = prev->next;
    prev->next = newNode;
}

void print(Node *t)
{
    while (t != NULL)
    {
        cout << t->value << endl;
        t = t->next;
    }
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->value = 1;
    head->next = second;
    second->value = 2;
    second->next = third;
    third->value = 3;
    third->next = NULL;

    insertAfter(second, -2);
    insertAfter(third, -3);
    insertFront(&head, 0);
    insertEnd(&head, 4);
    print(head);
}
