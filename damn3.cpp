#include <iostream>
using namespace std;

class Queue
{
private:
    struct node
    {
        int value;
        node* next;

        node(int value, node* next = nullptr)
        {
            this->value = value;
            this->next = next;
        }
    };

    node* front, * back;

public:
    //Constructor
    Queue()
    {
        front = nullptr;
        back = nullptr;
    }

    //Class methods:
    void push(int num);
    int pop();
    bool isEmpty() { return (front == nullptr); }

    void print();
};

void Queue::print()
{
    node* tmp = this->front;
    cout << "[ ";
    while(tmp != nullptr) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << "]";
}

void Queue::push(int num)
{
    node* tmp = new node(num, nullptr);
    if(!isEmpty()) { // if not empty
        back->next = tmp;
        back = tmp;
        return;
    }

    // if list is empty
    front = tmp;
    back = tmp;
}

int Queue::pop()
{
    if (isEmpty()) return 0;
    int num = front->value;
    if (front->next == nullptr) { // if list have only one element
        delete front;
        front = nullptr;
        back = nullptr;
        return num;
    }
    node * temp = front;
    front = front->next;
    delete temp;
    return num;
}

int main() {

    Queue q;
    q.push(5);
    q.push(2);
    q.push(2);
    q.push(5);

    q.print();

    q.pop();
    q.print();

    q.pop();
    q.print();

    q.push(5);
    q.print();

    q.pop();
    q.print();

    q.pop();
    q.print();

    q.pop();
    q.print();

    q.pop();
    q.print();

    q.push(5);
    q.print();

    return 0;
}
