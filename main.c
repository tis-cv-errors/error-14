int division_by_zero(void)
{
    int a,b,c;
    
    a = 2;
    b = 0;
    
    a=a+b;
    a=a+2*b;
    a=a+3*b;
    a=a+4*b;
    a=a+5*b;
    a=a+6*b;
    a=a+7*b;
   
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

int signed_overflow(void)
{
    int a,b,c;
    
    a = 2147483648;
    b = 2147483648;
    
    c = a + b;

    return c;
}
