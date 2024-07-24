#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 1; i < (int)s.size(); i += 2) {
        s[i] = '#';
    }
    cout << s;
}

//                                  2 Solution

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < (int)s.size(); i ++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i'){
            c++;
        }
    }
    cout << n - c;
}

//                                     3 Solution

#include <bits/stdc++.h>
using namespace std;
bool check(string &s) {
    int i = 0, j = (int)s.size() - 1;
    while (i <= j) {
        if (s[i] != s[j]) return false;
        i++, j--;
        }
    }
    int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << (check(s) ? "YES" : "NO");
}

//                                       4 Solution

#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
string s;
cin >> s;
    if(s.size()%2 != 0) cout<<"Invalid input."<<endl;
    else{
        reverse(s.begin() + n / 2, s.end());
        cout << s;
    }
}

//                                      5 Solution

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int val = 0, pw = 1;
    while (s.size()) {
        val += pw * (s.back() - '0');
        s.pop_back();
        pw *= 10;
    }
    cout << val;
}