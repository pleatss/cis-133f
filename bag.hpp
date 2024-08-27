#include <vector>
class bag
{
    public:
    bag(int c)
    {
        data.resize(c);
        cap=c;
        sz=0;

    }
    int size(){return sz;}
}

//Insert:
#include <vector> 

class bag 
{
    public: 
    bag(int c){ //c is the Capacity of the bag 
        data.resize(c);
        cap = c;
        sz = 0;
    }
    
}


void remove(int x)
{
    swap data[i], data[sz -1];
    --sz;

}

void remove(int x)
{
    for(int i = 0; i < sz; ++i)
    if(data[i] ==x){
        erase(i);
        return; //Removes first copy
    }
}