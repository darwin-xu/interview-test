#include <vector>
#include <iostream>

using namespace std;

struct Node
{
    int number;
    Node* next;
};

Node* init_nodes(vector<int> numbers)
{
    Node* head = nullptr;
    Node* node = nullptr;
    for (vector<int>::iterator i = numbers.begin(); i != numbers.end(); i++)
    {
        if (node == nullptr)
        {
            node = new Node;
        }
        else
        {
            node->next = new Node;
            node = node->next;
        }

        if (head == nullptr)
        {
            head = node;
        }

        node->number = *i;
        node->next = nullptr;
    }
    return head;
}

void print_nodes(Node* head)
{
    while (head != nullptr)
    {
        cout << head->number << ' ';
        head = head->next;
    }
    cout << endl;
}

void inplace_reverse(Node* head, int from, int to)
{
    // Code begins here

    // Code ends here
}

int main()
{
    Node* nodes = init_nodes({3, 7, 8, 4, 5});
    print_nodes(nodes);
    inplace_reverse(nodes, 2, 4);
    print_nodes(nodes);

    return 0;
}
