main ()
{
    int n;
    int harga[4];

for (n=0; n<4; n++)
    {
        harga[n]=0;
    } 

int *p;
    p = harga; 
    *p = 50;
    *p = 100;
    p = &harga[1]; 
    *p = 200; 
    *(p+2) = 300; 

    for (n=0; n<4; n++)
    {
        printf ("%d, ", harga[n]);
    }
    fflush(stdin);
    getchar();
}

