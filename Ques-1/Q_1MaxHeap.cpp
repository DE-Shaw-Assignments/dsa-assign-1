class MaxHeap {
private:
    vector<int> heap;

    int parent(int index) { return (index - 1) / 2; }
    int left_child(int index) { return 2 * index + 1; }
    int right_child(int index) { return 2 * index + 2; }

    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void heapify_down(int index) {
        int left = left_child(index);
        int right = right_child(index);
        int largest = index;

        if (left < heap.size() && heap[left] > heap[largest])
            largest = left;

        if (right < heap.size() && heap[right] > heap[largest])
            largest = right;

        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapify_down(largest);
        }
    }

    void heapify_up(int index) {
        int parent_index = parent(index);

        while (index > 0 && heap[index] > heap[parent_index]) {
            swap(heap[index], heap[parent_index]);
            index = parent_index;
            parent_index = parent(index);
        }
    }

public:
    MaxHeap() {}

    void add(int num) {
        heap.push_back(num);
        heapify_up(heap.size() - 1);
    }

    int remove_max() {
        if (heap.empty()) {
            cerr << "Heap is empty. Cannot remove maximum.\n";
            return -1; 
        }

        int max_value = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapify_down(0);

        return max_value;
    }

    int max() {
        if (heap.empty()) {
            cerr << "Heap is empty. No maximum element.\n";
            return -1;
        }

        return heap[0];
    }
};

