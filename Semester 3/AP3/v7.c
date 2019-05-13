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
    *p = 10;
    *p = 200;
    p = &harga[2]; 
    *p = 300; 
    *(p+1) = 400; 

    for (n=0; n<4; n++)
    {
         printf ("harga [%d] = %d\n ",n,harga[n]);
    }
    getchar();
}

