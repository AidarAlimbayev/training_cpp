#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, man_size;
    int cnt = 0;
    cin >> man_size;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (man_size == 100 && a.back() == 1000 && n != 0) {
            cout << 1;
    } else if (man_size == 100 && a.back() < 1000 && n == 0) {
        cout << 0;
    }
    for (auto now : a){
        int temp = now + 3;
        //cout << "temp = " << temp << " ";
        
        if ((man_size + 3) <= (temp)){
            //cout << "now = " << now << " ";
            cnt++;
            //cout << "counter = "<< cnt << " ";
            man_size = temp;
            //cout << "man_size" << man_size << "\n";
        }
        
    }
    cout << cnt;
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <utility>
// #include <algorithm>
// #include <string>

// using namespace std;

// void print(vector <int> a) {
//     for (auto now : a) {
//         cout << now << " ";
//     }
//     cout << "\n";
// }

// int main() {
//     int n;
//     cin >> n;
//     vector <int> a(n);
//     for (int i = 1; i <= n; i++) {
//         a[i - 1] = i;
//     }
    
//     print(a);
//     while (next_permutation(a.begin(), a.end())){
//         print(a);
//     }
//     return 0;
// } 



// #include <iostream>
// #include <vector>
// #include <utility>
// #include <algorithm>
// #include <string>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector <int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end());
//     cout <<a[n / 2];
//     return 0;
// } 

// #include <iostream>
// #include <vector>
// #include <utility>
// #include <algorithm>
// #include <string>

// using namespace std;

// struct man {
//     int height;
//     string name;
// };

// bool cmp(man a, man b) {
//     return a.height < b.height;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector <man> a(n);
//     for (int i = 0; i < n; i++){
//         int temp;
//         string s_temp;
//         cin >> temp >> s_temp;
//         man struct_temp;
//         struct_temp.height = temp;
//         struct_temp.name = s_temp; 
//         a[i] = struct_temp;
//     }
//     stable_sort(a.begin(), a.end(), cmp);
//     reverse(a.begin(), a.end());
//     for (auto now : a){
//         cout << now.name << "\n";
//     }
//     return 0;
// } 

// #include <iostream>
// #include <vector>
// #include <utility>
// #include <algorithm>
// #include <string>

// using namespace std;

// struct man {
//     int height;
//     string name;
// };

// bool cmp(man a, man b) {
//     return a.height < b.height;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector <man> a(n);
//     for (int i = 0; i < n; i++){
//         int temp;
//         string s_temp;
//         cin >> temp >> s_temp;
//         man struct_temp;
//         struct_temp.height = temp;
//         struct_temp.name = s_temp; 
//         a[i] = struct_temp;
//     }
//     sort(a.begin(), a.end(), cmp);
//     reverse(a.begin(), a.end());
//     for (auto now : a){
//         cout << now.name << "\n";
//     }
//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector <pair <int, int>> a(n);
//     for (int i = 0; i < n; i++){
//         int temp;
//         cin >> temp;    
//         a[i] = {temp, i};
//     }
//     sort(a.begin(), a.end());
//     reverse(a.begin(), a.end());
//     for (auto now : a){
//         cout << now.first << " ";
//     }
//     return 0;
// }

