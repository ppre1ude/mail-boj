#include <string>
#include <cctype>

using namespace std;

string solution(string s) {
    bool first = true;
    
    for (char& c : s) {
        if (c == ' ') { first = true; continue; }
        c = first ? toupper(c) : tolower(c);
        first = false;
    }
    
    return s;
}