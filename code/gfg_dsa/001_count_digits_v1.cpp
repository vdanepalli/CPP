// #include<iostream>
#include <bits/stdc++.h>

using namespace std;


int count_digits(long long);


int main()
{
    // Get the number;
    long long n;
    cin >> n;

    // Count digits;
    int res = count_digits(n);
    cout << "RESULT: " << res << endl;
    return 0;
}


int count_digits(long long n){
    if (n==0) return 1;
    int res = 0;

    while(n){
        n = n/10;
        res++;
    }

    return res;

}