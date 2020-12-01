#include <iostream>
#include <string>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < (n); i++)


// Lucky 7
int main()
{
    string s;
    cin >> s;
    bool hantei = false;
    rep(i,3) {
        if(s.at(i) == '7') {
            hantei = true;
        }
    }

    if(hantei) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}


// FizzBuzz Sum
int main()
{
    int N;
    ll n = 0;
    cin >> N;
    rep(i, N) {
        if (i % 3 != 0 && i % 5 != 0) {
            n += i;
        }
    }
    cout << n << endl;
}


// Sum of gcd of Tuples(Easy)
#define req(j, n) for (ll j = 1; j < (n+1); j++)
#define rer(k, n) for (ll k = 1; k < (n+1); k++)

ll gcd(ll p, ll q) {
    if (q == 0) {
        return p;
    } else
    {
        return gcd(q, p % q);
    }
    
}

int main()
{
    ll N;
    cin >> N;
    int ans = 0;
    rep(i, N) {
        req(j, N) {
            rer(k, N) {
                ll anan, ikuiku;
                anan = gcd(i,j);
                ikuiku = gcd(anan, k);
                ans += ikuiku;
            }
        }
    }
    cout << ans << endl;
}


// Sheep and Wolves
int main()
{
    int n, m;
    cin >> n >> m;
    if (n <= m) {
        cout << "unsafe" << endl;
    }else{
        cout << "safe" << endl;
    }
}

// Batle
int main()
{
    int a, b, c, d;
    int count_t, amari_t;
    int count_a, amari_a;
    bool hantei = false;
    cin >> a >> b >> c >> d;
    count_t = c / b;
    amari_t = c % b;
    count_a = a / d;
    amari_a = a % d;
    if (count_t < count_a) {
        hantei = true;
    } else if (count_t == count_a) {
        if (amari_t != 0 && amari_a == 0) {
            hantei = false;
        } else{
            hantei = true;
        }
    } else if (count_t > count_a) {
        if (amari_a > 0 && amari_t == 0) {
            hantei = true;
        } else{
            hantei = false;
        }
    }

    if(hantei) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}


// gacha
int main()
{
    int N;
    cin >> N;
    string arr[N];
    set<string> ss;
    rep(i, N) {
        cin >> arr[i];
        ss.insert(arr[i]);
    }
    cout << ss.size() << endl;
}


//Homework
int main()
{
    ll N, M;
    cin >> N >> M;
    int arr[M];
    rep(i, M) {
        cin >> arr[i];
        N -= arr[i];
    }
    if (N < 0) {
        cout << "-1" << endl;
    } else {
        cout << N << endl;
    }
}


// management
int main()
{
    ll N;
    cin >> N;
    int arr[N];
    vector<int> A(N, 0);
    rep(i, N-1) {
        cin >> arr[i];
        A[arr[i]-1] += 1;
    }
    rep(k, N) {
        cout << A[k-1] << endl;
    }
}


// We love golf
int main()
{
    int K;
    cin >> K;
    int A, B;
    int C;
    int ans;
    cin >> A >> B;
    C = B / K;
    int d = 0;
    for (ll i = 1; i <= C; i++) {
        ans = K * i;
        if (A <= ans && ans <= B) {
            cout << "OK" << endl;
            d++;
            break;
        }
    }
    if (d == 0) {
        cout << "NG" << endl;
    }
}


// 1%
int main()
{
    ll K;
    ll a = 100;
    cin >> K;
    ll year = 0;
    while (a < K) {
        a = a * 1.01;
        // a = float(a);
        // cout << a << endl;
        year++;
    }
    cout << year << endl;
}


// Trick or Treat
int main()
{
    ll N, K;
    cin >> N >> K;
    ll arr[N];
    vector<int> A(N, 0);
    ll d;
    ll n;
    rep(i, K) {
        cin >> d;
        rep(j, d) {
            cin >> n;
            A[n-1] += 1;
            // cout << A[1] << endl;
        }
    }
    // cout << "OK" << endl;
    ll people = 0;
    rep(k, N) {
        if (A[k] == 0) {
            // cout << arr[k] << endl;
            people += 1;
        }
    }
    cout << people << endl;
}


// Many Requirements まだdfsの実装わかってない
ll N, M, Q;
int ans;
vector<int> a, b, c, d;


