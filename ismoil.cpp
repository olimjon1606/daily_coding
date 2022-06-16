// [Forwarded from ISMOIL]
#include <iostream>
using namespace std;

int queue[100], n = 100, front = -1, rear = -1;

void Insert(int val)
{
    if (rear == n - 1)
        cout << "Queue Overflow" << endl;
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = val;
    }
}

void Delete()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow ";
        return;
    }
    else
    {
        cout << "Element deleted from queue is : " << queue[front] << endl;
        front++;
        ;
    }
}

void Rotate(int length)
{
    if (length <= 0)
    {
        return;
    }
    length %= rear - front + 1;
    for (int i = front; i < length; i++)
    {
        int temp = queue[i];
        queue[i] = queue[rear - length + i + 1];
        queue[rear - length + i + 1] = temp;
    }
}

void Shake()
{
    int length = rear - front;
    for (int i = front; i <= length; i++)
    {
        int x = queue[front];
        Delete();
        if (rear - front >= 0)
        {
            Rotate(x);
        }
    }
}