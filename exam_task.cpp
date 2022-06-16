#include <iostream>
#include <vector>
#include <string>
// #include "vector.h"

using namespace std;
template <typename T>
struct Stack
{
public:
    T mem[100];
    int elements;
    Stack() : elements(0) {}
    ~Stack();
    void push(T n);
};
template <typename T>
void closest_smaller(vector<int> n)
{

    Stack s;
    s.push("None, ");
    for (int i = 1; i < 10; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (n[i] > n[j])
            {
                s.push(n[j]);
                break;
            }
        }
    }
    for (int i = 1; i < elements; i++)
    {
        cout << s.mem[i];
    }
}

int main()
{
    // Stack s;
    vector<int> as({1, 2, 3, 4, 5, 5, 5, 4, 5, 5});
    closest_smaller(as);
}
template <typename T>
void Stack<T>::push(T n)
{
    mem[elements++] = n;
}