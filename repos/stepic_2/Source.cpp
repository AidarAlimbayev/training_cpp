 #include <iostream>

using namespace std;

int main()
{
	int n;
	int mark = 0;
	cin >> n;
	// ввод
	int symmetry[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			symmetry[i][j] = 0;
		}
	}

	// ручной ввод
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> symmetry[i][j];
		}
	}

	// обработка
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++){
			if (symmetry[i][j] != symmetry[j][i]) {
				mark = 1;
			}	
		}
	}

	// вывод
	//int gradient[n][n];
	if (mark == 0){
		cout << "YES";
	} else {
		cout << "NO";
	}
	

	return 0;
}


// Замена столбцов
// #include <iostream>

// using namespace std;

// int main()
// {
// 	int temp = 0; // временная переменная для перемещения
// 	int n, m;
// 	int i_index, j_index;
// 	i_index = 0;
// 	j_index = 0;
	
// 	cin >> n >> m;
// 	// инициализация
// 	int castling[100][100];
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++) {
// 			castling[i][j] = 0;
// 		}
// 	}

// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++) {
// 			cin >> castling[i][j];
// 		}
// 	}

// 	cin >> i_index >> j_index;

// 	// обработка
// 	for (int i = 0; i < n; i++) {
// 		temp = castling[i][i_index];
// 		castling[i][i_index] = castling[i][j_index];
// 		castling[i][j_index] = temp;
// 	}



// 	// вывод
// 	//int gradient[n][n];
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++) {
// 			cout << castling[i][j] << " ";
// 		}
// 		cout << endl;
// 	}

// 	return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
// 	int n;
// 	cin >> n;
// 	// ввод
// 	int gradient[100][100];
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < n; j++) {
// 			gradient[i][j] = 0;
// 		}
// 	}

// 	// обработка
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < n; j++) {
// 			if (i == j) {
// 				gradient[i][j] = 0;
// 			} 
// 			else if (i < j) 
// 			{
// 				gradient[i][j] = (j - i);
// 			} 
// 			else if (i > j) 
// 			{
// 				gradient[i][j] = (i - j);
// 			} 
// 		}
// 	}

// 	// вывод
// 	//int gradient[n][n];
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < n; j++) {
// 			cout << gradient[i][j] << " ";
// 		}
// 		cout << endl;
// 	}

// 	return 0;
// }

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	// èíèöèàëèçàöèÿ ïóñòîãî 2õ ìàññèâà
//	int snowflake[15][15];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			snowflake[i][j] = 0;
//		}
//	}
//
//	// îáðàáîòêà
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i == j || i == n - 1 -j || i == n / 2 || j == n/2) {
//				snowflake[i][j] = 1;
//			} 
//		}
//	}
//
//	// âûâîä
//	//int snowflake[n][n];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (snowflake[i][j] == 1) {
//				cout << "*" << " ";
//			}
//			else {
//				cout << "." << " ";
//			}
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	// èíèöèàëèçàöèÿ ïóñòîãî 2õ ìàññèâà
//	int nm[100][100];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			nm[i][j] = 0;
//		}
//	}
//
//	// ââîä ÷èñåë â 2õ ìàññèâ
//	for (int i = 0; i < n; i++)	{
//		for (int j = 0; j < m; j++) {
//			cin >> nm[i][j];
//		}
//	}
//
//	// îáðàáîòêà
//	int max = nm[0][0];
//	int max_i = 0;
//	int max_j = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (nm[i][j] > max) {
//				max = nm[i][j];
//				max_i = i;
//				max_j = j;
//			}
//		}
//	}
//
//	// âûâîä
//
//	cout << max_i << " " << max_j;
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int mines[102][102];
//
//	// èíèöèàëèçàöèÿ
//	for (int i = 0; i <= (n + 1); i++) {
//		for (int j = 0; j <= (m + 1); j++) {
//			mines[i][j] = 0;
//		}
//	}
//
//	// ÷òåíèå 
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> mines[i][j];
//		}
//	}
//	
//	// çàïîëíåíèå ïîëÿ
//	int ans[102][102];
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{	// êîîðäèíàòû ñîñåäåé (ñäâèãè)
//			int dx[8] = { 1, 1, 1, 0, 0, -1, -1, -1};
//			int dy[8] = { -1, 0, 1, -1, 1, 0, 1, -1 };
//			int temp = 0;
//			// ïåðåáîð ñîñåäåé
//			for (int k = 0; k < 8; k++)
//			{
//				temp += mines[i + dy[k]][j + dx[k]];
//			}
//			ans[i][j] = temp;
//		}
//	}
//
//	// âûâîä
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {	
//			if (mines[i][j] == 1) {
//				cout << "*";
//			} else {
//				cout << ans[i][j];
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main() 
//{
//	int n;
//	cin >> n;
//	// ðèñîâàíèå ôëàãà
//	int a[100][100];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j)
//			{
//				a[i][j] = 1;
//			}
//			else if (i < j)
//			{
//				a[i][j] = 0;
//			}
//			else
//			{
//				a[i][j] = 2;
//			}
//		}
//	}
//
//	// out
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}



//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	
//	// ñ÷èòûâàíèå è èíèöèàëèçàöèÿ
//	int N, balls, I, R;
//	cin >> N >> balls;
//	
//	// âåêòîð ñ êåãëÿìè
//	vector <int> pin(N);
//	for (int i = 0; i < N; i++)
//	{
//		pin[i]++;
//	}
//
//	// ñáèâàåì êåãëè
//	for (int i = 0; i < balls; i++)
//	{
//		cin >> I >> R;
//		for (int j = 0; j <= N; j++)
//		{
//			if (j >= (I - 1) && j <= (R - 1)){
//				pin[j] = 0;
//			}
//		}
//	}
//
//	
//	for (int i = 0; i < N; i++)
//	{
//		if (pin[i] == 1)
//		{
//			cout << "I";
//		}
//		else {
//			cout << ".";
//		}
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	int n;
//	cin >> n;
//	vector <int> a;
//
//	// Äîïîëíèòåëüíûé âåêòîð
//	vector <int> b;
//
//	//ñ÷èòûâàíèå
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		//if (temp > 0) 
//		//{
//		a.push_back(temp);
//		//}
//		b.push_back(0);
//		b[temp]++;
//	}
//
//	//îáðàáîòêà
//	int counter = 0;
//	for (int i = 0; i < n; i++)
//	{
//		
//	}
//
//	//âûâîä
//	for (int i = 0; i < n; i++) {
//		if (b[a[i]] == 1) {
//			cout << a[i] << " ";
//		}
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	int n = 8;
//	int yes = 0;
//	//cin >> n;
//	vector <int> x; // Êîî
//	vector <int> y; // 
//
//	//ñ÷èòûâàíèå
//	for (int i = 0; i < n; i++) 
//	{
//		int a, b;
//		cin >> a >> b;
//		if (x.size() < 8 && y.size() < 8) 
//		{
//			x.push_back(a);
//			y.push_back(b);
//		}
//			
//	}
//	
//	//îáðàáîòêà
//	int counter = 0;
//	for (int i = 0; i < n; i++) 
//	{
//		for (int j = i + 1; j < n; j++) 
//		{
//			if ((x[i] - x[j]) == (y[i] - y[j]) || -(x[i] - x[j]) == (y[i] - y[j]) || (x[i] - x[j]) == -(y[i] - y[j]) || -(x[i] - x[j]) == -(y[i] - y[j]) || x[i] == x[j] || y[i] == y[j]) {
//				yes = 1;
//			}
//		}
//				
//	}
//	
//	//âûâîä
//	if (yes == 1) {
//		cout << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//	
//	return 0;
//}



//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	int n = 8;
//	int yes = 0;
//	//cin >> n;
//	vector <int> x; // Êîî
//	vector <int> y; // 
//
//	//ñ÷èòûâàíèå
//	for (int i = 0; i < n; i++) 
//	{
//		int a, b;
//		cin >> a >> b;
//		if (x.size() < 8 && y.size() < 8) 
//		{
//			x.push_back(a);
//			y.push_back(b);
//		}
//			
//	}
//	
//	//îáðàáîòêà
//	int counter = 0;
//	for (int i = 0; i < n; i++) 
//	{
//		for (int j = i + 1; j < n; j++) 
//		{
//			if ((x[i] - x[j]) == (y[i] - y[j]) || -(x[i] - x[j]) == (y[i] - y[j]) || (x[i] - x[j]) == -(y[i] - y[j]) || -(x[i] - x[j]) == -(y[i] - y[j]) || x[i] == x[j] || y[i] == y[j]) {
//				yes = 1;
//			}
//		}
//				
//	}
//	
//	//âûâîä
//	if (yes == 1) {
//		cout << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//	
//	return 0;
//}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	int n;
//	cin >> n;
//	vector <int> a;
//	
//	// äîïîëíèòåëüíûé âåêòîð
//	vector <int> b;
//
//	//ñ÷èòûâàíèå
//	for (int i = 0; i < n; i++) 
//	{
//		int temp;
//		cin >> temp;
//		//if (temp > 0) 
//		//{
//			a.push_back(temp);
//		//}
//			b.push_back(1);
//	}
//	
//	//îáðàáîòêà
//	int counter = 0;
//	for (int i = 0; i < n; i++) 
//	{
//		for (int j = i + 1; j < n; j++) 
//		{
//			if (a[i] == a[j]) {
//				b[i]++;
//				b[j]++;
//			}
//		}
//				
//	}
//	
//	//âûâîä
//	for (int i = 0; i < n; i++) {
//		if (b[i] == 1) {
//			cout << a[i] << " ";
//		}
//	}
//	
//	return 0;
//}