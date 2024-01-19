struct Node
{
    int val;
    Node *next;
    Node *prev;
    
    Node(int x) {
        val = x;
        next = nullptr;
        prev = nullptr;
    }
};

class FrontMiddleBackQueue
{
public:
    int count;
    Node *head;
    Node *mid;
    Node *tail;

    FrontMiddleBackQueue() {
        count = 0;
        head = nullptr;
        mid = nullptr;
        tail = nullptr;
    }

    void pushFront(int value)
    {
        Node *newNode = new Node(value);
        if (count == 0) {
            head = tail = mid = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            if (count & 1) {
                mid = mid->prev;
            }
        }
        count++;
    }

    void pushMiddle(int value)
    {
        Node *newNode = new Node(value);
        if (count == 0) {
            head = tail = mid = newNode;
        } else if (count == 1) {
            newNode->next = mid;
            mid->prev = newNode;
            mid = head = newNode;
        } else {
            if (count & 1) {
                newNode->next = mid;
                newNode->prev = mid->prev;
                mid->prev->next = newNode;
                mid->prev = newNode;
                mid = newNode;
            } else {
                newNode->next = mid->next;
                newNode->prev = mid;
                mid->next = newNode;
                newNode->next->prev = newNode;
                mid = newNode;
            }
        }
        count++;
    }

    void pushBack(int value)
    {
        Node *newNode = new Node(value);
        if (count == 0) {
            head = tail = mid = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            if (!(count & 1)) {
                mid = mid->next;
            }
        }
        count++;
    }

    int popFront()
    {
        if (!count) {
            return -1;
        }
        int v = head->val;
        if (count == 1) {
            tail = head = mid = nullptr;
        } else {
            if (!(count & 1)) {
                mid = mid->next;
            }
            head = head->next;
            head->prev = nullptr;
        }
        count--;
        return v;
    }

    int popMiddle()
    {
        if (!count) {
            return -1;
        }
        int v = mid->val;

        if (count == 1) {
            tail = head = mid = nullptr;
        } else if (count == 2) {
            tail = head = mid = head->next;
        } else {
            mid->next->prev = mid->prev;
            mid->prev->next = mid->next;
            if (count & 1) {
                mid = mid->prev;
            } else {
                mid = mid->next;
            }
        }
        count--;
        return v;
    }

    int popBack()
    {
        if (!count) {
            return -1;
        }
        int v = tail->val;
        if (count == 1) {
            tail = head = mid = nullptr;
        } else {
            if (count & 1) {
                mid = mid->prev;
            }
            tail = tail->prev;
            tail->next = nullptr;
        }
        count--;
        return v;
    }
};
