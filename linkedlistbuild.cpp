/* Example of a linked list in code */
class list {
    public:
    struct node
    {
        int value ; 
        node* next; 
    };
    //
    //
    //
    //
    //
    private:
    node* hd=nullptr
    node* tl==nullptr;
};


/* Insert functions below */
void list :: insert(node* a, int x)
{
    node* n = new node ; // These two lines 21/22 are step 1
    n -> value = x ;     //
    
    if(a ! == nullptr){
        //Cases # 0,2
        n -> next = a -> next ; // Step 2
        a -> next = n ; // Step 3

        if(n -> next == nullptr)
        tl = n ; // Step 4
    }
    
    else{ //a == nullptr
        //Cases # 1 & 3
       
        n -> next = hd ; //Step 2
        hd = n; //Step 3 

        if(n -> next == nullptr)
        tl = n ; // Step 4
    }

}



/* ^^^^^ Way to make all that simplified vvvvv */

void list :: insert(node* a, int x)
{
    node* n = new node ;
    n -> value = x ; //Step 1
    
    node* b = (a ! == nullptr ? a -> next : hd ) ;

    n -> next = b ; //Step 2
    b = n ; // Step 3
    
    if(n -> next == nullptr)
        tl = m ; // Step 4
}

/* This is a way to simplify it even further __below__ vvvvv */

node* b =
    (a ! = nullptr ? a -> next : hd ) ;
b = new node {x /* Value */, b /* Next */} ; 

if(b -> next == nullptr)
    tl = b ; 


/* For Erase functions */

void list :: erase(node* a)
{
    if(a == tl)
    return;

    if(a ! = nullptr){
        //Cases 1 & 2 
        node * n = a -> next ; //Step 1
        
        a -> next = n -> next ; //Step 2

        delete n; //Step 3

        if(a -> next == nullptr)
        tl = a ; //Step 4
    }
}

else {      // a == nullptr 
//For cases 1 & 3

node * n = hd ; // Step 1
hd = n -> next ; // Step 2 
delete n ; // Step 3 

if(hd == nullptr)
    tl = a ; // = nullptr // Step 4

}

void list :: push_front (int x)
{
    insert(nullptr, x);
}

void list :: push_back (int x)
{
    insert(tl, x)
}

/* What if I want to remove the head ? vvv*/

void list :: pop_front()
{
    erase(nullptr);
}

/* The one exception to this is popback, which wants to erase the tail, but we need to give the second to the last node to erase it (which we dont have, have to find it) use a loop to follow the next to follow the 2nd to the last node */

void list :: pop_back()
{
    node * n = hd ;
    while(n -> next != tl) ;
        n = n -> next ;
        // n -> next == tl // We are going to make the loops condition to this function
        erase(n);
}

list :: ~list()
{
    while(hd !=nullptr)
    pop_front(); // O (1) -> n * O(1) = O(n)
    //Empty : hd == nullptr and tl == nullptr
}

int list :: size()
{
    int s = 0 ; 
    node* n = hd; 
    while(n !=nullptr) {
        ++s; 
        n = n -> next ; 
    }
    return s;

}

list l ;
//
//
//
//
cout << l[7] << endl ; 

int list :: operator[] (int i)
{
    int s = 0 ; 
    node * n = hd;
    while(n ! = nullptr s != i){
        ++s;
        n = n -> next ; 
    }
    return n -> value ;

}

list l ; 
//
//
//
//
int i = 0 ;
while(i <l.size()){
    cout << l[i] << endl ;
}

// ^^ Big O of n on a list