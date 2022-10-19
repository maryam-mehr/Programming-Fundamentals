//WAP to print heart like pattern
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter a number greater than 5 to print heart" << endl;
    cin >> n;
        while(n <= 5)
        {
            cout << "ERROR! INVALID INPUT" << endl << "ENTER INPUT AGAIN" << endl;
            cin >> n;
        }
   
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n + 1; col++)
            if ((row == 0 && col % 3 != 0) || (row == 1 && col % 3 == 0) || (row - col == 2) || (row + col == 8))
            {
             cout << ("*");
            }
            else
            {
                cout << (" ");
            }

        cout << ("\n");

    }
  return 0;
}
