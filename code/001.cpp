// #include<bits/stdc++.h>
#include<iostream> // cin cout ... 
#include <string> // getline

using namespace std;

int main() {
    // 9, 12, 18, 
    // int, long, long long, float, double
    // string and getline
    // char

    // char                 1 byte                 127 to 127 or 0 to 255                           3
    // unsigned char        1 byte                  0 to 255                                        3
    // signed char          1 byte                 -127 to 127                                      3

    // int                  4 bytes                2147483648 to 2147483647                         10-1
    // unsigned int         4 bytes                0 to 4294967296                                  10-1
    // signed int           4 bytes                2147483648 to 2147483647
    
    // short int            2 bytes                -32768 to 32767                                  5-1
    // unsigned short int   2 bytes                0 to 65535                                       5-1
    // signed short int     2 bytes                -32768 to 32767                                  5-1

    // long int             8 bytes                9223372036854775808 to 9223372036854775807       19-1
    // signed long int      8 bytes                9223372036854775808 to 9223372036854775807       19-1
    // unsigned long int    8 bytes                0 to 18446744073709551615                        20-1

    // long long int        8 bytes
    // unsigned ll int      8 bytes
    // signed ll int        8 bytes

    // float                4 bytes
    // double               8 bytes~~~
    // long double          12 bytes
    // wchar_t              2 or 4 bytes           1 wide character

    
    int x, y;
    cin >> x >> y;
    cout << "Value of x: " << x << " and y: " << y << endl;

    int x1 = 10; // can only store 4 bytes of data. -(2^32) to (2^32) - 1
    long x2 = 15; 
    long long x3 = 20;

    // string -- double quotes and getline
    string s;
    getline(cin, s);

    cout << "Value of s: " << s << endl;

    string t;
    cin >> t;
    cout << "Value of t: " << t << endl;

    // char -- single quotes
    char ch;
    cin >> ch;
    cout << "Value of ch: " << ch << endl;

}