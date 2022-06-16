#define LIMITE 35000
int main ()
{
   int i, j, primo, num;
   printf ("Introduzca numero: ");
   scanf ("%d", &num);
   i = num + 1;
   do
   {
      primo = 1;
      for (j = 2; j <= i/2 && primo; j++) 
         if((i%j) == 0) 
            primo = 0;
      if (primo) 
         printf("%d\n", i);    
      i++;    
   }while ( i < LIMITE && !primo);
   system("pause");
   return 0;
}
 