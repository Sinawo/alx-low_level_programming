/**
 * _isdigit - determine if ch is adigit
 *
 * @ch:comparison character
 *
 * Return: bool type
 */
int _isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}
