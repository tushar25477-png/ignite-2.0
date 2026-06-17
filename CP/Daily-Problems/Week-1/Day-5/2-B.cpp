class myQueue {
    int *arr;
    int capacity,size;

  public:
    myQueue(int n) {
        capacity = n;
        arr = new int[capacity];
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
         return size == capacity;
    }

    void enqueue(int x) {
        arr[size] = x;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            return;
        }
        for (int i = 1; i < size; i++) {
            arr[i - 1] = arr[i];
        }
        size--;
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return arr[0];
    }

    int getRear() {
         if (isEmpty()) {
            return -1;
        }
        return arr[size - 1];
    }
};
