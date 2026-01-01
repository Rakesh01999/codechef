#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while (t--) {

        int n;
        cin >> n;
        int itr = n - 1;
        deque<int> a(n), a1(n), a2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0, min = 0, max = 0;
        a1 = a;
        a2 = a;

        while (itr--)
        {
            min = a1[i] + a1[i + 1] * 2;

            a1.pop_front();
            a1.pop_front();
            a1.push_front(min);
        }

        itr = n - 1;
        while (itr--)
        {
            max = a2[n - 2] + a2[n - 1] * 2;

            a2.pop_back();
            a2.pop_back();
            a2.push_back(max);

            n--;
        }

        cout << min << " " << max << endl;
    }

    return 0;
}
