#include <iostream>
#include "minStack.h"
#include "parking.h"
using namespace std;

int main() 
{
    minStack<int> obj(5);
    ParkingLot p;
    int choice, val;
    string car;

    do {
        cout << "1. Push"  <<  endl;
        cout << "2. Pop"  <<  endl;
        cout << "3. Top"  <<  endl;
        cout << "4. IsEmpty"  <<  endl;
        cout << "5. IsFull"  <<  endl;
        cout << "6. Display"  <<  endl;
        cout << "7. Minimum"  <<  endl;
        cout << "8. Park Car"  <<  endl;
        cout << "9. Remove Car"  <<  endl;
        cout << "10. Search Car"  <<  endl;
        cout << "11. View Car"  <<  endl;
        cout << "12. Exit"  <<  endl;
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
                cout << (obj.isEmpty() ? "Yes" : "No"); 
                break;
            }
            case 5: 
            {
                cout << (obj.isFull() ? "Yes" : "No"); 
                break;
            }
            case 6: 
            {
                obj.display(); 
                break;
            }
            case 7: 
            {
                cout << "Min: " << obj.getMin() << endl; 
                break;
            } 
            case 8:
            {
                cout << "Car #: "; cin >> car; p.parkCar(car);
                break;
            } 
            case 9:
            { 
                cout << "Remove Car #: "; cin >> car; p.removeCar(car); 
                break;
            }
            case 10:
            { 
                cout << "Search Car #: "; cin >> car; p.searchCar(car); 
                break;
            }
            case 11:
            {
                p.display(); 
                break;
            }  
        }
    } while (choice != 12);
}
