
class Dequeue {
private:
    LinkedList list;
    Node* rear;

public:
    Dequeue() {}

    void push_back(int num) {
        list.insert_at_end(num);
        rear
    }

    void push_front(int num) {
        list.insert_at_start(num);
    }

    void pop_back() {
        list.remove_from_end();
    }

    void pop_front() {
        list.remove_from_start();
    }

    int front() {
        return list.front();
    }

    int back() {
        return list.last();
    }

    void display() {
        list.traverse();
    }
};
