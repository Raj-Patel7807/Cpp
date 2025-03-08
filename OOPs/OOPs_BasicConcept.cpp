#include <bits/stdc++.h>
using namespace std;

// **Encapsulation & Abstraction**: Wrapping data and methods into a class
class Car {
    private:
        string brand;
        int speed;

    public:
        // **Constructor** (Initialization)
        Car(string brand, int speed) {
            this->brand = brand;
            this->speed = speed;
        }

        // **Getter and Setter** methods (Encapsulation)
        string getBrand() {
            return brand;
        }

        void setSpeed(int s) {
            if (s >= 0) speed = s;
            else cout << "Speed can't be negative!" << endl;
        }

        int getSpeed() {
            return speed;
        }

        // **Method to display car details**
        void display() {
            cout << "Car Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
        }
};

// **Inheritance**: `SportsCar` inherits from `Car`
class SportsCar : public Car {
    private:
        int turboSpeed;

    public:
        // **Constructor using Base Class Constructor**
        SportsCar(string brand, int speed, int turboSpeed) : Car(brand, speed) {
            this->turboSpeed = turboSpeed;
        }

        // **Polymorphism (Method Overriding)**
        void display() {
            cout << "Sports Car - Brand: " << getBrand() << ", Speed: " << getSpeed() 
                << " km/h, Turbo Boost: " << turboSpeed << " km/h" << endl;
        }
};

// **Polymorphism (Method Overloading)**
class Calculator {
    public:
        int add(int a, int b) {
            return a + b;
        }

        double add(double a, double b) {
            return a + b;
        }
};

int main() {
    
    // **Encapsulation & Abstraction**
    Car myCar("Toyota", 120);
    myCar.display();
    myCar.setSpeed(150);
    cout << "Updated Speed: " << myCar.getSpeed() << " km/h" << endl;

    // **Inheritance & Polymorphism**
    SportsCar mySportsCar("Ferrari", 200, 50);
    mySportsCar.display();

    // **Method Overloading (Compile-time Polymorphism)**
    Calculator calc;
    cout << "Sum (int): " << calc.add(5, 10) << endl;
    cout << "Sum (double): " << calc.add(5.5, 10.3) << endl;

    return 0;
}
