#include"mystack.h"

int main() {
    myStack<int> obj(5);
    int choice, val;

    do {
        cout << "1. Push"  <<  endl;
        cout << "2. Pop"  <<  endl;
        cout << "3. Top"  <<  endl;
        cout << "4. IsEmpty"  <<  endl;
        cout << "5. IsFull"  <<  endl;
        cout << "6. Display"  <<  endl;
        cout << "7. Exit"  <<  endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                cout << "Enter value: "; 
                cin >> val; 
                obj.push(val); 
                break;
            }
            case 2: 
            {
                cout << "Popped: " << obj.pop() << endl;
                break;
            }
            case 3:
            {
                cout << "Top: " << obj.top() << endl;
                break;
            } 
            case 4: 
            {
                cout << (obj.isEmpty() ? "Yes\n" : "No\n"); 
                break;
            }
            case 5: 
            {
                cout << (obj.isFull() ? "Yes\n" : "No\n"); 
                break;
            }
            case 6: 
            {
                obj.display(); 
                break;
            }

        }
    } while (choice != 7);

    return 0;
}
