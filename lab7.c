int max, min;
for(int j=0; j<m; j++)
{
    max=a[0][j];
    for(i=1; i<n; i++)
        if(a[i][j]>max)
            max=a[i][j];
    if(j==0)
        min=max;
    else
    {
        if(min>max)
            min=max;
    }
}