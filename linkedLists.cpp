#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node* next;
};

int linkToLinkedList(Node** head, int value)
{
    Node* newNode = new Node();
    while(*head->next != NULL)
    {
        **head = *head->next;
    }
    it->next = newNode;
    newNode->next = NULL;
    return 1;
}

void printList(Node* head)
{
    Node* it = head;
    while(it->next != NULL)
    {
        cout << it->value << endl;
        it = it->next;
    }

}

int main()
{
    Node* a = new Node();
    Node* b = new Node();
    Node* c = new Node();

    a->value = 33;
    b->value = 44;
    c->value = 55;

    a->next = b;
    b->next = c;
    c->next = NULL;
    linkToLinkedList(a, 66);
    linkToLinkedList(a,77);
    printList(a);
}