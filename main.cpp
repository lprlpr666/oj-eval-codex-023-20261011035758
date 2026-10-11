#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    if(!(cin >> Q)) return 0;
    deque<long long> dq;
    string cmd;
    while(Q--) {
        cin >> cmd;
        if (cmd == "push_front") {
            long long x; cin >> x; dq.push_front(x);
        } else if (cmd == "push_back") {
            long long x; cin >> x; dq.push_back(x);
        } else if (cmd == "pop_front") {
            if (dq.empty()) cout << "-1\n"; else { cout << dq.front() << "\n"; dq.pop_front(); }
        } else if (cmd == "pop_back") {
            if (dq.empty()) cout << "-1\n"; else { cout << dq.back() << "\n"; dq.pop_back(); }
        } else if (cmd == "size") {
            cout << dq.size() << "\n";
        } else if (cmd == "empty") {
            cout << (dq.empty()?1:0) << "\n";
        } else if (cmd == "front") {
            if (dq.empty()) cout << "-1\n"; else cout << dq.front() << "\n";
        } else if (cmd == "back") {
            if (dq.empty()) cout << "-1\n"; else cout << dq.back() << "\n";
        }
    }
    return 0;
}

