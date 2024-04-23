#include <iostream>
using namespace std;
class multi
{
	vector <vector <int> > a;

	public :
	void input ()
	{
		int n;
		cin >> n;
		for(int i = 0;i<n;i++)
		{
			int n;
			cin >> n;
			a.push_back(vector<int>());
			for(int j = 0;j<n;i++)
			{
				int x;
				cin >> x;
				a[i].push_back(x);
			}
		}
	}
	void output()
	{
		for(int i = 0;i<a.size();i++)
		{
			for(int j = 0;j<a[i].size();j++)
			{
				cout << a[i][j];
			}
		}
	}
	friend multi multiply(multi a)
	{
		multi m;
		for(int i = 0;i<a.size();i++)
		{
			for(int j = 0;j<a.size();i++)
			{
				m.a[i][j] = a.a[j][i];
			}
		}
		return m;
	}
};
int main()
{
	multi matrix1,matrix2;
	matrix1.input();
	matrix1.output();
	matrix2 = multiply(matrix1);
	matrix2.output();
}

