#include <iostream>
#include <string>
#include <vector>

using namespace std;

// void evaluate(string data)
// {
//     // int counter = 0;
// for (size_t i = 0; i < data.size(); ++i)
// {
//     if (isdigit(data[i]) == 0)
//     {
//         continue;
//     }
//     else
//     {
//         counter++;
//     }
// }

struct Stack
{
    char number[10];
    vector<char> character;

    void separ(string data)
    {
        int j = 0;
        for (int i = 0; i < data.length(); i++)
        {
            if (isdigit(data[i]) == false)
            {
                if (data[i] == '*' || data[i] == '+' || data[i] == '/' || data[i] == '-' || data[i] == 'e' || data[i] == 's')
                {
                    character.push_back(data[i]);
                    cout << data[i] << "^^^\n";
                }
                else if (data[i] == ' ')
                {
                    continue;
                }
            }
            else
            {
                number[j] = data[i];
                cout << data[i] << "^^^\n";
                ++j;
            }
        }
    }

    void print()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << number[i] << endl;
        }
    }
    void print2()
    {
        for (int i = 0; i < character.size(); i++)
        {
            cout << character[i] << endl;
        }
    }
};

int main()
{
    Stack s;
    s.separ("1 4 * - + 6 * & +");
    s.print();
    s.print2();
}