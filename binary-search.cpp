#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int item) {
    int low = 0, high = n -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == item)
            return mid;
        else if (arr[mid] < item)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -(low + 1);
}

int main() {
    int arr[100], n, item, pos;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the target number: ";
    cin >> item;

    pos = binarySearch(arr, n, item);

    if(pos >= 0) {
        for (int i = pos; i < n; i++)
            arr[i] = arr[i+1];
        n--;
        cout << "Item " << item << " found and deleted.\n";
    } else {
        pos = -(pos + 1);
        for (int i = n; i > pos; i--)
            arr[i] = arr[i-1];
        arr[pos] = item;
        n++;
        cout << 'Item ' << item << " not found, hence inserted in the position " << pos << endl;
    }

    cout << "Updated array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}