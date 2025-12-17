#include <iostream> // For input and output (cin, cout)
#include <vector>   // For using vector
using namespace std;

int main()
{
    int n;
    cin >> n; // Read number of words

    vector<string> words;
    words.reserve(n); // Pre-allocate memory for n words

    // Read and process each word
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word; // Read a word

        // If the word is too long, replace it with its abbreviation
        if (word.length() > 10)
        {
            word = string(1, word[0])                    // first character
                   + to_string(word.length() - 2)        // number of middle characters
                   + string(1, word[word.length() - 1]); // last character
        }

        words.push_back(word); // Store processed word
    }

    // Print all processed words
    for (const string &s : words)
    {
        cout << s << endl;
    }

    return 0; // End of program
}