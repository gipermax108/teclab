#include <stdio.h>

int big(int x, int y)
{
if (x>y) return x;
else return y;
}

int main()
{
int x=12, y=2, z=3, kek;

kek=big(x, big(y,z));

if (kek==x && (y+z)<x) printf("%d", x);
else if (kek==y && (x+z)<y) printf("%d", y);
else if (kek==z && (y+x)<z) printf("%d", z);

else
{
if (kek==x) printf("%d", (y+z)-x);
else if (kek==y) printf("%d", (x+z)-y);
else if (kek==z) printf("%d", (y+x)-z);

}

return 0;
}
