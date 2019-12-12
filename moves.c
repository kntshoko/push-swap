

void swap(int *a, int len)
{
    int temp;

    if(len > 1)
    {
        temp = a[0];
        a[0] = a[1];
        a[i] = temp;
    }
}

void push(int *a, int *alen, int *b, int *blen)
{
    int j;
    int i;

    j = -1;
    if (*alen > 0)
    {
        temp = a[0];
        while(((j++) + 1) < *alen)
        a[j] = a[j + 1];
        i = *blen;
        while(i > 0)
        {
            b[i] = b[i - 1];
            i--;
        }
        b[0] = temp;
    }
    *alen -= 1;
    *blen += 1;
}

void rot(int *a, int i)
{
    int j;
    int temp;

    j = 1;
    if(i > 0)
    {
        temp = a[0];
        while (j < i)
        {
            a[j - 1] = a[j];
            j++;
        }
        a[j - 1] = temp;
    }
}

void revrot(int *a, int i)
{
    int temp;
    
    i -= 1;
    if (i >= 1)
    {
        while(i > 0)
        {
            temp = a[i];
            i--;
        }
        a[0] = temp;
    }
}