/// Recreate the multiplication table task, allowing the user to rerun the program again after it prints the multiplication table.

#include <iostream>

using namespace std;

int main()
{
    char ans;
    do 
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= n; ++j) {
                if (i == 0 && j == 0)
                    cout << '\t';
                else if (i == 0)
                    cout << j << '\t';
                else if (j == 0)
                    cout << i << '\t';
                else
                    cout << i * j % m << '\t';
            }
            cout << '\n';
        }
        
        cout << "Do you want to rerun the program? y-yes, n-no: ";
        cin >> ans;
    } while (ans != 'n');
    return 0;
}
