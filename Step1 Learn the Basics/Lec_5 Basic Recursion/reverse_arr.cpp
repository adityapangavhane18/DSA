#include <iostream>
#include <algorithm>  // For std::swap

void f(int i, int arr[], int n) {
    if (i >= n / 2) return;
    std::swap(arr[i], arr[n - i - 1]);
    f(i + 1, arr, n);
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    f(0, arr, n);
    for (int i = 0; i < n; i++) std::cout << arr[i] << " ";
    return 0;
}
