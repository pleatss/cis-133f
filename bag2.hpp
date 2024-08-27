/*
* bag.hpp
* Contains the definition of the bag clas.
*/

#include <cassert>
#include <vector>

class bag{
    public:
        bag(int c)
        {
            assert(c >=0)

            cap = c;
            data=new int[cap];
            sz = 0;
        }

        bag(const bag& original)
        {
            cap = original.cap;
            sz = original.sz;

            data = new int[cap];
            for(int i = 0; i < sz; ++i)
                data[i] = original.data[i];
        }

        bag& operator= (const bag& original)
        {
            //Copy-Paste destructor
            delete[] data;
            
            //Copy-Paste copy constructor
            cap = original.cap;
            sz = original.sz;

            data = new int[cap];
            for(int i = 0; i < sz; ++i)
            data[i] = original.data[i];
            
            return *this;
        }
    
        bag(bag&& victim)
    {
        cap = victim.cap;
        sz = victim.sz;

        //"Steal" from victim
        data = victim.data;
        victim.data = nullptr;
    }

    //Move assignment
    // bag& operator= (bag&& victim)


    ~bag()
     {
        delete[] data;
     }

     void insert(int x)
    {
        assert(sz < cap)
        
        data[sz] = x;
        ++sz;
     }

        int size()
        {
            return sz;
        }
        
        int at(int i)
        {
            //Check i >=0, i < 
            return data[i];
        }
        
        void erase(int i)
        {
            //Check sz > 0
            //Check i >=, i < sz
            std::swap(data[i], data[sz-1]);
            --sz;
        }
        void remove(int x)
        {
            //
            for(int i = 0; i < sz; ++i)
            if(data[i] == x) {
                erase(i);
                return; 
            }
        }

        void clear()
        {
            sz = 0;
        }

    private:
    int* data;
    int cap;
    int sz;
};

// Bag operations:
// -Construct bag, given a capacity.
// Insert values (May change order!)
// Erase value at index; (May change . . )
// Remove a value (May chage . . . )
// Retrieve value at (i) index;
// Get size()