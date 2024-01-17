class Node {
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert_at_start(int num) {
        Node* new_node = new Node(num);
        new_node->next = head;
        head = new_node;
    }

    void remove_from_start() {
        if (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void insert_at_end(int num) {
        Node* new_node = new Node(num);
        if (!head) {
            head = new_node;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    void remove_from_end() {
        if (head) {
            if (!head->next) {
                delete head;
                head = nullptr;
            } else {
                Node* temp = head;
                while (temp->next->next) {
                    temp = temp->next;
                }
                delete temp->next;
                temp->next = nullptr;
            }
        }
    }
    // Assuming -1 as an indicator of an empty list
    int front() {
        return head ? head->data : -1;
    }

    int last() {
        if (!head) {
            return -1; 
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            return temp->data;
        }
    }

    void traverse() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
