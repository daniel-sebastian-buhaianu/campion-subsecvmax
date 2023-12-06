#include <fstream>
using namespace std;
int main()
{
	ifstream f("subsecvmax.in");
	int n;
	f >> n;
	int prec = -2000000, lg = 0, lgmax = 0, imax, i;
	for (i = 1; i <= n; i++)
	{
		int x;
		f >> x;
		if (x > prec) lg++;
		else
		{
			if (lg > lgmax)
			{
				lgmax = lg;
				imax = i-lg;
			}
			lg = 1;
		}
		prec = x;
	}
	if (lg > lgmax)
	{
		lgmax = lg;
		imax = i-lg;
	}
	f.close();
	ofstream g("subsecvmax.out");
	g << imax << ' ' << lgmax;
	g.close();
	return 0;
}

