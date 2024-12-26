#include <bits/stdc++.h>
using namespace std;

int main() {

    // Everything is same as Set;
    // it can store duplicate elements also; and and in sorted Order also;

    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2); // {1, 1, 1, 2, 2};

    int ct = ms.count(1);

    ms.erase(ms.find(1)); // only a single one erased;

    ms.erase(1); // all 1's erased;

    // ms.erase(ms.find(1), ms.find(1)+2); // (Not working on my Laptop);

    // Rest all Functions same as Set;

    return 0;
}