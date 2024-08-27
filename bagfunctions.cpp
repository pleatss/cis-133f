int main()
bag b(10); //capacity 10

b.insert(5);
b.insert(7);
b.insert(-2);

for(int i=0; i < b.size(); ++i)
//We can just from here:
cout << b.at(i) << endl;

class bag {
    public:
    .
    .
    .
    (int) //Constructor 

    void insert(int x);
    void erase(int i);
    int size()
    int at(int i)
    //...
    //...
    //...

}

#include <vector> 

class bag {

    public: 
    bag(int c){ //c is the Capacity of the bag 
        data.resize(c);
        cap = c;
        size = 0;
    }
}

//Erase functions:
void erase(int i){

} // < - - - Checks if i is greater than value 0 'i>0', 'i < sz' (sz=size)
swap(data[i], data[size -1])

