#include <iostream>
using namespace std;

int function(int* ptr); // Pass By Refenrence Using Pointers;

int main() {

    int a = 10;
    int* ptr1 = &a; // Address Of variable 'a';

    cout << "ptr1 = " << ptr1 << endl << "&a = " << &a << endl;

    int** pptr1 = &ptr1; // Pointer To Pointer;

    cout << "pptr1 = " << pptr1 << endl << "&ptr1 = " << &ptr1 << endl;

    cout << "a = " << a << endl;
    cout << "*(&a) = " << *(&a) << endl;
    cout << "*ptr1 = " << *ptr1 << endl;

    cout << "*(&ptr1) = " << *(&ptr1) << endl;
    cout << "*pptr1 = " << *pptr1 << endl;
    cout << "**pptr1 = " << **pptr1 << endl;

    int* ptr2 = NULL; // NULL Pointer;

    cout << "ptr2 (NULL) = " << ptr2 << endl;

    int b = 10;
    cout << "b Before Function call : " << b << endl;
    function(&b);
    cout << "b After Function Call : " << b << endl;

    // Array Pointers;
    int arr[] = {1, 2, 3, 4, 5};
    // arr == &arr[0]; // Constant Pointer;
    cout << "arr = " << arr << endl;
    cout << "*arr = " << *arr << endl;

    // Pointer Arithmatic;
    int c = 10;
    int* ptr3 = &c;

    cout << "ptr3 = " << ptr3 << endl;
    ptr3++;
    cout << "ptr3 after ptr3++ = " << ptr3 << endl;
    ptr3 += 2;
    cout << "ptr3 after ptr3 += 2 = " << ptr3 << endl;
    ptr3--;
    cout << "ptr3 after ptr3-- = " << ptr3 << endl;
    
    int d = 1, e = 2;
    int* ptr4= &d;
    int* ptr5 = &e;

    cout << "ptr4 = " << ptr4 << endl;
    cout << "ptrr5 = " << ptr5 << endl;
    cout << "ptr4 > ptr5 = " << (ptr4 > ptr5) << endl; // We can Compare it;
    cout << "ptr4 - ptr5 = " << (ptr4 - ptr5) << endl; // We can Substract it;
    // We Can't Add Two Pointers;

    return 0;
}

int function(int* ptr) {
    *ptr *= 2;
    return *ptr;
}