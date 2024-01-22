/*
* Name:
* Question: Given an array of integers, implement a max-heap data structure and perform a heap sort.
*/

#include <iostream>
#include <vector>
#include <algorithm>

void heapify(std::vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        // Fill

    if (right < n && arr[right] > arr[largest])
        // Fill

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        // Fill
    }
}

void buildHeap(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; --i) {
        // Fill
    }
}

void heapSort(std::vector<int>& arr) {
    // Fill

    for (int i = arr.size() - 1; i > 0; --i) {
        std::swap(arr[0], arr[i]);
        // Fill
    }
}
