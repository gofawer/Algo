#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    map<char, int> letter_counts {{'a', 22}, {'b', 33}, {'c', 44}};

    letter_counts['n'] = 55;       // insert
    letter_counts['n']++;

    for (const auto& m : letter_counts)
        cout << m.first << " : " << m.second << endl;


    vector<string> words {"It", "is", "not", "a", "sentance", "it", "is", "a", "hoax"};
    map<string, int> map_words;

    for (const auto& w : words) {
        ++map_words[w];
    }

    for (const auto& w : map_words) {
        cout << w.second << " occurancys of word: " << w.first << endl;
    }
    
    
    return 0;
}

