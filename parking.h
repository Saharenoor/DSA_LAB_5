#include "mystack.h"
#include <string>

class ParkingLot {
    myStack<string> lot;
    const int capacity = 8;
public:
    ParkingLot() : lot(capacity) 
    {

    }

    void parkCar(const string& car)
    {
        if (!lot.isFull()) 
        {
            lot.push(car);
            cout << car << " parked."<<endl;
        } else 
        {
            cout << "Parking lot full!"<<endl;
        } 
     
    }

    void removeCar(const string& car) 
    {
        myStack<string> temp(capacity);
        bool found = false;
        while (!lot.isEmpty()) {
            if (lot.top() == car) 
            {
                lot.pop();
                found = true;
                break;
            } 
            else 
            {
                temp.push(lot.pop());
            }
        }
        while (!temp.isEmpty())
            lot.push(temp.pop());
        cout << (found ? "Car removed." : "Car not found.");
    }

    void searchCar(const string& car) 
    {
        myStack<string> temp(capacity);
        bool found = false;
        while (!lot.isEmpty()) 
        {
            if (lot.top() == car) found = true;
            temp.push(lot.pop());
        }
        while (!temp.isEmpty())
            lot.push(temp.pop());
        cout << (found ? "Car is present." : "Car not found.");
    }

    void display() 
    {
        cout << "Cars in lot: ";
        lot.display();
    }
};
