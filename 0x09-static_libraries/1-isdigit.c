#include "main.h"
/**
*_isdigit - confirm if input is a number
*@c: test case
*Return: if its number return 1,else 0.
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
else
return (0);
}
