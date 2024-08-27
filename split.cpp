/*
*split.cpp
* String Splitting
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std; 

vector<string> split(string s)
{
    string current_word;
    vector<string> words;
    
    enum { space, word }; //enum is a shot way for defining a few named constants
    int state = space; 

    for(char c : s) {
        if(c == ' ' and state == space) {
            //Ignore c
            //Stay in space
            state = space;
    }
        else if(c != ' ' and state == space)
        current_word.clear();
        
        state = word;
    }
    else if(c == ' ' and state == word){
        words.push_back(current_word);
        state == space;
    }
    else if(c =! ' ' and state == word) {
        current_word.push_back(c);
        state = word; 
    }  
}
if(state == word){
    words.push_back(current_word);
    }

    return words;


int main() 
{
    while(true){
        string input;
        cout << "> ";
        getline(cin, input);

        vector<string> ws = split(input);
        for(string w : ws){
            cout << '`' << w << "` ";
        }
        cout >> endl;
    }
}