#include"stack.h"

template <typename T>
class myStack : public Stack<T> {
private:
    T* arr;
    int maxSize;
    int topIndex;

public:
    myStack(int size = 100) {
        maxSize = size;
        arr = new T[maxSize];
        topIndex = -1;
    }

    myStack(const myStack<T>& other) {
        maxSize = other.maxSize;
        topIndex = other.topIndex;
        arr = new T[maxSize];
        for (int i = 0; i <= topIndex; ++i)
            arr[i] = other.arr[i];
    }

    ~myStack() {
        delete[] arr;
    }

    void push(T value) override {
        if (!isFull()) arr[++topIndex] = value;
        else cout << "Stack is full!\n";
    }

    T pop() override {
        if (!isEmpty()) return arr[topIndex--];
        cout << "Stack is empty!\n";
        return T();
    }

    T top() const override {
        if (!isEmpty()) return arr[topIndex];
        cout << "Stack is empty!\n";
        return T();
    }

    bool isEmpty() const override {
        return topIndex == -1;
    }

    bool isFull() const override {
        return topIndex == maxSize - 1;
    }

    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty"<<endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = topIndex; i >= 0; --i)
            cout << arr[i] << " ";
        cout << endl;
    }
};