void dfs(vector<int> A)
{
    if (A.size() == N+1) {
        int now = 0;
        rep(i,Q) {
            if (A[b[i]] - A[a[i]] == c[i]) {
                now += d[i];
            }
            ans = max(ans, now);
        }
        return;
    }

    A.push_back(A.back());
    cout << A.back() << endl;
    while (A.back() <= M) {
        dfs(A);
        A.back()++;
    }
}


int main()
{
    cin >> N >> M >> Q;
    a = b = c = d = vector<int>(Q);
    rep(i, Q) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    dfs(vector<int>(1,1));
    cout << ans << endl;
    return 0;
}


// Peaks
int main()
{
    ll N, M;
    cin >> N >> M;
    vector<int> H(N);
    vector<int> h(N, 0);
    vector<int> A, B;
    ll tenbo = 0;
    A = B = vector<int> (M);
    rep(i, N) {
        cin >> H[i];
    }
    rep(i, M) {
        cin >> A[i] >> B[i];
        if (H[A[i]-1] > H[B[i]-1]) {
            h[B[i]-1] += 1;
        } else if (H[A[i]-1] < H[B[i]-1]) {
            h[A[i]-1] += 1;
        } else
        {
            h[A[i]-1] += 1;
            h[B[i]-1] += 1;           
        }
        
    }
    rep(i, N) {
        if (h[i] == 0) {
            tenbo += 1;
        }
        else {
            continue;
        }
    }
    cout << tenbo << endl;
}


// Popular Vote
int main()
{
    ll N, M;
    cin >> N >> M;
    vector<int> A(N);
    float all_vote = 0;
    rep(i, N) {
        cin >> A[i];
        all_vote += A[i];
    }
    sort(A.rbegin(), A.rend());
    if (A[M-1] >= (all_vote / (4 * M))) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}


// Replacing Integer
int main()
{
    ll N;
    ll K;
    cin >> N >> K;
    ll small;
    if (abs(N%K-K) > N%K) {
        small = N % K;
        cout << small << endl;
    } else
    {
        small = abs(N%K-K);
        cout << small << endl;
    }
}


// Registraion
int main()
{
    string S, T;
    cin >> S;
    cin >> T;
    if (1 <= S.length() && S.length() <= 10) {
        if (T.length() == S.length() + 1) {
            if (S == T.substr(0, T.length()-1)) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            cout << "No" << endl;
        }
    } else
    {
        cout << "No" << endl;
    }
}


// Easy Linear Programming
int main()
{
    ll A, B, C, K;
    cin >> A >> B >> C >> K;
    ll count_A = 0;
    ll count_B = 0;
    ll count_C = 0;
    ll ans;
    while (A > 0 && count_A < K) {
        A -= 1;
        count_A += 1;
    }
    while (B > 0 && (count_A + count_B) < K)
    {
        B -= 1;
        count_B += 1;
    }
    while (C > 0 && (count_A + count_B + count_C) < K)
    {
        C -= 1;
        count_C += 1;
    }
    ans = count_A - count_C;
    cout << ans << endl;
}


const int INF = 1001001001;
int a[12][12];

int main()
{
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> c(N);
    rep(i,N) {
        cin >> c[i];
        rep(j,M) cin >> a[i][j];
    }

    // 1 << n == 2 ** n
    int ans = INF;
    rep(s,1<<N) {
        int cost = 0;
        vector<int> d(M);
        rep(i,N) {
            if (s>>i&1) {
                cost += c[i];
                rep(j, M) d[j] += a[i][j];
            }
        }
        bool ok = true;
        rep(j, M) if (d[j] < X) ok = false;
        if (ok) ans = min(ans, cost);
    }
    if (ans == INF) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}


// [ants]部分和問題
ll N, K;
const int MAX_N = 20;
int a[MAX_N];


bool dfs(int b, int sum) {
    
    if (b == N) return sum == K;

    if (dfs(b + 1, sum)) return true;

    if (dfs(b + 1, sum + a[b])) return true;

    return false;
}

int main()
{
    cin >> N >> K;
    rep(i, N) {
        cin >> a[i];
    }
    if (dfs(0, 0)) printf("Yes\n");
    else printf("No\n");
}


// [ants] Lake Counting
int N, M;
const int MAX_N = 100;
const int MAX_M = 100;
char field[MAX_N][MAX_M + 1];

void dfs(int x, int y) {
    field[x][y] = '.';

    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            int nx = x + dx, ny = y + dy;
            
            if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W') dfs(nx, ny);
        }
    }
    return ;
}


int main()
{
    cin >> N >> M;
    int res = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> field[i][j];
            if (field[i][j] == 'W') {
                dfs(i, j);
                res++;
            }
        }    
    }
    cout << res << endl;
}


