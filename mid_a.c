
int mid(int m, int *a, int alen)
{
	int i;

	i = 0;
	while (i < alen)
	{
		if (a[i] < m)
			return (0);
		i++;
	}
	return (1);
}
