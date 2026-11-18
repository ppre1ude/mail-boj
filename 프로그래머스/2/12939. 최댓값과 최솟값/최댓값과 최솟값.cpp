#include <string>
#include <sstream>
#include <algorithm>
#include <climits>

using namespace std;

string solution(string s) {
    stringstream ss(s);
    
    int x;
    int mn = INT_MAX;
    int mx = INT_MIN;
    
    while (ss >> x) {
        mn = min(mn, x);
        mx = max(mx, x);
    }
    
    return to_string(mn) + " " + to_string(mx);
}