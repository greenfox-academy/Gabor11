#include <iostream>
#include <stdexcept>

using namespace std;

/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a paramter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter
 *  Negative numbers are invalid parameters.
 *  It should throw an exception
 */

int get_fibonacci_number(int N)
{
    if (N < 1)
        throw runtime_error("Parameter out of range.");
    else if (N == 1)
        return 0;
    else if (N == 2)
        return 1;
    else if (N == 3)
        return 1;
    else
        return get_fibonacci_number(N - 1) + get_fibonacci_number(N - 2);
}

int main() {
    try {
        cout << get_fibonacci_number(-1);
    }
    catch (runtime_error &err){
        cout << err.what();
    }




	return 0;
}
