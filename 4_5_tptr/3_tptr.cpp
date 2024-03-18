#include<iostream>

using namespace std;
int tab[1000000];
int main() {
    int n;
    cin >> n;
    int tmp = 0;
    int wynik = 0;
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }
    int a = 0;
    int b = 0;
    while (true) {
        if (a == (n - 1)) {
            if (wynik < tab[a]) {
                wynik = tab[a];
            }
            break;
        }
        if (tmp >= 0) {
            if (b < n - 1) {
                tmp += tab[b];
                b++;
            }
            if (b == n - 1) {
                tmp -= tab[a];
                a++;
            }
        }
        if (tmp < 0) {
            if (a == b){
                a++;
                b++;
            } else {
                a++;
            }
            tmp = tab[a];
        }
        if (tmp > wynik) {
            wynik = tmp;
        }
    }
    cout << wynik << "\n";
    return 0;
}
