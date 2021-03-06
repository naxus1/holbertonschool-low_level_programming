/**
 * _strspn - Entry point
 *@s: String to search
 *@accept: string to comparate
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, crash, contneg, sizeCompa;
	unsigned int cont;

	cont = 0;
	crash = 0;
	contneg = 0;

	for (sizeCompa = 0; accept[sizeCompa] != 0; sizeCompa++)
	{}

	for (i = 0; s[i] != '\0' && crash == 0; i++)
	{
		contneg = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cont++;
			}
			else
				contneg++;
		}

		if (contneg == sizeCompa)
		{
			crash = 1;
		}
	}

	return (cont);
}
