#include<stdio.h>
#include<string.h>
 
#define gfg 7
#if gfg > 200
   #undef gfg
   #define gfg 200
#elif gfg < 50
   #undef gfg
   #define gfg 50
#else
   #undef gfg
   #define gfg 100
#endif
 
int main()
{
    printf("%d",gfg);  // gfg = 50
}    




/*
struct emp
{
    int id;
    char name[20];
    int sal;
};

union empl
{
    int id;
    char name[20];
    int sal;
};

void main()
{
    struct emp e={1,"Unisoft",155500};
    union empl ee={2,"Corner",156600};

    printf("struct = %d",sizeof(e));
    printf("\nunion = %d",sizeof(ee));

    printf("\nstruct:\nid=%d,name=%s,salary=%d",e.id,e.name,e.sal);
    
    //strcpy(ee.name,"corner");

    printf("name = %s",ee.name);
    printf("\nunion: \nid=%d,name=%s,salary=%d",ee.id,ee.name,ee.sal);





}
*/