// Therefore
int main()
{
    string s;
    cin >> s;
    int N;
    N = (int)(s.length());
    if (stoi(s.substr(N-1)) == 3) {
        cout << "bon" << endl;
    }
    else if (stoi(s.substr(N-1)) == 0 || stoi(s.substr(N-1)) == 1 || stoi(s.substr(N-1)) == 6 || stoi(s.substr(N-1)) == 8) {
        cout << "pon" << endl;
    } else {
        cout << "hon" << endl;
    }
}


// Triple Dots
int main()
{
    int k;
    string s;
    cin >> k;
    cin >> s;
    if ((int)(s.length()) <= k) {
        cout << s << endl;
    } else {
        string ans = s.substr(0, k) + "...";
        cout << ans << endl;
    }
}


// Colon
int main()
{
    double a,b,h,m;
    double menseki;
    double pi = 3.141592653589793238;
    double chou;
    cin >> a >> b >> h >> m;
    double ji, hun;
    ji = h * 30 + 0.5 * m;
    hun = m * 6;
    double rad;
    rad = abs(ji - hun);
    if (rad > 180.0) {
        rad = 360.0 - rad;
    }
    chou = sqrt(a * a + b * b - 2 * a * b * cos(rad/180.0 * pi));
    cout << fixed << setprecision(20) << chou << endl;
}


// 幅優先探索　迷路の最短経路
const int INF = 100000000;
typedef pair<int, int> P;
const int MAX_N = 100;
const int MAX_M = 100;
char maze[MAX_N][MAX_M];
int N, M;
int sx, sy; // the point of start
int gx, gy; // the point of goal
int d[100][100];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};


int bfs()
{
    queue<P> que;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            d[i][j] = INF;
        }
    }
    que.push(P(sx, sy));
    d[sx][sy] = 0;
    
    while (que.size()) {
        P p = que.front(); que.pop();
        if (p.first == gx && p.second == gy) break;

        for (int i = 0; i < 4; i++) {
            int nx = p.first + dx[i], ny = p.second + dy[i];

            if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny] == INF) {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}

int main()
{
    int res = bfs();
    cout << res << endl;
}


// 貪欲法　硬貨の問題
int main()
{
    const int V[6] = {1, 5, 10, 50, 100, 500};

    int A;
    int C[6];

    cin >> A;
    rep(i, 6) {
        cin >> C[i];
    }
    int ans = 0;
    for (int i = 5; i >= 0; i-- ) {
        int t = min(A / V[i], C[i]);
        A -= t * V[i];
        ans += t;
    }
    printf("%d\n", ans);
}


// 貪欲法　区間スケジューリング問題
int main()
{
    const int MAX_N = 100000;

    int N = 5, S[MAX_N] = {1, 2, 4, 6, 8}, T[MAX_N] = {3, 5, 7, 9, 10};
    pair<int, int> itv[MAX_N];

    rep(i, N) {
        itv[i].first = T[i];
        itv[i].second = S[i];
    }
    sort(itv, itv+N);

    int ans = 0, t = 0;
    for (int i = 0; i < N; i++) {
        if (t < itv[i].second) {
            ans++;
            t = itv[i].first;
        }
    }
    printf("%d\n", ans);
}


// 貪欲法　辞書順最小の問題
int main()
{   
    int N;
    cin >> N;
    char S[2001];
    cin >> S;
    int a = 0, b = N - 1;
    
    while (a <= b)
    {
        bool left = false;
        for (int i = 0; a + i <= b; i++) {
            if (S[a+i] < S[b-i]) {
                left = true;
                break;
            }
            else if (S[a+i] > S[b-i]) {
                left = false;
                break;
            }
        }
        if (left) putchar(S[a++]);
        else putchar(S[b--]);
    }
    putchar('\n');
}


// 蟻本 Saruman's Army
int main()
{   
    ll N, R;
    cin >> N >> R;
    int X[N];
    rep(i, N) {
        cin >> X[i];
    }
    sort(X, X + N);
    int j = 0, ans = 0;
    while (j < N) {
        int s = X[j++];
        while (j < N && X[j] <= s + R) {
            j++;
        }
        int p = X[j - 1];
        while (j < N && X[j] <= p + R) {
            j++;
        }
        ans++;
    }
    cout << ans << endl;
}


