C5:
#include<iostream>
#include<cmath>
using namespace std;

bool CheckPrime(int n)
{
    if (n < 2) {
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        if (CheckPrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}

C6:
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    while(a * b)
    {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    return a + b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}

C7:
#include<iostream>
#include<cmath>
using namespace std;

void triangle(int n)
{
    for (int y = n - 1; y >= 0; y--)
    {
        for(int x = -(n - 1); x <= n - 1; x++)
        {
            if (abs(x) + abs(y) <= n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    triangle(n);
    return 0;
}

C8:
#include<iostream>
#include<cmath>
using namespace std;

int lamtron(double n)
{
    double m = n - (int)n;
    if (m < 0.5) {
        return n;
    } else {
        return n + 1;
    }
}

int main()
{
    double n;
    cin >> n;
    cout << lamtron(n);
    return 0;
}

C9:
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int random(int N)
{
    int a;
    a = rand() % N + 1;
    return a;
}

int main()
{
    short seed = time(0);
    srand(seed);
    int N;
    cin >> N;
    cout << random(N);
    return 0;
}

C11:
#include<iostream>
using namespace std;

ToBinary(int n)
{
    string s, kq;
    while(n) {
        int a = n % 2;
        char c = a + '0';
        s += c;
        n = n / 2;
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        kq += s[i];
    }
    return kq;
}

int main()
{
    int n;
    cin >> n;
    cout << ToBinary(n);
    return 0;
}


