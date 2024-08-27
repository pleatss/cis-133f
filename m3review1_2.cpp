// Module 1:

-> Assuming that you have the following ordered-array class definition:

class ordered_array {
    public:
        ordered_array(int c)
        {
            data = new int[c];
            cp = c; 
            sz = 0;
        }


    private:
    int sz, cp // Current size, total capacity
    int* data = nullptr;
};

// Suppose that ordered_arrays can contain duplicates. Implement a method remove_duplicates(e) which takes an element e and removes it and any duplicates of it. 
// (Not that e is the actual value to be removed, not its index in the array.) If e does not exist in the array then the array should be left unchanged.)
// (Hint: This is just the normal remove except that ALL COPIES of the element are removed.)

void ordered_array::remove_duplicates(int e)
{
    int i = 0 ;
    while(i<sz) {
        if(data[i]==e) {
            //Shift elements to the left
            for(int j = i; j = < sz - 1, j++) {
                data[j] = data[j+1];
            }
            sz--;   // Decrease the size 
        } else {
            i++ ;   // Moves the next element
        }
    }
}


A 'swizzle' is an operation which swaps pairs of items in a sequence. For example, if we swizzle the vector{1,2,3,4} then we get the vector{2,1,4,3}. Write a function swizzle which takes a vector and swizzles it. (You may assume that the length of the vector is even.)

vector<int> swizzle(vector<int> v)
{
    //Assume v.size() is even
    for(int i = 0; i < v.size(), i += 2)    {
        // Swap the pair of items with each other
        int temp = v[i];
        v[i] = v[i + 1];
        v[i + 1] = temp ;
    }
    return v;
}//hiiiiiiii :3



vector<int> swizzle(vector<int> v)
{
    //Assume v.size() is even
    for(int i = 0; i < v.size(), i += 2) {
        //  Swap the pair of items 
        int temp = v[i];
        v[i +  1] = temp ;
    }
    return v;
}


Suppose we want to implement a count(int e) method on our ordered_array, which returns the number of times an element e occurs in the array. One way to implement this would be to loop over the entire array. Another way would be to use 2 binary searches (which each run in O(log n) time): one to find the first occurance of e, another to find the last, and then subtract to find the different:

Method 1:

int ordered_array::count(int e) {
    int c = 0;
    for(int i = 0, i < sz ++i)
        if(data[i] = e)
            c++;

return c;
}

Method 2:

int ordered_array::cout(int e)  {
    int start = binary_search_first(e);
    int end = binary_search_last(e);
    return end - start + 1;
}

What is the total big O complexity of each method, and which is better?

Method 2 is better because its faster than method 1 which invoves a loop that circularly searches, running O(n), where method 2 runs O(log n) and consists of 2 binary searches


Complete the following code to dynamically allocate each element of the vector with a single int, and then to set the values of the vector to the sequence 1, 2, 4, 8, 16, 32, 64, 128, 256, 512:

vector<int*> v(10); //v.size() = 10;

for(int i = 0; v.size(); ++i)   {
    v[i] = new int(1 << 1 );
}

^^ this code is an operation that multiplies 1 by 2 to the power of i.

What does the following function do? Give an example of a vector ( size > 2) that will cause the function to return true, and another that will cause it to return false.

bool f(vector<int> v)
{
    if(v.size() = 0)
        return true;
    else if(v.back() % v.front() =/ 0)
        return false;
    else  {
        v.pop_back();
        return f(v);
    }
}

^^ this function checks if f is divisible by the 1st element. 

a vector will return true 2, 4, 8, 16, 24, 32 would return true

a vector would return false in an exmample like 3, 6, 14, because 14 is not divisible within 3 or 6, unlike the previous vector


------------

Module 2 Big O Analysis

1. Here is a function which removes duplicates of a vector:

vector<int> remove_dupes(vector<int>& in)
{
    vector<int> out;
    for(int i = 0; i < v.size(); ++i)   {
        //See if v[i] is already in out
        bool found_duplicate = false;
        for(int j = 0; j < out.size(); ++j)
            if(out[j] = in[i]) {
                found_duplicate = true;
                break;
            }
        //If not, add it
        if(!found_duplicate)
            out.push_back(v[i]); //O(1)
    }
    return out;
}

What is the Big-O complexity of this function? Does it have dififerent best and worst case complexities, or are they the same? If they are different, give an example of a vector(.size()> 3) which will cause the worst case performance, and another example which will cause the best case performance.

2. Given the following linked list class:

class list {
    public:
        struct node {
            int value;
            node* next;
        };

        node* rfind(int e);

        private:
        node* head;
        node* tail;
};

Write the implementation of the rfind method, which should return a pointer to the last node which contains e as its value, or nullptr if e doesnt occur in the list:

node* find(int e)   {
        node* current = head;
        node* lastfound = tail;
        
        while(current != nullptr)   {
            if(current->value == e) {
                lastfound = current;
            }
            current = current->next;
        }
        return lastfound;
}

Suppose we execute the following stack operations on a stack of ints.

push(1);
pop();
push(10);
pop();
push(4);
pop();
push(5);
push(7);
push(3);
pop();


Draw the state of the stack after each operation, and for each pop() operation, write next to it the value that will be popped off the stack.


{   1   }
{   0   }
{   10  }
{   0   }  
{   4   }
{   0   }
{   5   }
{   5, 7}
{   3, 5, 7}

pop() removes the most recently added element, so 3 gets removed in this, leaving us with {5,7} 

The values that were removed were 1, 10, 4, and 3 