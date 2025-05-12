#include <iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
private:
    bool searchUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';

        if (root->children[index] == NULL)
        {
            return false;
        }

        return searchUtil(root->children[index], word.substr(1));
    }

    void insertUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }

    bool isEmpty(TrieNode *root)
    {
        for (int i = 0; i < 26; i++)
            if (root->children[i])
                return false;

        return true;
    }

    TrieNode *removeUtil(TrieNode *root, string word)
    {
        if (root == NULL)
            return NULL;

        if (word.length() == 0)
        {
            if (root->isTerminal)
                root->isTerminal = false;

            if (isEmpty(root))
            {
                delete root;
                root = NULL;
            }

            return root;
        }

        // Recursion call
        int index = word[0] - 'a';
        root->children[index] = removeUtil(root->children[index], word.substr(1));

        // Backtracking
        // If root has no child (as it's only child got deleted) and it is also not end of any other word
        if (isEmpty(root) && root->isTerminal == false)
        {
            delete root;
            root = NULL;
        }

        return root;
    }

public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }

    TrieNode *removeWord(string word)
    {
        return removeUtil(root, word);
    }
};

int main()
{
    Trie *t = new Trie();

    t->insertWord("ARM");
    t->insertWord("TRIM");
    t->insertWord("DONE");

    cout << "Search TRIM: " << t->searchWord("TRIM") << endl;
    cout << "Search TRI: " << t->searchWord("TRI") << endl;
}