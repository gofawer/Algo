#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <typeinfo>
#include <fstream>

using namespace std;

class FilipTheFrog {
    public:
    int countReachableIslands(vector<int> positions, int L) {

        int pos0 = positions[0];
        int index = 0;
        int counter = 0;

        sort(positions.begin(), positions.end());

        // Returns an iterator pointing to the first element in the range [first, last)
        // that is not less than (i.e. greater or equal to) value.
        auto it_lower = lower_bound(positions.begin(), positions.end(), pos0);
        index = distance(positions.begin(), it_lower);

        // going back
        for (int i = positions.size()-1 ; i >= 0 ; --i ) {
            if ( (i-1 >= 0) && abs(positions[i] - positions[i-1]) <= L ) {
                counter++;
            }
        }
        // going forward
        for (unsigned i = positions[index] ; i < positions.size() ; ++i) {
            if ( (i+1 < positions.size()) && abs(positions[i] - positions[i+1]) <= L ) {
                counter++;
            }
        }

        return counter+1;
    }


    void print(const vector<int>& elem) {
        for (auto i : elem)
            cout << i << " ";
        cout << endl;
    }
};

// CUT begin
ifstream data("FilipTheFrog.sample");

string next_line() {
    string s;
    getline(data, s);
    return s;
}

template <typename T> void from_stream(T &t) {
    stringstream ss(next_line());
    ss >> t;
}

void from_stream(string &s) {
    s = next_line();
}

template <typename T> void from_stream(vector<T> &ts) {
    int len;
    from_stream(len);
    ts.clear();
    for (int i = 0; i < len; ++i) {
        T t;
        from_stream(t);
        ts.push_back(t);
    }
}

template <typename T>
string to_string(T t) {
    stringstream s;
    s << t;
    return s.str();
}

string to_string(string t) {
    return "\"" + t + "\"";
}

bool do_test(vector<int> positions, int L, int __expected) {
    time_t startClock = clock();
    FilipTheFrog *instance = new FilipTheFrog();
    int __result = instance->countReachableIslands(positions, L);
    double elapsed = (double)(clock() - startClock) / CLOCKS_PER_SEC;
    delete instance;

    if (__result == __expected) {
        cout << "PASSED!" << " (" << elapsed << " seconds)" << endl;
        return true;
    }
    else {
        cout << "FAILED!" << " (" << elapsed << " seconds)" << endl;
        cout << "           Expected: " << to_string(__expected) << endl;
        cout << "           Received: " << to_string(__result) << endl;
        return false;
    }
}

int run_test(bool mainProcess, const set<int> &case_set, const string command) {
    int cases = 0, passed = 0;
    while (true) {
        if (next_line().find("--") != 0)
            break;
        vector<int> positions;
        from_stream(positions);
        int L;
        from_stream(L);
        next_line();
        int __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(positions, L, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1431937709;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 250 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    set<int> cases;
    bool mainProcess = true;
    for (int i = 1; i < argc; ++i) {
        if ( string(argv[i]) == "-") {
            mainProcess = false;
        } else {
            cases.insert(atoi(argv[i]));
        }
    }
    if (mainProcess) {
        cout << "FilipTheFrog (250 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
