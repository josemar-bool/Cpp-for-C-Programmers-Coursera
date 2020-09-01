//  Convert this program to C++
//  change to C++ io
//  change to one line comments
//  change array to vector<>
//  inline any short functio

#include <iostream>

using namespace std;

const int N = 40;

inline void sum(int *p, int n, int d[]) { for (int i = 0; i < n; ++i) *p = *p + d[i]; }                                               \

int main()
{
    int i;
    int accum = 0;
    int data[N];

    for (i = 0; i < N; ++i)
    {
        data[i] = i;
    }

    sum(&accum, N, data);
    cout << "sum is " << accum << endl;

    return 0;


}

