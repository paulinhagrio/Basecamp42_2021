#include <unistd.h>

int main()
{
	char c;
for (c = 'A'; c <= 'Z'; c++)
{
	write(1, &c, 1);
}
return 0;

}