#include <iostream>
using namespace std;

int main()
{
    // A buffer is a temporary storage area in memory used to hold data before it is processed.
    // In the case of output, the buffer stores data before displaying it on the screen.
    // This improves performance by reducing the number of interactions with the output device.

    // Difference between '\n' and 'endl':

    cout << "Ameer Mohammed." << endl; // 'endl' inserts a newline character AND flushes the buffer immediately.

    cout << "Ameer Mohammed.\n"; // '\n' only inserts a newline character but does NOT flush the buffer immediately.

    // Using '\n' is more efficient when printing many lines, as it avoids unnecessary buffer flushes.
    // However, using 'endl' occasionally can be useful to ensure the output is displayed immediately.

    return 0;
}
