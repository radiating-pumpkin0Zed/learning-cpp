#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insert(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    cout << value << " inserted into the list.\n";
}

void deleteNode(Node *&head, int value)
{
    if (head == nullptr)
    {
        cout << "List is empty. Nothing to delete.\n";
        return;
    }

    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << value << " deleted from the list.\n";
        return;
    }

    Node *current = head;
    while (current->next != nullptr && current->next->data != value)
    {
        current = current->next;
    }

    if (current->next == nullptr)
    {
        cout << value << " not found in the list.\n";
    }
    else
    {
        Node *temp = current->next;
        current->next = temp->next;
        delete temp;
        cout << value << " deleted from the list.\n";
    }
}

void display(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty.\n";
        return;
    }
    Node *temp = head;
    cout << "Linked List: ";
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{
    Node *head = nullptr;
    int choice, value;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            insert(head, value);
            break;
        case 2:
            cout << "Enter value to delete: ";
            cin >> value;
            deleteNode(head, value);
            break;
        case 3:
            display(head);
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
