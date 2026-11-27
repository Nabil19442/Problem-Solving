#include <iostream>
using namespace std;

int main()
{
    int start, first, second, third;

    while (1)
    {
        cin >> start >> first >> second >> third;
        if (start == 0 && first == 0 && second == 0 && third == 0)
        {
            break;
        }

        int total = 0;

        // Clockwise 2 full rotations
        total += 80;

        // Clockwise to the first number
        total += (start - first + 40) % 40;

        // Counterclockwise 1 full rotation
        total += 40;

        // Counterclockwise to the second number
        total += (second - first + 40) % 40;

        // Clockwise to the third number
        total += (second - third + 40) % 40;

        // Convert positions into degrees
        total *= 9;

        cout << total << endl;
    }

    return 0;
}