#include <stdio.h>
#include <unistd.h>

int main()
{
    char buf[20];
    int idx;

    read(0, buf, 100);  //bof
    scanf("%s", buf);   //bof
    printf("%s", buf);  //leak
    printf(buf);        //fsb

    scanf("%d", &idx);
    buf[idx] = 'A';     //oob;
}