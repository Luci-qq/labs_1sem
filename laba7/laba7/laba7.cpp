
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
//void filter(vector<string> words) {
//    vector<int> indexation;
//    vector<char> first_symbols;
//    char tmp;
//    for (int i = 0; i < words.size(); i++) {
//        first_symbols.push_back(words[i][1]);
//    }
//    for (int i = 0; i < first_symbols.size() - 1; i++) {
//        for (int j = 1; j < first_symbols.size(); j++) {
//            tmp = first_symbols[j];
//            if (strcmp(tmp,first_symbols[j])>1) {
//                indexation.push_back(j);
//                first_symbols[j] = tmp;
//            }
//            else {
//                indexation.push_back(i);
//            }
//        }
//    }
//    for (int i = 0; i < indexation.size(); i++) {
//        cout << words[indexation[i]] << " ";
//    }
//}

int main()
{
    string line;
    vector <string> words;
    vector <int> numbers;
    getline(cin, line);
    string sep = " ";
    int sep_size = sep.size();
    string temp;
    while (true) {
        temp = line.substr(0, line.find(sep));
        words.push_back(temp);
        if (temp.size() == line.size()) {
            break;
        }
        else {
            line = line.substr(temp.size() + sep_size);
        }
    }
    sort(words.begin(), words.end());
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
    }
    return 0;
}
    
