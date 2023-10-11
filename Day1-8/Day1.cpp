//BINARY SEARCH:
#include <iostream>
using namespace std;
int BinSea(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int evenindex = BinSea(even, 6, 4);
    cout << "The key 4 is found at:" << evenindex << endl;
    int odd[5] = {3, 5, 7, 9, 17};
    int oddindex = BinSea(odd, 5, 17);
    cout << "The key 17 is found at:" << oddindex << endl;
    return 0;
}