/**
  *print_name - use function pointer to print a name
  *@name: pointer to adresse of name
  *@f: pointer fo function that prints a name
  *
  *Return: void.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
