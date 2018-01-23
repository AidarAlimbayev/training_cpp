#include <iostream>
#include <vector>

using namespace std;

int main () {

	int n, mark;
	mark = 0; 
	cin >> n;
	vector <int> a;
	vector <int> b;
	//считывание
	for (int i = 0; i < n; i++) {
	      int temp;
	      cin >> temp;
	      a.push_back(temp);

	      //cout << a[i] << " ";
	      
	}
	//cout << endl;


	//обработка
	for (int j = 0; j < n; j++) { //j – начиная с какого номера ищем неповторный
	    int another = j; //номер неповторяющегося элемента
	    for (int i = j; i < n; i++) { //ищем только в еще не упорядоченной части
	        if (a[j] != a[i]) {
	        	cout << "a[j] = " << a[j] << " " << "a[i] = " << a[i] << endl;
	        	if (mark != 1)
	        	mark = 1;
	        } else {
	        	mark = 0;
	        }


		   
	        }
     if (mark != 0)
	        {
	    		b.push_back(a[j]);
	    		mark = 0;
	        }
	}

	for (int i = 0; i < b.size(); i++)
	{
		cout << b[i] << " ";
	}

	return 0;
}


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