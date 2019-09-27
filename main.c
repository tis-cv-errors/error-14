int division_by_zero(void)
{
    int a,b,c;
    
    a = 2;
    b = 0;
    
    c = a/b;

    return c;
}

int division_overflow(void)
{
    int a,b,c;
    
    a = -2147483648;
    b = -1;
    
    c = a/b;

    return c;
}

