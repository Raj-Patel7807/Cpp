#include <bits/stdc++.h>
using namespace std;

class hero {
    private :
        int health; // We can't excess in main(); so we can use it with getter and setter;

    public :

        // If we don't make this Constructure, then class hero create it defaultly and that is a empty Constructure;
        hero() {
            cout << "new Object Created..!!!" << endl;
        }

        // Parameterised Constructure;
        hero(int health) {
            cout << "new Object Created Using Parameterised Constructure.." << endl;
            this->health = health; // this keyword stored the address of the current object; this == Pointer to current Object;
        }

        hero(int health, char level) {
            cout << "nnew Object Created Using Parameterised Constructure.." << endl;
            this->health = health;
            this->level = level;
        }

        // Copy Constructure;
        // Pass by Reference is Mandatory and very Important;
        // Otherwise it will act like Infinite Loop..
        // (like make copy of argument(pass by value) -> call copy constructure -> make copy -> call copy constructure -> ....... infinite);
        hero(hero& t) { 
            cout << "new Object Created Using Copy Constructure.." << endl;
            this->health = t.health;
            this->level = t.level;
        }

        char level; // We can excess in main(); so we can use it directly or with getter and setter;
        string name;

        // Getter;
        int getHealth() {
            return health;
        }
        // Setter;
        void setHealth(int h) {
            health = h;
        }

        void print() {
            cout << "[ Name: " << name << ", ";
            cout << "Health: " << health << ", ";
            cout << "Level: " << level << " ]" << endl << endl;
        }

        // Destructure; if we don't make it then class will automatically make it..;
        // Only fo Static Allocation;
        ~hero() {
            cout << "Object Deleted & Memory Released..!!" << endl;
        }

        // For Dynamic Allocation, We have to call Destructure manually;
};

int main() {

    hero raj;
    raj.name = "Raj";
    raj.setHealth(100);
    raj.level = 'A';

    raj.print();

    // Static Allocation; Object Creation;
    hero a(60);
    a.name = "a";

    cout << "Name : " << a.name << endl;
    cout << "Initial Health of a : " << a.getHealth() << endl;

    a.level = 'A'; // We can use getter and setter also; 
    a.setHealth(70);

    cout << "Level of a: " << a.level << endl;
    cout << "Health of a : " << a.getHealth() << endl << endl;
    
    // Dynamic Allocation; Object Creation;
    hero *b = new hero(50);
    b->name = "b";

    cout << "Name : " << b->name << endl;
    cout << "Initial Health of b : " << b->getHealth() << endl;

    (*b).level = 'B';
    (*b).setHealth(60); // We can use b->setHealth(60); insted of (*b).setHealth(60);

    cout << "Level of b : " << (*b).level << endl;
    cout << "Health of b : " << (*b).getHealth() << endl << endl; // We can also use b->getHealth();

    hero c(95, 'B');
    c.name = 'c';

    c.print();

    // it Uses Copy Constructure; Automatically Generated;
    // Default Copy constructure uses Shallow Copy; so, if you change c then d will also change;
    // For Deep Copy, We have to use Constructure which is made by us;
    hero d(c); // Copy c to d;
    // hero d = c; // also True for copy;
    d.name = 'd';

    d.print();

    delete b; // Manually Call to Destructure for Dynamic allocation;

    return 0;
}