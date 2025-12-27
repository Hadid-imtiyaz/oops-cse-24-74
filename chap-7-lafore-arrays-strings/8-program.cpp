
#include <iostream>
#include <cmath>

using namespace std;

class Array
{
private:
    static const int MAX_SIZE = 100;

    int array[MAX_SIZE];

public:
    void put(int i, int n)
    {
        if (i > 0 && i < MAX_SIZE)
        {
            array[i] = n;
        }
        else
        {
            cout << endl
                 << "Incompatible index!" << endl;
        }
    }

    int get(int i) const
    {
        if (i > 0 && i < MAX_SIZE)
        {
            return array[i];
        }
        else
        {
            cout << endl
                 << "Incompatible index!" << endl;
            return 0;
        }
    }
};

int main()
{
    Array arr;
    arr.put(10, 123);
    cout << "Value at index 10: " << arr.get(10) << endl;
    arr.put(100, 999); // Should print error
    return 0;
}
