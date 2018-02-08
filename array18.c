#include<stdio.h>
main()

{
     int a[15],i,n;

     printf("masukkan jumlah array : ");

     scanf("%d",&n);

     printf("masukkan data :\n");

     for(i=1;i<=n;i++)

          scanf("%d",&a[i]);

     getchar();

     printf("kode tersebut dikonversi akan menjadi :\n");

     for(i=1;i<=n;i++)

          printf("%c",a[i]);

     getchar();
     return 0;
}
