#include <bits/stdc++.h>
using namespace std;

void simple_sort(vector<int>& arr) {
    int n = arr.size();

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for(int i=0; i<n-1; i++) {
        int minIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
    }
}

void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for(int i=0; i<n-1; i++) {
        bool flag = true;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j+1] < arr[j]) {
                swap(arr[j], arr[j+1]);
                flag = false;
            }
        }
        if(flag) {
            break;
        }
    }
}

void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for(int i=1; i<n; i++) {
        int key = arr[i];
        int j;
        for(j=i-1; j>=0 && arr[j] > key; j--) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
}

void insertion_sort(vector<int>& arr) {
    int n = arr.size();

    for(int i=0; i<n; i++) {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

void merge(vector<int>& arr, int start, int end);
void mergeSort(vector<int>& arr, int start, int end) {
    if(start >= end) {
        return;
    }

    int mid = start + (end - start)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);

    merge(arr, start, end);
}

int partition(vector<int>& arr, int start, int end);
void quickSort(vector<int>& arr, int start, int end) {
    if(start >= end) {
        return;
    }

    int pIdx = partition(arr, start, end);

    quickSort(arr, start, pIdx-1);
    quickSort(arr, pIdx+1, end);
}

int main() {

    vector<int> arr = {3, 2, 5, 4, 7};
    int n = arr.size();

    // simple_sort(arr);
    // selectionSort(arr);
    // bubbleSort(arr);
    // insertionSort(arr);
    // insertion_sort(arr);
    // mergeSort(arr, 0, n-1);
    quickSort(arr, 0, n-1);

    for(auto i : arr) {
        cout << i << ' ';
    } cout << endl;

    return 0;
}

void merge(vector<int>& arr, int start, int end) {
    int mid = start + (end - start)/2;

    vector<int> a;

    int s = start;
    int e = mid + 1;

    while(s <= mid && e <= end) {
        if(arr[s] < arr[e]) {
            a.push_back(arr[s++]);
        } else{
            a.push_back(arr[e++]);
        }
    }
    while(s <= mid) {
        a.push_back(arr[s++]);
    }
    while(e <= end) {
        a.push_back(arr[e++]);
    }

    for(int i=start; i<=end; i++) {
        arr[i] = a[i-start];
    }
}

int partition(vector<int>& arr, int start, int end) {
    int pivot = arr[start];
    int s = start;
    int e = end;

    while(s < e) {
        while(arr[s] <= pivot && s <= end-1) {
            s++;
        }
        while(arr[e] > pivot && e >= start+1) {
            e--;
        }

        if(s < e) {
            swap(arr[s], arr[e]);
        }
    }
    swap(arr[start], arr[e]);

    return e;
}
