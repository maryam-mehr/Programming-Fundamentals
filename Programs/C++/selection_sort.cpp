#include<iostream>

using namespace std;


int SelectionSort(int arr[], int n)
{
    int small, i, j;
    for (i = 0; i < n - 1; i++)
    {
        small = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;

                int temp = arr[small];
                arr[small] = arr[i];
                arr[i] = temp;
            }
        }
    }
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << endl;
        }
        return i;
}


int main()
{
    int n;
    cout<<"Enter Number of Elements in array:";
    cin>>n;

    int arr[n];
    cout<<"\nEnter "<<n<<" Elements in array:-"<<endl;

    for(int i=0;i<n;i++){
        cout<<"\nEnter Element "<<i+1<<":";
        cin>>arr[i];
    }

    cout<<"\nBefore Sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    cout<<"\nAfter Sorting:"<<endl;
    SelectionSort(arr, n);

    return 0;
}
