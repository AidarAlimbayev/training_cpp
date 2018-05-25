//#include <iostream>
//#include <vector>
//using namespace std;
//
//int IsPrime(unsigned long val) // Решето Аткина Берштейна
//{
//	int limit = 1000;
//	int sqr_lim;
//	bool is_prime[1001];
//	int x2, y2;
//	int i, j;
//	int n;
//
//	// Инициализация решета
//	sqr_lim = (int)sqrt((long double)limit);
//	for (i = 0; i <= limit; i++) is_prime[i] = false;
//	is_prime[2] = true;
//	is_prime[3] = true;
//
//	// Предположительно простые — это целые с нечётным числом
//	// представлений в данных квадратных формах.
//	// x2 и y2 — это квадраты i и j (оптимизация).
//	x2 = 0;
//	for (i = 1; i <= sqr_lim; i++) {
//		x2 += 2 * i - 1;
//		y2 = 0;
//		for (j = 1; j <= sqr_lim; j++) {
//			y2 += 2 * j - 1;
//
//			n = 4 * x2 + y2;
//			if ((n <= limit) && (n % 12 == 1 || n % 12 == 5))
//				is_prime[n] = !is_prime[n];
//
//			// n = 3 * x2 + y2; 
//			n -= x2; // Оптимизация
//			if ((n <= limit) && (n % 12 == 7))
//				is_prime[n] = !is_prime[n];
//
//			// n = 3 * x2 - y2;
//			n -= 2 * y2; // Оптимизация
//			if ((i > j) && (n <= limit) && (n % 12 == 11))
//				is_prime[n] = !is_prime[n];
//		}
//	}
//
//	// Отсеиваем кратные квадратам простых чисел в интервале [5, sqrt(limit)].
//	// (основной этап не может их отсеять)
//	for (i = 5; i <= sqr_lim; i++) {
//		if (is_prime[i]) {
//			n = i * i;
//			for (j = n; j <= limit; j += n) {
//				is_prime[j] = false;
//			}
//		}
//	}
//
//	// Вывод списка простых чисел в консоль.
//	printf("2, 3, 5");
//	for (i = 6; i <= limit; i++) {  // добавлена проверка делимости на 3 и 5. В оригинальной версии алгоритма потребности в ней нет.
//		if ((is_prime[i] == val) && (i % 3 != 0) && (i % 5 != 0)){
//			return 1;
//		} else {
//			return 0;
//	}
//}
//}
//
//
//int main(){
//	int n;
//	cin >> n;
//	if (IsPrime(n)) cout << "YES";
//	else cout << "NO";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int IsPrime(unsigned long n)
//{
//	S = []; 
//	S[1] = 0; // 1 - не простое число
//	// заполняем решето единицами
//	for(k=2; k<=n; k++)
//		S[k]=1;
//	
//	for(k=2; k*k<=n; k++){
//		// если k - простое (не вычеркнуто)
//		if(S[k]==1){ 
//			// то вычеркнем кратные k
//			for(l=k*k; l<=n; l+=k){
//				S[l]=0;
//				}
//			}
//		}
//	return S;
//}
//}
//
//
//int main(){
//	int n;
//	cin >> n;
//	if (IsPrime(n)) cout << "YES";
//	else cout << "NO";
//	return 0;
//}


//#include <iostream>
//#include <cmath>
//using namespace std;
//
//bool IsPointInSquare(float x, float y){
//	return (abs(x) <= 1 && abs(y) <= 0.5) || (abs(x) <= 0.5 && abs(y) <= 1);
//}При
//
//int main(){
//	float a, b;
//	cin >> a >> b;
//	if (IsPointInSquare(a, b) == true)cout << "YES";
//	else cout << "NO";
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//double distance(double a, double b, double c, double d){
//	double v = sqrt((a - c)*(a - c) + (b - d)*(b - d));
//	return v;
//}
//
//int main(void){
//	double m, n, x, z;
//	cin >> m >> n >> x >> z;
//	cout << distance(m, n, x, z);
//	return 0;
//}



//#include <iostream>
//
//using namespace std;
//
//int compare(int a, int b){
//	if (a < b) {
//		return a;
//	}
//	else {
//		return b;
//	}
//}
//
//int main(){
//	int m, n, x, z;
//	cin >> m >> n >> x >> z;
//	cout << compare(compare(m, n), compare(x, z));
//	return 0;
//}

