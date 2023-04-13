/**
 * wildcmp - compares two strings
 *
 * @s1: the first string
 * @s2: the second string, which can contain the wildcard character *
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)));

	if (*s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
