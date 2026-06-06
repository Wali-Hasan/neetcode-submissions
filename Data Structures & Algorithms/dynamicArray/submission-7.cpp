class DynamicArray {
public:
    int size = 0;
    int* arr = nullptr;
    int capacity;

    DynamicArray(int capacity) {
        this->capacity = capacity; 
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (size >= capacity) {
            resize();
        }
        arr[size] = n;
        ++size;
    } 

    int popback() {
        --size;
        return arr[size];
    }

    void resize() {
        capacity = capacity*2;
        int* arrCopy = new int[capacity];
        for (int i = 0; i < size; i++) {
            arrCopy[i] = arr[i];

        }
        delete[] arr;
        arr = arrCopy;
    }

    int getSize() {
        return size; 
    }

    int getCapacity() {
        return capacity; 
    }
};
