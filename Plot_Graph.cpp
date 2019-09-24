#include<iostream>
#include<time.h>
#include<string>
#include<iomanip>
using namespace std;
void display(int a[5][6]);
void call_graph(string graph[5][6]);

int main()
{
	srand(time(NULL));
	int a[5][6];
	string graph[5][6];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			a[i][j] = rand() % 10;
			if (a[i][j] != 0)
			{
				graph[i][j] = "*";
			}
			else
			{
				graph[i][j] = " ";
			}
		}
	}
	display(a);
	call_graph(graph);
	return 0;
}

void display(int a[5][6])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << a[5][6] << endl;
		}
	cout << endl;
	}
}

void call_graph(string graph[5][6])
{
	cout << "---------------display----------------" << endl;
	cout << "\t0\t1\t2\t3\t4\t5" << endl;
	cout << "--------------------------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i << "|" << endl;
		for (int j = 0; j < 6; j++)
		{
			cout << graph[i][j];
		}
	cout << endl;
	}
}