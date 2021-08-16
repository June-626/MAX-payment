#include <iostream>
using namespace std;
int a[99], b;
void GreedyChoose(int len, int* s, int* f, bool* flag);
int main(int argc, char* argv[])
{
	int s[99];
	int f[99];
	int pay[99]={0};
	int Tol_time;
	cout << "enter the total time number:";
	cin >> Tol_time;
	for (int n=0;n < Tol_time; n++)
	{
	cout << "enter the start time:";
	cin >> s[n];
	cout << "enter the stop time:";
	cin >> f[n];
	cout << "enter the payment:";
	cin >> pay[n];
	}
	for (int c = 0; c < 99; c++)
	{
		a[c]=pay[c];
	}
	bool mark[99] = { 0 };
	GreedyChoose(Tol_time, s, f, mark);
	for (int i = 0; i < Tol_time; i++)
		if (mark[i])
			cout << i << " ";
			cout <<"total pay is:"<<b;
	system("pause");
	return 0;
}

void GreedyChoose(int len, int* s, int* f, bool* flag)
{
	flag[0] = true;
	int j = 0;
	for (int i = 1; i < len; ++i)
		if (s[i] >= f[j])
		{
			flag[i] = true;
			j = i;
			b+= a[i];
		}
}