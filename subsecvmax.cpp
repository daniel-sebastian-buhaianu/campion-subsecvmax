#include <fstream>
using namespace std;
int main()
{
	ifstream f("subsecvmax.in");
	int n, x;
	f >> n >> x;
	int lg=1, poz=1, lgmax=1, pozmax=1;
	for (int i = 2; i <= n; i++)
	{
		int y;
		f >> y;
		if (y >= x) lg++;
		else
		{
			if (lg > lgmax) lgmax = lg, pozmax = poz;
			lg = 1, poz = i;
		}
		x = y;
	}
	if (lg > lgmax) lgmax = lg, pozmax = poz;
	f.close();
	ofstream g("subsecvmax.out");
	g << pozmax << ' ' << lgmax;
	g.close();
	return 0;
}

