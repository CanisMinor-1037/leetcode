#include <iostream>
#include <algorithm>
using namespace std;
const int Maxn = 302;
struct Student {
    int num;
    int score_y;
    int score_s;
    int score_w;
    int score_total;
} students[Maxn];
bool cmp(Student & a, Student & b);
int main() {
    int n;
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> students[i].score_y 
            >> students[i].score_s
            >> students[i].score_w;
        students[i].num = i + 1;
        students[i].score_total = students[i].score_y +
            students[i].score_s + students[i].score_w;
    }
    sort(students, students + n, cmp);
    for (int i = 0; i < 5; i++) {
        cout << students[i].num << " "
             << students[i].score_total
             << endl;
    }
    return 0;
}

bool cmp(Student & a, Student & b) {
    if (a.score_total > b.score_total) {
        return true;
    } else if (a.score_total < b.score_total) {
        return false;
    } else {// equal
        if (a.score_y > b.score_y) {
            return true;
        } else if (a.score_y < b.score_y) {
            return false;
        } else {
            if (a.num < b.num) {
                return true;
            } else {
                return false;
            }
        }
    }
}