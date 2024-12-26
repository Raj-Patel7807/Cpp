#include <bits/stdc++.h>
// #include <array>
using namespace std;

int main() {
    
    int arr[3] = {1, 2, 3};

    array<int, 3> a = {1, 2, 3};

    int size = a.size();
    for(int i=0; i<size; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;

    cout << "Ele. at 2nd index : " << a.at(2) << endl; // O(1);

    cout << "isEmpty : " << a.empty() << endl; // O(1);

    cout << "First(Front) Ele. : " << a.front() << endl; // O(1);

    cout << "Last(Back) Ele. : " << a.back() << endl; // O(1);

    return 0;
}