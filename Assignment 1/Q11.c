#include<stdio.h>
#include<limits.h>

int main()
{
short s;
unsigned short us;
char c;
unsigned char uc;
printf("%s\t\t%s\t%s\t%s\n","Data Type","Size","Formate Specifier","Range");
printf("%s\t\t%d\t%s\t\t\t%hd to %hd\n","short int",sizeof(s),"%hd",SHRT_MIN,SHRT_MAX);

printf("%s\t%d\t%s\t\t\t%hu to %hu\n","unsigned short int",sizeof(us),"%hu",0,USHRT_MAX);

printf("%s\t\t\t%d\t%s\t\t\t%d to %d\n","char",sizeof(c),"%c",SCHAR_MIN,SCHAR_MAX);
printf("%s\t\t%d\t%s\t\t\t%d to %d\n","unsigned char",sizeof(uc),"%c",0,UCHAR_MAX);
printf("%s\t\t\t%d\t%s\t\t\t%d to %d\n","int",sizeof(int),"%d",INT_MIN,INT_MAX);
printf("%s\t\t%d\t%s\t\t\t%d to %lu\n","unsigned int",sizeof(unsigned int),"%u",0,UINT_MAX);

printf("%s\t\t%d\t%s\t\t\t%ld to %ld\n","long int",sizeof(long),"%ld",LONG_MAX,LONG_MIN);
printf("%s\t%d\t%s\t\t\t%d to %lu\n","unsigned long int",sizeof(unsigned long),"%lu",0,ULONG_MAX);

return 0;

}

