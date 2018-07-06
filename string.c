#include <stdio.h>

int my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
   printf("Edited in het.shah system");
<<<<<<< HEAD

	printf("sdghsdhfhsgf")
=======
 
   printf("Nice friends with nice work :");
 
	printf("EDIted for Conflict CHeck");
 
>>>>>>> 8106b9df4cc70498827723695b884ba12cd4f934

   return 0;
}