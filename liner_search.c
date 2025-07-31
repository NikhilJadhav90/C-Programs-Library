#include <stdio.h>
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++)
        if (arr[i] == target) return i;
    return -1;
}
int main() {
    int arr[] = {3, 7, 4, 2, 1};
    int target = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = linearSearch(arr, n, target);
    if (result != -1) printf("Found at index %d", result);
    else printf("Not found");
    return 0;
}