// Multiple2
int main()
{   
    ll N;
    cin >> N;
    ll count;
    vector<ll> a(N);
    ll ans=0;
    int wi = 0;
    rep(i, N) {
        cin >> a[i];
        if (a[i] == 0) {
            wi = 1;
            cout << "0" << endl;
            break;
        }
    }
    if (wi == 0) {
        rep(i, N) {
            if (i == 0) {
                ans = a[i];
            } else {
                count = powl(10.0,18.0) / a[i];
                if (count < ans) {
                    cout << "-1" << endl;
                    return 0;
                }
                ans = ans * a[i];
            }
        }
        cout << ans << endl;
    }
}


// Multiple3
int main()
{
    ll a;
    float b;
    ll ans;
    cin >> a >> b;
    int c;
    c = floor(100 * b + 0.1);
    ans = a*c/100;
    cout << ans << endl;
}


// beginner contest 172 c問題
// 尺取り法
// 先にBを最大の値で設定しておいて、Aの1冊ずつ増やしていってそれに合わせてBの冊数を減らしていく。
// その過程で本の冊数が最大になる組み合わせを残していく。
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    ll t = 0;
    rep(i, n) {
        cin >> a[i];
    }
    rep(i, m) {
        cin >> b[i];
    }
    rep(i,m) {
        // m冊全て読んだことにする
        t += b[i];
    }
    int j = m;
    int ans = 0;
    rep(i,n+1) {
        while(j > 0 && t > k) {
            --j;
            t -= b[j];
        }
        if (t > k) {
            break;
        }
        ans = max(ans, i+j);
        if (i == n) {
            break;
        }
        t += a[i];
    }
    cout << ans << endl;
    return 0;
}


// 172 D問題 オーバーフローは解決できてない
// 約数の個数をまとめる
ll yakusu(ll N)
{
	ll ans = 1;

	vector<ll> x(N + 1);
	ll num = N; // 素因数分解する変数num 

	for (ll i = 2; i <= N; i++) {
		while (num%i == 0) { // 素数で割り切れなくなるまで割っていく
			x.at(i)++;
			num /= i;
		}
	}

	for (ll i = 2; i <= N; i++)
	{	
		ans *= x.at(i) + 1;
	}
	return ans;
}

int main()
{
    ll N;
    cin >> N;
    ll ans=0;
    ll yaku;
    rep(i,N) {
        yaku = yakusu(i+1);
        ans += (i+1) * yaku;
    }
    cout << ans << endl;
}


// Maximum profit(螺旋本)
int main()
{
    int N;
    cin >> N;
    vector<int> R(N);
    int maxv = -1000000000;
    rep(i,N) {
        cin >> R[i];
    }
    int minv = R[0];
    for (int j = 1; j < N; j++) {
        maxv = max(maxv, R[j]-minv);
        minv = min(minv, R[j]);
    }
    cout << maxv << endl;
    return 0;
}


// Insertion Sort(螺旋本)
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i,N) {
        cin >> A[i];
    }
    int v;
    int j;
    rep(i,N) {
        v = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > v) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        rep(i,N) {
            if (i<N-1) {
                cout << A[i] << " ";
            } else {
                cout << A[i] << endl;
            }
        }
    }
    return 0;
}


// Bubble sort(螺旋本)
int main()
{
    int N;
    cin >> N;
    vector<int> A(100);
    rep(i,N) {
        cin >> A[i];
    }
    bool flag = 1;
    int count = 0;
    for (int i = 0; flag; i++) {
        flag = 0;
        for (int j = N - 1; j >= i+1; j--) {
            if (A[j] < A[j-1]) {
                swap(A[j], A[j-1]);
                flag = 1;
                count +=  1;
            }
        }
    }
    rep(i,N) {
        if (i<N-1) {
            cout << A[i] << " ";
        } else {
            cout << A[i] << endl;
        }
    }
    cout << count << endl;
}


// Selection Sort(螺旋本)
int main()
{
    int N;
    cin >> N;
    vector<int> A(100);
    int count = 0;
    rep(i,N) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        int minj = i;
        for (int j = i; j < N; j++) {
            if (A[j] < A[minj]) {
                minj = j;
            }
        }
        if (A[i] != A[minj]) {
            count += 1;
            swap(A[i], A[minj]);
        }
    }
    rep(i,N) {
        if (i<N-1) {
            cout << A[i] << " ";
        } else {
            cout << A[i] << endl;
        }
    }
    cout << count << endl;
}



