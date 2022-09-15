/**
* _isdigit - checks for a digit (0 through 9).
*
* @c: first interger argument
*
* Return: return 1 if the number is a digit.
*/
int _isdigit(int c)
{
	int _isdig;

	_isdig = 0;
	if (c >= 48 && c <= 57)
	{
		_isdig = 1;
	}

	return (_isdig);
}
