#include "mystack.h"

template <typename T>
class minStack : public myStack<T> 
{
    myStack<T> minValues;

public:
    minStack(int size = 10) : myStack<T>(size), minValues(size)
    {

    }

    void push(T value) override
    {
        if (this->isFull()) 
        {
            cout << "Stack is full"<< endl ; 
            return;
        }
        myStack<T>::push(value);
        if (minValues.isEmpty() || value <= minValues.top())
            minValues.push(value);
    }

    T pop() override 
    {
        T val = myStack<T>::pop();
        if (!minValues.isEmpty() && val == minValues.top())
        {  
            minValues.pop();
        }
         
        return val;
    }

    T getMin() const 
    {
        return minValues.isEmpty() ? T() : minValues.top();
    }
};
