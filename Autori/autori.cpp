#include <bits/stdc++.h>
using namespace std;

int main() {
	char input[101];
	cin >> input;
	char * pch;
	pch = strtok(input,"-");
	while(pch != NULL) {
		printf("%c",pch[0]);
		pch = strtok(NULL,"-");
	}
	printf("\n");
}