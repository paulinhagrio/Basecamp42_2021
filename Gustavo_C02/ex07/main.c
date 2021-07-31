#include <stdio.h>
char *ft_strupcase(char *str);

void test(char *str)
{
    printf("Texto enviado:\n%s\n",str);
    char *r = ft_strupcase(str);
    printf("Resultado:\n%s\n",r);
}

int main()
{
    char a[] = "abcde";
    char b[] = "abc5de";
    char c[] = "a!bcde";
    char d[] = "abcZe";
    char e[] = "";
    char f[] = {'3','a',8,'c','\0'};
    printf("***ex07***\n\n");

    printf("Teste 1:\n\n");
    test(a);

    printf("\n\nTeste 2:\n\n");
    test(b);

    printf("\n\nTeste 3:\n\n");
    test(c);

    printf("\n\nTeste 4:\n\n");
    test(d);

    printf("\n\nTeste 5:\n\n");
    test(e);

    printf("\n\nTeste 6:\n\n");
    test(f);

    printf("\n*********\n");
    return (0);
}
