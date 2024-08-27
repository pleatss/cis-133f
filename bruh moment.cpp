#include iostream
#include <vector>
using namespace std 

bool all_pos(vector<int> data){
    for(int num : data) {
        if(num <= 0)    {
            return false;
        }
    }
};


void ordered_array::insert_multiple(int x, int n)
{
    void insert_multiple(int x, int n)
    if(n <= 0)  {
        return;
    }

    auto pos = std::lower_bound(data.begin(), data.end(), x);

    data.insert(pos, n, x)
};