//int fact(int n) {
//	if (n == 0){
//		return 1;
//	}
//	return n * fact(n - 1);
//}
//
//int cnk(int n, int k){
//	return fact(n) / (fact(k)*fact(n - k));
//}
//
//bool is_even(int n) {
//	return n % 2 == 0;
//}
//
//if (is_even(n)) {
//	cout << "EVEN";
//}
//else {
//	cout << "ODD";
//}

//#include <iostream>
//
//using namespace std;
//
//void rec(){
//	int n;
//	cin >> n;
//	if (n != 0){
//		rec();
//		cout << n;
//	}
//}
//
//int main(){
//	rec;
//	return 0;
//}



//#include <iostream>
//
//using namespace std;
//
//int gcd(int a, int b){
//	while (b != 0){
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	return a;
//}
//
//void reduce(int &a, int &b){
//	int c = gcd(a, b);
//	a /= c;
//	b /= c;
//}
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	reduce(n, m);
//	cout << n << " " << m;
//	return 0;
//}




//
//#include <iostream>
//
//using namespace std;
//
//int gcd(int a, int b){
//	while (b != 0){
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	return a;
//}
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	cout << gcd(n, m);
//	return 0;
//}



/*
#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{

	
	int n, m;
	cin >> n >> m;
	int counter = 0;
	int field[n][m];
		// initialization
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= m; j++) {
				field[i][j] = 0;
			}
		}
		
		// fill array
		for (int i = 0; i <= n; i++) {
			counter++;
			field[i][j] = counter++;
		}


		// output
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= m; j++) {
				cout << field[i][j];
			}
			cout << endl;
		}

	return 0;
}

*/
//#include <iostream>
//#include <iomanip>
//#include <stdio.h>
//
//using namespace std;
//
//int main()
//{
//	//setlocale(LC_ALL, "");
//	int n, m;
//	int counter = 0;
//	int counter2 = 0;
//	cin >> n >> m;
//
//	// ввод
//	int array_fill[30][30];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			array_fill[i][j] = 0;
//		}
//	}
//
//	// заполнение
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (((i + j) % 2) == 0) {
//				counter++;
//				array_fill[i][j] = counter;
//			}
//			else {
//				array_fill[i][j] = 0;
//			}
//		}
//	}
//
//	// вывод
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << setw(3) << array_fill[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int n, m;
//	cin >> n >> m;
//	int a[100][100];
//		//заполнение массива
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				a[i][j] = 1;
//			}
//		}
//		// обработка
//		int z = 2, g = 1, i = 0, j = 0;
//		while (g < n * m) {
//			for (i = 0; i < n; i++) {
//				for (j = 0; j < m; j++) {
//					if (i + j == g) {
//						a[i][j] = z;
//						z++;
//					}
//				}
//			}
//			g++;
//			if (a[n - 1][j - 1] != 1) {
//				break;
//			}
//		}
//		//вывод
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cout << setw(3) << a[i][j] << " ";
//			}
//			cout << endl;
//		}
//	return 0;
//}

//#include <iostream>
//#include <iomanip>
//#include <stdio.h>
//
//using namespace std;
//
//int main()
//{
//	//setlocale(LC_ALL, "");
//	int n, m;
//	int counter = 0;
//	cin >> n >> m;
//
//	// ввод
//	int array_fill[30][30];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			array_fill[i][j] = 0;
//		}
//	}
//
//	// заполнение
//	for (int i = 0; i < n; i++) {
//		if (i % 2 == 0) {
//			for (int j = 0; j < m; j++) {
//				counter++;
//				array_fill[i][j] = counter;
//			}
//		}
//		else {
//			for (int j = m - 1; j != -1; j--) {
//				counter++;
//				array_fill[i][j] = counter;
//			}
//		}
//	}
//
//	// вывод
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			//std::cout.width(2); std::cout << array_fill[i][j];
//			cout << setw(3) << array_fill[i][j] << " ";
//			//printf(" %4d", array_fill[i][j]);
//			//printf(" %4d", array_fill[i][j]);
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
//int main () {
//
//	int n, mark;
//	mark = 0; 
//	cin >> n;
//	vector <int> a;
//	vector <int> b;
//	//считывание
//	for (int i = 0; i < n; i++) {
//	      int temp;
//	      cin >> temp;
//	      a.push_back(temp);
//
//	      //cout << a[i] << " ";
//	      
//	}
//	//cout << endl;
//
//
//	//обработка
//	for (int j = 0; j < n; j++) { //j – начиная с какого номера ищем неповторный
//	    int another = j; //номер неповторяющегося элемента
//	    for (int i = j; i < n; i++) { //ищем только в еще не упорядоченной части
//	        if (a[j] != a[i]) {
//	        	cout << "a[j] = " << a[j] << " " << "a[i] = " << a[i] << endl;
//	        	if (mark != 1)
//	        	mark = 1;
//	        } else {
//	        	mark = 0;
//	        }
//
//
//		   
//	        }
//     if (mark != 0)
//	        {
//	    		b.push_back(a[j]);
//	    		mark = 0;
//	        }
//	}
//
//	for (int i = 0; i < b.size(); i++)
//	{
//		cout << b[i] << " ";
//	}
//
//	return 0;
//}


// #include <iostream>
// #include <vector>

// using namespace std;

// int main() // здесь что-то не правильно но принцип понятен
// {
//     int n;
//     cin >> n;
//     vectot <int> a;
	
// 	// ввод
//     for(int i = 0; i < n; i++)
//     {
//       cin >> a[i];
//     }

// 	// обработка
//     int r = 0;
//     for (int i = 0; i < n; i++)
//         for (int j = i + 1 ; j < n; j++) 
//         {
//         	if (a[i] == a[j]) 
//         	{
//         		r++;
//         	}
//         }
//     // вывод  
//         cout << r;
//         return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// int main () {

// 	int n, m;
// 	m = 0; 
// 	cin >> n;
// 	vector <int> a;
// 	//считывание
// 	for (int i = 0; i < n; i++) {
// 	      int temp;
// 	      cin >> temp;
// 	      a.push_back(temp);
	      
// 	}
// 	// обработка
// 	for (int i = (a.size() - 1); i != 0; i--) 
// 	{
// 		//cout << i << " " << endl;
// 		m = a[i];
// 		a[i] = a[i - 1];
// 		a[i - 1] = m;
		
// 	}
// 	// вывод
// 	for (int i = 0; i < a.size(); i++)
// 	{
// 		cout << a[i] << " ";
// 	}

// 	return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// int main () {

// 	int n, m;
// 	m = 0; 
// 	cin >> n;
// 	vector <int> a;
// 	//считывание
// 	for (int i = 0; i < n; i++) {
// 	      int temp;
// 	      cin >> temp;
// 	      a.push_back(temp);
	      
// 	}
// 	// обработка
// 	for (int i = (a.size() - 1); i != 0; i--) 
// 	{
// 		//cout << i << " " << endl;
// 		m = a[i];
// 		a[i] = a[i - 1];
// 		a[i - 1] = m;
		
// 	}
// 	// вывод
// 	for (int i = 0; i < a.size(); i++)
// 	{
// 		cout << a[i] << " ";
// 	}

// 	return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// int main () {

// 	int n, m;
// 	m = 0; 
// 	cin >> n;
// 	vector <int> a;
// 	//считывание
// 	for (int i = 0; i < n; i++) {
// 	      int temp;
// 	      cin >> temp;
// 	      a.push_back(temp);
	      
// 	}
// 	// обработка
// 	for (int i = 0; i < (a.size() - 1); i++) 
// 	{
// 		//cout << i << " " << endl;
// 		if (i%2 == 0){
// 			m = a[i];
// 			a[i] = a[i + 1];
// 			a[i + 1] = m;
// 		}
// 	}
// 	// вывод
// 	for (int i = 0; i < a.size(); i++)
// 	{
// 		cout << a[i] << " ";
// 	}

// 	return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// int main () {

// 	int n, m;
// 	m = 0; 
// 	cin >> n;
// 	vector <int> a;
// 	//считывание
// 	for (int i = 0; i < n; i++) {
// 	      int temp;
// 	      cin >> temp;
// 	      a.push_back(temp);
	      
// 	}
		
// 	for (int i = 0; i < a.size(); i++) 
// 	{
// 		if (a[i] != a[i + 1]){
// 			m++;
// 		}

// 	}

// 	cout << m;

// 	return 0;
// }



// #include <iostream>
// #include <vector>

// using namespace std;

// int main () {

// 	int n;
// 	cin >> n;
// 	vector <int> a;
// 	//считывание
// 	for (int i = 0; i < n; i++) {
// 	      int temp;
// 	      cin >> temp;
// 	      if (temp != 0) {
// 	            a.push_back(temp);
// 	      }
// 	}
		
// 	int num_min = 0;
// 	for (int i = 0; i < a.size(); i++) 
// 	{
// 		if (a[i] < a[num_min] && a[i]%2 != 0) {
// 			num_min = i;
// 		}
// 	}
	
// 	if (a[num_min]%2 != 0) 
// 	{
// 			cout << a[num_min];
// 	} else {
// 			cout << 0;
// 	}		

// 	return 0;

// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main () {

// int n;
// cin >> n;
// vector <int> a;
// //считывание
// for (int i = 0; i < n; i++) {
//     int temp;
//     cin >> temp;
//     if(temp > 0)
//     a.push_back(temp);
// }
// //обработка
// for (int j = 0; j < n; j++) { //j – начиная с какого номера ищем наименьший
//     int num_min = j; //номер минимального элемента
//     for (int i = j; i < n; i++) { //ищем только в еще не упорядоченной части
//         if (a[i] < a[num_min]) {
//             num_min = i;
//         }
//     }
//     //обмен значений элементов a[j] и a[num_min]
//     int temp; 
//     //if (a[j])
//     temp = a[j];
//     a[j] = a[num_min];
//     a[num_min] = temp;
//     cout << a[j] << " a num_min" <<  endl ;
// }
// //вывод
// //cout << a.size() << endl;
//    cout << a[0];
//    cout << a[1];
//    cout << a[2];
//    cout << a[3];
//    cout << a[5];
   
//    return 0;
// }



/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, inp;
    cin >> n;
    vector <int> a(n);
   
    // Заполняем вектор числами //
    for (int i=0; i<n; i++)
    {
        cin >> inp;
        a[i] = inp;
    }
   
    // Проверка //
    for (int i=1; i<n; i++)
    {
        if (a[i]>=0 && a[i-1]>=0)
        {
            if (a[i]>=a[i-1]) //выводим в порядке неубывания
            {
                cout << a[i-1] << " " << a[i];
            }
            else
            {
                cout << a[i] << " " << a[i-1];
            }
            break; //прерываем цикл, если пар больше одной
        }
        else if (a[i]<0 && a[i-1]<0)
        {
            if (a[i]>=a[i-1]) //выводим в порядке неубывания
            {
                cout << a[i-1] << " " << a[i];
            }
            else
            {
                cout << a[i] << " " << a[i-1];
            }
            break;
        }
    }
}*/

/*#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	int mark = 0;
	cin >> n;
	vector  <int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	for (int i = 1; i < n; ++i){
		if (a[i] > 0 && a[i + 1] > 0 || a[i] < 0 && a[i + 1] < 0){
			if (mark == 0) {
				cout << a[i] << " " << a[i + 1] << " ";
				mark = 1;
			}
		}
			
	}
	return 0;
}*/



// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
// 	int n, m;
// 	m = 0;
// 	cin >> n;
// 	vector  <int> a(n);
// 	for (int i = 0; i < n; i++)
// 		cin >> a[i];
	
// 	for (int i = 1; i < n; ++i){
// 		if (a[i - 1] < a[i]){
// 			cout << a[i] << " ";
// 		}
// 	}
// 	return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
// 	int n, m;
// 	m = 0;
// 	cin >> n;
// 	vector  <int> a(n);
// 	for (int i = 0; i < n; i++)
// 		cin >> a[i];
	
// 	for (int i = 0; i < n; ++i){
// 		if (a[i] > 0){
// 			m++;
// 		}
// 	}
// 		cout << m;
// 	return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin >> n;
// 	vector  <int> a(n);
// 	for (int i = 0; i < n; i++)
// 		cin >> a[i];
	
// 	for (int i = 0; i < n; ++i )
// 		if (a[i] % 2 == 0){
// 			cout << a[i] << " ";
// 		}
// 	return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin >> n;
// 	vector  <int> a(n);
// 	for (int i = 0; i < n; i++)
// 		cin >> a[i];
	
// 	for (int i = 0; i < n; i = 2+i )
// 		cout << a[i] << " ";
// 	return 0;
//}