class Deque {
private:
    LinkedList list;

public:
    void push_front(int num) {
        list.insert_at_start(num);
    }

    void pop_front() {
        list.remove_from_start();
    }

    void push_back(int num) {
        list.insert_at_end(num);
    }

    void pop_back() {
        list.remove_from_end();
    }

    int front() {
        return list.front();
    }

    int back() {
        return list.last();
    }

    void traverse() {
        list.traverse();
    }
};
