#include <stdio.h>
#include <conio.h>
main()
{
clrscr();
 int age, gr_level;
 char name[24], gender[10], section[15];

 printf("Name: ");
 scanf("%s", name);
 printf("Age: ");
 scanf("%d", &age);
 printf("Gender: ");
 scanf("%s", gender);
 printf("Grade: ");
 scanf("%d", &gr_level);
 printf("Section: ");
 scanf("%s", section);

 printf("\n\nHere's your information");
 printf("\n\nName: %s\n", name);
 printf("Age: %d\n", age);
 printf("Gender: %s\n", gender);
 printf("Grade: %d\n", gr_level);
 printf("Section: %s\n", section);
getch();
return 0;
}