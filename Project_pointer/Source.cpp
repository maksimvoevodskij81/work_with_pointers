#include<iostream>
#include<time.h>
#include<string>
using namespace std;
int main()
{
	int const cof = 110;
	const int* pcof = &cof;
	int weight = 78;
	int height = 178;
	int idealWeight;
	int* pweight = &weight;
	int** ppweight = &pweight;
	int* pheight = &height;
	int** ppheight = &pheight;
	int* pidealWeight = &idealWeight;
	int** ppidealWeight = &pidealWeight;
	int*** pppidealWeight = &ppidealWeight;
	int*** pppheight = &ppheight;
	int*** pppweight = &ppweight;
	***pppidealWeight = ***pppheight - cof;
	if (**ppidealWeight > * *ppweight)
		cout << " You need to gain weight - " << ***pppidealWeight - ***pppweight << endl;
	else
		cout << " You need to lose weight - " << ***pppweight - ***pppidealWeight << endl;
}
