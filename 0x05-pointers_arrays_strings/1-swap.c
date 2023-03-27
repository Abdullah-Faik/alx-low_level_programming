/**
 * swap_int - swap a and b
 * @a: recive number
 * @b: recive number
*/
void swap_int(int *a, int *b)
{
	int c; 
	c = *a;
	*a = *b;
	*b = c;
}