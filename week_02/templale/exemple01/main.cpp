#include <iostream>

using namespace std;

template <class T>       // T is generic type
T sum(const T data[], int size, T s = 0)
{
    for (int i = 0; i < size; i++)
    {
        s += data[i];
    }
    
    return(s);
}

template <class T>       // T is generic type
T subtract(const T data[], int size, T s = 0)
{
    for (int i = 0; i < size; i++)
    {
        s -= data[i];
    }
    
    return(s);
}

template <class T>

void printElements(const T data[], int size, int InitialPosition = 0)
{
    for (int i = InitialPosition; i < size; ++i)
    {
        cout << "Element " << i << "==" << data[i] << '\t';
    }
    
    cout << endl;
}

int main()
{
    int a[] = {1, 2, 3};
    double b[] = {2.1, 2.2, 2.3};

    cout << "Template for sum()" << endl;
    cout << sum(a, 3) << endl;
    cout << sum(b, 3) << endl;
    
    cout << "Template for subtract()" << endl;
    cout << subtract(a, 3) << endl;
    cout << subtract(b, 3) << endl;

    cout << "Template for printElement()" << endl;
    printElements(a, 3);
    printElements(a, 3, 1);
    printElements(b, 3);
    printElements(b, 3, 2);


}