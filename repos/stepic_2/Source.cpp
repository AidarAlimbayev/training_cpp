//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	// ������������� ������� 2� �������
//	int snowflake[15][15];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			snowflake[i][j] = 0;
//		}
//	}
//
//	// ���������
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i == j || i == n - 1 -j || i == n / 2 || j == n/2) {
//				snowflake[i][j] = 1;
//			} 
//		}
//	}
//
//	// �����
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
//	// ������������� ������� 2� �������
//	int nm[100][100];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			nm[i][j] = 0;
//		}
//	}
//
//	// ���� ����� � 2� ������
//	for (int i = 0; i < n; i++)	{
//		for (int j = 0; j < m; j++) {
//			cin >> nm[i][j];
//		}
//	}
//
//	// ���������
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
//	// �����
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
//	// �������������
//	for (int i = 0; i <= (n + 1); i++) {
//		for (int j = 0; j <= (m + 1); j++) {
//			mines[i][j] = 0;
//		}
//	}
//
//	// ������ 
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> mines[i][j];
//		}
//	}
//	
//	// ���������� ����
//	int ans[102][102];
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{	// ���������� ������� (������)
//			int dx[8] = { 1, 1, 1, 0, 0, -1, -1, -1};
//			int dy[8] = { -1, 0, 1, -1, 1, 0, 1, -1 };
//			int temp = 0;
//			// ������� �������
//			for (int k = 0; k < 8; k++)
//			{
//				temp += mines[i + dy[k]][j + dx[k]];
//			}
//			ans[i][j] = temp;
//		}
//	}
//
//	// �����
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
//	// ��������� �����
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
//	// ���������� � �������������
//	int N, balls, I, R;
//	cin >> N >> balls;
//	
//	// ������ � �������
//	vector <int> pin(N);
//	for (int i = 0; i < N; i++)
//	{
//		pin[i]++;
//	}
//
//	// ������� �����
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
//	// �������������� ������
//	vector <int> b;
//
//	//����������
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
//	//���������
//	int counter = 0;
//	for (int i = 0; i < n; i++)
//	{
//		
//	}
//
//	//�����
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
//	vector <int> x; // ���
//	vector <int> y; // 
//
//	//����������
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
//	//���������
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
//	//�����
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
//	vector <int> x; // ���
//	vector <int> y; // 
//
//	//����������
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
//	//���������
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
//	//�����
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
//	// �������������� ������
//	vector <int> b;
//
//	//����������
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
//	//���������
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
//	//�����
//	for (int i = 0; i < n; i++) {
//		if (b[i] == 1) {
//			cout << a[i] << " ";
//		}
//	}
//	
//	return 0;
//}