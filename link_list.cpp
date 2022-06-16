#include <iostream>
using namespace std;

class Node
{
public:
    int Value;
    Node *Next;
};

void printList(Node *t)
{
    while (t != NULL)
    {
        cout << t->Value << endl;
        t = t->Next;
    }
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;
    printList(head);

    return 0;
}