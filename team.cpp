#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c, counter = 0; // n = number of problems, counter = solved problems
    cin >> n;

    while (n--) // process each problem
    {
        cin >> a >> b >> c; // opinions of three friends

        if (a + b + c >= 2) // at least two are sure
            counter++;
    }

    cout << counter << endl;
    return 0;
}