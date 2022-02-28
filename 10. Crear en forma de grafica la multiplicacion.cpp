#include <iostream>
using namespace std;

int main()
{
    int num1;
	int num2;
	int a;
	int b;
	int d;
	int e; 
	int f;

    printf("Ingrese numero 1\n");
    scanf("%i",&num1);
    printf("Ingrese numero 2\n");
    scanf("%i",&num2);

    printf("          %i\n ",num1);
    printf("         %i ""X\n",num2);
    printf("        ""-------\n");

    if (num2<99)
    {
    a=num2%100/10;
    b = num2%10/1;
	d = b*num1;    
        printf("         %i\n",d);
         e= a*num1;
    printf("        %i\n",e);
    printf("      ""-------\n");
    f = num1 * num2;
    printf("       %i\n ",f);
    }
    system("pause");
    return 0;
}
