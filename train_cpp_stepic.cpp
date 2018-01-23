#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector  <int> a(n);
	// reading
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	// cout << n << endl;
	// processing and out
	for (int i = 0; i < n; i = 2+i )
	{
		cout << a[i] << " ";
		// cout << "i = " << i << " ";
		// cout << "a[" << a[i] << "]" << endl;
		
	}

	return 0;
}



/*#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector  <int> a;

	// reading
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		a.push_back(temp);
		
	}

	// processing
	for (int j = 0; j < n; j++)
	{
		int num_min = j;
		for (int i = j; i < n; i++)
		{
		if (a[i] < a[num_min])
			num_min = i;

		}
		// elements changing
		int temp;
		temp = a[j];
		a[j] = a[num_min];
		a[num_min] = temp;
	}

	// out
	for ( auto now : a)
	{
		cout << now << " ";
	}

	return 0;
}*/



/*#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector  <int> a;
	// reading
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		a.push_back(temp);
		
	}
	// processing
	int num_min = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[num_min])
			num_min = i;

	}
	int temp;
	temp = a[0];
	a[0] = a[num_min];
	a[num_min] = temp;

	// out
	for ( auto now : a)
	{
		cout << now << " ";
	}

	return 0;
}*/





/*#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector  <int> a;
	// reading
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		if (temp > 0)
		{
			a.push_back(temp);
		}
	}
	// processing and out
	for (int i = a.size() - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}

	return 0;
}*/




/*#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector  <int> a(n);
	// reading
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	// processing and out
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}

	return 0;
}*/



/*#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		cout << i << " ";
	}
	return 0;
}*/


/*#include <iostream>
using namespace std;

int main ()
{
	int i = 1;
	while (i <= 100)
	{
		cout << i << " ";
		i = i + 1;
	}
	return 0;
}*/