// c問題
int main()
{
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    int ans = 0;
    rep(is,1<<h)rep(js,1<<w) {
        int cnt = 0;
        rep(i,h)rep(j,w) {
            if (is>>i&1) continue;
            if (js>>j&1) continue;
            if (s[i][j] == '#') cnt++;
        }
        if (cnt == k) ans++;
    }
    cout << ans << endl;
    return 0;
}


// Stable Sort (螺旋本)
vector<string> BubbleSort(vector<string> card, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = N-1; j > i; j--) {
            if (card[j][1] < card[j-1][1]) {
                swap(card[j], card[j-1]);
            }
        }
    }
    return card;
}


vector<string> SelectionSort(vector<string> card, int N) {
    int minj;
    int j;
    for (int i = 0; i < N; i++) {
        minj = i;
        for (int j = i; j < N; j++) {
            if (card[j][1] < card[minj][1]) {
                minj = j;
            }
        }
        swap(card[i], card[minj]);
    }
    return card;
}


bool isStable(vector<string> in, vector<string> out, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            for (int a = 0; a < N; a++) {
                for (int b = a+1; b < N; b++) {
                    if (in[i][1] == in[j][1] && in[i] == out[b] && in[j] == out[a]) {
                        return false;
                    } else {
                        continue;
                    }
                }
            }
        }
    }
    return true;
}


int main()
{
    int N;
    cin >> N;
    vector<string> card(N);
    vector<string> bubble_card(N);
    vector<string> select_card(N);
    rep(i,N) {
        cin >> card[i];
    }
    bubble_card = BubbleSort(card, N);
    rep(i,N) {
        if (i<N-1) {
            cout << bubble_card[i] << " ";
        } else {
            cout << bubble_card[i] << endl;
        }
    }
    bool judge;
    judge = isStable(card, bubble_card, N);
    if (judge == true) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    select_card = SelectionSort(card, N);
    rep(i,N) {
        if (i<N-1) {
            cout << select_card[i] << " ";
        } else {
            cout << select_card[i] << endl;
        }
    }
    judge = isStable(card, select_card, N);
    if (judge == true) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
}


// Stack (螺旋本)
int top, S[1000];

void push(int x) {
    S[++top] = x;
}

int pop() {
    top--;
    return S[top+1];
}

int main()
{
    int a, b;
    top = 0;
    char s[100];
    while( scanf("%s", s) != EOF ){
        if (s[0] == '+') {
            a = pop();
            b = pop();
            push(a + b);
        } else if (s[0] == '-') {
            b = pop();
            a = pop();
            push(a - b);
        } else if (s[0] == '*') {
            a = pop();
            b = pop();
            push(a * b);
        } else {
            push(atoi(s));
        }
        cout << S[top] << endl;
    }
    cout << S[top] << endl;
    return 0;
}


// エイシングプログラミングコンテスト　c問題
int main()
{
    int N;
    cin >> N;
    int v;
    vector<int> ans(10050);
    for (int i=1; i < 105; i++) {
        for (int j=1; j<105; j++) {
            for (int k=1; k<105; k++) {
                v = i*i+j*j+k*k+i*j+j*k+k*i;
                if (v < 10050) {
                    ans[v] += 1;
                }
            }
        }
    }
    for (int i=0; i<N; i++) {
        cout << ans[i+1] << endl;
    }
    return 0;
}


// Que 螺旋本
#define LEN 100005

typedef struct pp {
    char name[100];
    int t;
} P;

P Q[LEN];
int head, tail, N;

void enqueue(P x) {
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

P dequeue() {
    P x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

int main()
{   
    int elaps = 0, c;
    int n, q;
    cin >> n >> q;
    P u;
    for (int i = 1; i <= n; i++) {
        cin >> Q[i].name >> Q[i].t;
    }
    head = 1;
    tail = n + 1;

    while (head != tail) {
        u = dequeue();
        c = min(q, u.t);
        u.t -= c;
        elaps += c;
        if (u.t > 0) {
            enqueue(u);
        } else {
            cout << u.name << " " <<  elaps << endl;
        }
    }
    return 0;
}


bool search(vector<int> s, int N, int key) {
    int i = 0;
    s[N] = key;
    while (s[i] != key) {
        i++;
    }
    return i != N;
}


int main()
{
    int N, Q;
    vector<int> s(N+1);
    vector<int> t(Q);
    int ans = 0;
    cin >> N;
    rep(i,N) {
        cin >> s[i];
    }
    cin >> Q;
    rep(i,Q) {
        cin >> t[i];
        if (search(s, N, t[i])) {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}