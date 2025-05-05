#include"mystack.h"

int main() {
    myStack<int> obj(5);
    int choice, val;

    do {
        cout << "1. Push"  <<  endl;
        cout << "2. Pop"  <<  endl;
        cout << "3. Top"  <<  endl;
        cout << "4. Display"  <<  endl;
        cout << "5. Exit"  <<  endl;
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
                obj.display(); 
                break;
            }

        }
    } while (choice != 5);

    return 0;
}
