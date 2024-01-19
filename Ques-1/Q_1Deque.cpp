class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class Deque {
private:
    Node* front;
    Node* rear;

public:
    Deque() {
        front = nullptr;
        rear = nullptr;
    }

    void push_front(int num) {
        Node* new_node = new Node(num);
        if (!front) {
            front = rear = new_node;
        } else {
            new_node->next = front;
            front->prev = new_node;
            front = new_node;
        }
    }

    void pop_front() {
        if (front) {
            Node* temp = front;
            front = front->next;
            if (front) {
                front->prev = nullptr;
            } else {
                rear = nullptr;
            }
            delete temp;
        }
    }

    void push_back(int num) {
        Node* new_node = new Node(num);
        if (!rear) {
            front = rear = new_node;
        } else {
            new_node->prev = rear;
            rear->next = new_node;
            rear = new_node;
        }
    }

    void pop_back() {
        if (rear) {
            Node* temp = rear;
            rear = rear->prev;
            if (rear) {
                rear->next = nullptr;
            } else {
                front = nullptr;
            }
            delete temp;
        }
    }

    int front_() {
        return front ? front->data : -1;
    }

    int back() {
        return rear ? rear->data : -1;
    }

    void traverse() {
        Node* temp = front;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout <<endl;
    }
};

