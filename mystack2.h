#include <iostream>
#include <string>
using namespace std;

template <typename T>
class MyStack2 
{
    T* arr;
    int topIndex;
    int capacity;

public:
    MyStack2(int size = 100) {
        capacity = size;
        arr = new T[capacity];
        topIndex = -1;
    }

    void push(T val) {
        if (topIndex < capacity - 1) {
            arr[++topIndex] = val;
        }
    }

    void pop() {
        if (topIndex >= 0) {
            --topIndex;
        }
    }

    T top() const {
        if (topIndex >= 0)
            return arr[topIndex];
        else
            return T(); // return space
    }

    bool isEmpty() const {
        return topIndex == -1;
    }

    void clear() {
        topIndex = -1;
    }

    ~MyStack2() {
        delete[] arr;
    }
};