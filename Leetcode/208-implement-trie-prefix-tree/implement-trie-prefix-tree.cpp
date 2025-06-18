class Trie {
    struct Node {
        bool isWord = false;
        Node* children[26] = {};
    };
    
    Node* root;

public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* node = root;
        for (char c : word) {
            if (!node->children[c - 'a'])
                node->children[c - 'a'] = new Node();
            node = node->children[c - 'a'];
        }
        node->isWord = true;
    }
    
    bool search(string word) {
        Node* node = root;
        for (char c : word) {
            node = node->children[c - 'a'];
            if (!node) return false;
        }
        return node->isWord;
    }
    
    bool startsWith(string prefix) {
        Node* node = root;
        for (char c : prefix) {
            node = node->children[c - 'a'];
            if (!node) return false;
        }
        return true;
    }
};
