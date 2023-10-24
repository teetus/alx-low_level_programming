/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character
 *
 * Return: pointer to first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; *s; a++)
	{
		if (*(s + a) == c)
			return (s + a);
		if (*(s + a) == '\0')
			break;
	}
	return ('\0');
}
