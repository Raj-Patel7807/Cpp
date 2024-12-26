#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec1; // size = 0;
    vector<int> vec2 = {1, 2, 3}; // size = 3;
    vector<int> vec3 (3, 0); // size = 3;
    vector<char> vec4 = {'a', 'b', 'c', 'd'};

    cout << "vec2[1] = " << vec2[1] << endl;
    cout << "vec3[1] = " << vec3[1] << endl;

    cout << "vec2 = ";
    for(int i : vec2) { // for each loop; print whole vector;
        cout << i << " ";
    }
    cout << endl;

    cout << "vec4 = ";
    for(char i : vec4) { // for each loop;
        cout << i << " ";
    }
    cout << endl;

    cout << "vec2.size() = " << vec2.size() << endl;
    cout << "vec1.size() = " << vec1.size() << endl;

    vec1.push_back(1); // 1 will be added;
    cout << "After push_back, vec1.size() = " << vec1.size() << endl;
    vec1.push_back(2);
    vec1.push_back(3);
    vec1.push_back(4);
    cout << "After push_back, vec1.size() = " << vec1.size() << endl;
    
    cout << "vec1 = ";
    for(int i : vec1) {
        cout << i << " ";
    }
    cout << endl;

    vec1.pop_back(); // 4 will be deleted;
    cout << "After pop_back vec1.size() = " << vec1.size() << endl;
    cout << "vec1 = ";
    for(int i : vec1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "vec1.front() = " << vec1.front() << endl; // 1;
    cout << "vec1.back() = " << vec1.back() << endl; // 3;

    cout << "vec1.at(1) = " << vec1.at(1) << endl; // value at 1 index; like vec1[1];

    vector<int> vec5;
    
    cout << "vec5.size() = " << vec5.size() << endl; // 0;
    vec5.push_back(1);
    cout << "vec5.size() = " << vec5.size() << endl; // 1;
    cout << "vec5.capacity() = " << vec5.capacity() << endl; // 1;
    vec5.push_back(2);
    cout << "vec5.size() = " << vec5.size() << endl; // 2;
    cout << "vec5.capacity() = " << vec5.capacity() << endl; // 2;
    vec5.push_back(3);
    cout << "vec5.size() = " << vec5.size() << endl; // 3;
    cout << "vec5.capacity() = " << vec5.capacity() << endl; // 4;
    vec5.push_back(4);
    cout << "vec5.size() = " << vec5.size() << endl;
    cout << "vec5.capacity() = " << vec5.capacity() << endl;
    vec5.push_back(5);
    cout << "vec5.size() = " << vec5.size() << endl;
    cout << "vec5.capacity() = " << vec5.capacity() << endl;

    return 0;
}