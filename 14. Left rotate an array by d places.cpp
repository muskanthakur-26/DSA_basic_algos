// Function to leftRotate array multiple times
void leftRotate(int arr[], int n, int k)
{
    int mod = k % n;
    for (int i = 0; i < n; i++)
    cout << (arr[(mod + i) % n]) << " ";
    cout << "\n";
}
 