#include <stdio.h>
#include <string.h>
int main() {
   char s1[100], s2[100];
   int cont1[256] = {0}, cont2[256] = {0};
   int i, perm = 1;
   printf("Digite a primeira cadeia: ");
   scanf("%s", s1);
   printf("Digite a segunda cadeia: ");
   scanf("%s", s2);
   if (strlen(s1) != strlen(s2)) {
       printf("NAO e permutacao.\n");
       return 0;
   }
   for (i = 0; s1[i] != '\0'; i++) cont1[(int)s1[i]]++;
   for (i = 0; s2[i] != '\0'; i++) cont2[(int)s2[i]]++;
   for (i = 0; i < 256; i++) {
       if (cont1[i] != cont2[i]) {
           perm = 0;
           break;
       }
   }
   if (perm) printf("E permutacao!\n");
   else       printf("NAO e permutacao.\n");
   return 0;
}
