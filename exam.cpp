#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

class Node
{
public:
    char value;
    Node *next;
};
void evaluate(string &my_string, Node **t, size_t n)
{
    for (size_t i = 0; i < my_string.size(); ++i)
    {
        if (my_string[i] >= 0 && my_string[i] <= 9)
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
        else if (my_string[i] == '*' || my_string[i] == '+' || my_string[i] == '/' || my_string[i] == '-' || my_string[i] == 'e' || my_string[i] == 's')
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
    }
}
int main()
{
}