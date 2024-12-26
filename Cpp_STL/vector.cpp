#include <bits/stdc++.h>
// #include <vector>
using namespace std;

int main() {
    
    vector<int> v;

    cout << "initial Cap. = " << v.capacity() << endl; 

    v.push_back(1);
    cout << "Cap. after 1pb = " << v.capacity() << endl;

    v.push_back(2);
    cout << "Cap. after 2pb = " << v.capacity() << endl;

    v.push_back(3);
    cout << "Cap. after 3pb = " << v.capacity() << endl; // Cap. Doubled;
    cout << "Size after 3pb = " << v.size() << endl;

    cout << "Ele. at 2nd idx = " << v.at(2) << endl;

    cout << "First(Front) Ele. = " << v.front() << endl;
    cout << "Last(Back) Ele. = " << v.back() << endl << endl;

    for(auto i : v) cout << i << ' ';
    v.pop_back();
    cout << endl << "pop_back..." << endl;
    for(auto i : v) cout << i << ' ';
    cout << endl << endl;

    cout << "Cap. = " << v.capacity() << endl;
    cout << "Size = " << v.size() << endl;
    v.clear();
    cout << "clear..." << endl;
    cout << "Cap. = " << v.capacity() << endl; // Cap. remains same.
    cout << "Size = " << v.size() << endl << endl;

    vector<int> vec(5, 1);
    cout << "vec : ";
    for(auto i : vec) cout << i << ' ';
    cout << endl;

    vector<int> last(vec);
    cout << "last (copy of vec) : ";
    for(auto i : last) cout << i << ' ';
    cout << endl << endl;

    vector<int> v1;

    v1.push_back(1);
    v1.emplace_back(3); // Faster Than push_back
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(7);

    vector<pair<int, int>> vp;

    vp.push_back({1, 3});
    vp.emplace_back(5, 7);

    vector<int> v2(5, 0); // {0, 0, 0, 0, 0}
    vector<int> v3(v2); // copy of v2;

    vector<int>::iterator it1 = v1.begin();
    cout << "it = " << *(it1) << endl;
    it1++;
    cout << "After it++, it = " << *(it1) << endl;

    cout << endl << "v1 = ";
    for(vector<int>::iterator i=v1.begin(); i != v1.end(); i++) {
        cout << *(i) << ' ';
    } cout << endl;

    // We can write "auto" insted of "vector<int>::iterator" ;
    // for(auto i=v1.begin(); i!=v1.end(); i++) { cout << *(i) << ' '; }
    // for(auto i : v1) { cout << i << ' '; }

    v1.erase(v1.begin()+1); // Delete idx 1;
    v1.erase(v1.begin()+1, v1.begin()+3); // Delete 1 and 2 idx;

    vector<int> v4(5, 10);
    v4.insert(v.begin()+1, 20); // It will insert 20 at 1 idx;
    v4.insert(v4.begin()+2, 3, 40); // It will insert 40 at 2, 3 and 4 idx (3 times);

    vector<int> v5(3, 30);
    v4.insert(v4.begin(), v5.begin(), v5.end()); // at Starting of V4, whole V5 will Inserted;

    v4.swap(v5); // It will Swap; V4 will Become V5 and vise versa;

    v5.clear(); // Deleted Everything from v5;

    cout << v5.empty() << endl; // It return Boolean Type; if(vector Empty) it will return 1; else 0;

    return 0;
}