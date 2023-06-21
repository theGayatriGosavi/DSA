/* 
https://www.geeksforgeeks.org/longest-common-prefix-using-trie/
Given a set of strings, find the longest common prefix.
Input  : {“geeksforgeeks”, “geeks”, “geek”, “geezer”}
Output : "gee"
Input  : {"apple", "ape", "april"}
Output : "ap"
*/

#include <iostream>
#include <vector>

using namespace std;

struct TrieNode {
    TrieNode* children[26] = { nullptr };
    int count = 0;
};

string longestCommonPrefix(vector<string>& strs) {
    TrieNode* root = new TrieNode;

    // Build the Trie
    for (const string& str : strs) {
        TrieNode* curr = root;
        for (char c : str) {
            int index = c - 'a';
            if (!curr->children[index]) {
                curr->children[index] = new TrieNode;
                curr->count++;
            }
            curr = curr->children[index];
        }
    }

    // Find the longest common prefix
    string prefix;
    TrieNode* curr = root;
    while (curr && curr->count == 1) {
        for (int i = 0; i < 26; i++) {
            if (curr->children[i]) {
                curr = curr->children[i];
                prefix += 'a' + i;
                break;
            }
        }
    }
    
    delete root;

    return prefix;
}

int main() {
    vector<string> strs = {"geeksforgeeks","geeks","geek","geezer"};
    string lcp = longestCommonPrefix(strs);

    if (lcp.empty()) {
        cout << "No common prefix found." << endl;
    } else {
        cout << "Longest common prefix: " << lcp << endl;
    }

    return 0;
}

