#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> vec = {1, 2, 3, 4, 5};
    int target = 3;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            cout << target << " at " << i << endl;
            break;
        }
    }

    return 0;
}