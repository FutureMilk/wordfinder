#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>


using namespace std;

#define ALPHABET_SIZE (26)



// int main() {
//     cout << "I'm going to kill myself!\n";
//     return 0;
// }

struct TrieNode {
  
    // Array for child nodes of each node
    TrieNode* child[ALPHABET_SIZE];

    // for end of word
    bool wordEnd;

    TrieNode() {
        wordEnd = false;
        for (int i = 0; i < ALPHABET_SIZE; i++) {
            child[i] = nullptr;
        }
    }
};

// Method to insert a key into the Trie
void insertKey(TrieNode* root, const string& key) {
  
    // Initialize the curr pointer with the root node
    TrieNode* curr = root;

    // Iterate across the length of the string
    for (char c : key) {
      
        // Check if the node exists for the 
        // current character in the Trie
        if (curr->child[c - 'a'] == nullptr) {
          
            // If node for current character does 
            // not exist then make a new node
            TrieNode* newNode = new TrieNode();
          
            // Keep the reference for the newly
            // created node
            curr->child[c - 'a'] = newNode;
        }
      
        // Move the curr pointer to the
        // newly created node
        curr = curr->child[c - 'a'];
    }

    // Mark the end of the word
    curr->wordEnd = true;
}

// Method to search a key in the Trie
bool searchKey(TrieNode* root, const string& key) {

    if (root == nullptr) {
        return false;
    }
  
    // Initialize the curr pointer with the root node
    TrieNode* curr = root;

    // Iterate across the length of the string
    for (char c : key) {
      
        // Check if the node exists for the 
        // current character in the Trie
        if (curr->child[c - 'a'] == nullptr) 
            return false;
        
        // Move the curr pointer to the 
        // already existing node for the 
        // current character
        curr = curr->child[c - 'a'];
    }

    // Return true if the word exists 
    // and is marked as ending
    return curr->wordEnd;
}

void suggestionsRec(struct TrieNode* root, string currPrefix)
{
    // found a string in Trie with the given prefix
    if (root->wordEnd)
        cout << currPrefix << endl;
 
    for (int i = 0; i < ALPHABET_SIZE; i++)
        if (root->child[i]) {
            // child node character value
            char child = 'a' + (char)i;
            suggestionsRec(root->child[i], currPrefix + child);
        }
}

int main() {
  
    // // Create am example Trie
    // TrieNode* root = new TrieNode();
    // vector<string> arr =  {"and", "ant", "do", "geek", "dad", "ball"};
    // for (const string& s : arr) {
    //     insertKey(root, s);
    // }

    

    //load all the words into a vector
    vector<string> dictionary;
    dictionary.reserve(178692);   //reserve the exact amount of space in the vector as words in dictionary

    string word;
    int count = 0;
    while (cin >> word) {
        dictionary.push_back(word);
        count++;
    }

    // cout << "What's your fuckin word: ";

    // string unknown;
    // cout << count;
    // cin >> unknown;

    //how would I take in the word as well??? possibly as a 
    //cmd line arg
    while (next_permutation(unknown.begin(), unknown.end())) {
        cout << unknown << "\n";
    }


    /*
    
    
    string s("ABC");
do {
    cout << s << endl;
} while (next_permutation(s.begin(), s.end()));

*/
\


    // // One by one search strings
    // vector<string> searchKeys = {"do", "gee", "bat"};
    // suggestionsRec(root, "an");
    // // for (string& s : searchKeys) {
    // //     cout << "Key : " << s << "\n";
    // //     if (searchKey(root, s)) 
    // //         cout << "Present\n";
    // //     else 
    // //         cout << "Not Present\n";        
    // // }

    //make some sort of delete function
    // string word;
    
    // while (cin >> word) {
    //     cout << word << "\n";
    // }
  
    return 0;
}