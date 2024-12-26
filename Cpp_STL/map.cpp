#include <bits/stdc++.h>
// #include <map>
using namespace std;

int main() {

    map<int, string> m;

    m[1] = "Raj"; // 1 is a Key and "Raj" is a Value; // Keys are Unique;
    m[5] = "Patel";
    m[2] = "Om";
    m.insert({7, "RajPatel"}); // O(logn);

    cout << "m : " << endl; // Always in Sorted order;
    for(auto i : m) cout << i.first << ' ' << i.second << endl;

    cout << "m.count(7) = " << m.count(7) << endl; // O(logn);
    cout << "m.count(4) = " << m.count(4) << endl << endl;

    m.erase(5); // O(logn);
    cout << "m.erase(5)..." << endl;
    for(auto i : m) cout << i.first << ' ' << i.second << endl;
    cout << endl;

    auto it = m.find(2);
    cout << "*it = " << (*it).first << ' ' << (*it).second << endl;
    cout << "it-> = " << it->first << ' ' << it->second << endl;

    // In Map, Elements are Always in Sorted Order (By Key);
    // Swap, Erase, lower_bound, upper_bound, empty, find are same as above;
    
    // But, In unordered_map, Order Doesn't Matter;
    
    // Pair Is like Map, but in map, there are one or more than one pair, And in Pair, there is only one pair..;

    // MultiMap;
    // Everything same as map, only it can store multiple keys;
    // only map[key] cannot be used here; 

    return 0;
}