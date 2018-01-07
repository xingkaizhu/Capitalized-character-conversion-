#include <stdio.h>
int main()
{ char m;
scanf("%c",&m);
if((m<='z')&&(m>='a'))
{m=m-32;
printf("%c",m);
}
else if((m<='Z')&&(m>='A'))
{m=m+32;
printf("%c",m);
}
else printf("error");





return 0;
}
