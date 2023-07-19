/**
 * int_index - search engine for an intger
 * @array: integer array
 * @size: indexed number of array elements
 * @cmp: pointing to a search engine function
 * Return: label of first element
 * Return -1 if not found or if size is less than or equal to zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	result = -1;
	if (array && cmp)
	{

		if (size <= 0)
		{
			return (result);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				result = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (result);
			}
		}

	}
	return (result);
}
