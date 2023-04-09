#include <iostream>
using namespace std;
int add(int arr[], int size)
{
    // bc
    if (size == 0)
        return 0;
    if(size == 1)
        return arr[0];

    // rc
    int remainingPart = add(arr+1, size-1);     //->This part is rc

    //processing
    int sum = arr[0] + remainingPart;           
    return sum;
}
int main()
{
    int arr[5] = {3, 2, 5, 1, 6};
    int size = 5;
    int ans = add(arr, size);
    cout << "Sum: " << ans << endl;
}