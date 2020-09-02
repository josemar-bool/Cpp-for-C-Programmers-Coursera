#include <iostream>

using namespace std;

template <class T1, class T2>
void myCopy(const T1 source[], T2 destination[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        destination[i] = static_cast<T2>(source[i]);
        // destination[i] = source[i];
    }
}

int main(void)
{
    int a[] = {1, 2, 3};
    int b[] = {0, 0, 0};

    cout << "Printing: b[0] == " << b[0] << " ,b[1] == " << b[1] << " ,b[2] == " << b[2] << endl;
    myCopy(a, b, 3);
    cout << "Printing: b[0] == " << b[0] << " ,b[1] == " << b[1] << " ,b[2] == " << b[2] << endl; 

    return(0);
}