/**
* _isupper - checks for uppercase character
*
* @c: first interger argument
*
* Return: return 1 if a character is uppercase.
*/
int _isupper(int c)
{
	int _isupp;

	_isupp = 0;
	if (c >= 65 && c <= 91)
	{
		_isupp = 1;
	}

	return (_isupp);
}
