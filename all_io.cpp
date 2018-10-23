#include <bits/stdc++.h>
#include <cstdio>

using namespace std;


int main() {
	int a, b;
	while (scanf("%d %d", &a, &b), (a || b)) {
		printf("%d\n", a + b);
	}


}
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main() {
	int a, b;
	while (scanf("%d %d", &a, &b) == 2)
		printf("%d\n", a + b);

}
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {

	int a, b, c=1;
	while (scanf("%d %d", &a, &b) != EOF) 
		printf("Case %d: %d\n\n", c++, a + b);


}
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main() {
	int a, b, c = 1;
	while (scanf("%d %d", &a, &b) != EOF) {
		if (c > 1) printf("\n");
		printf("Case %d: %d\n", c++, a + b);
	}


	return 0;
}
#include <bits/stdc++.h>
#include <cstdio>

int main() {
	int k, ans, v;
	while (scanf("%d", &k) != EOF) {
		ans = 0; 
		while (k--) { scanf("%d", &v); ans += v; }
		printf("%d\n", ans);
	}
}
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
	int TC, a, b;
	scanf("%d", &TC);
	while (TC--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

}
