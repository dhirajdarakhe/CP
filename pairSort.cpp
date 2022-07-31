

bool cmp(pair<int, string> a, pair<int, string> b) {
    if (a.first != b.first) {
        return a.first > b.first; // ince
    } else {
        return a.second < b.second;  // dec
    }
} // inc dec

bool cmp(pair<int, string> a, pair<int, string> b) {
    if (a.first != b.first) {
        return a.first < b.first; // dec
    } else {
        return a.second > b.second;  // ince
    }
} // dec inc 
