//#include <time.h>
#include <stdio.h>
int main()
{
    const time_t* p = (const time_t*) 0;//&hdr.ts.tv_sec;
    char* str = ctime(p);
    printf("%s", str);
}

