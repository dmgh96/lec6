#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include <stdio.h>

// '*'는 포인터 연산자 (포인터 선언)
// '&'은 주소연산자 (메모리 주소를 찾아낸다.)


//int a = 100; // DATA 영역 
//int b = 100; // DATA 영역 

/*int main() {
    
    char ch = 'A';
    char* pch = NULL;

    int num = 10;
    int* pnum = NULL;

    printf("%u %u %u %u\n",
        sizeof(ch),
        sizeof(pch),
        sizeof(num),
        sizeof(pnum)
    );

    printf("%u %u %u %u\n\n",
        sizeof(int*),
        sizeof(double*),
        sizeof(char*),
        sizeof(short*));

    printf("%p %p\n", &ch, ch);


    return 0;
}
*/
/*
int main() {

    char _ch = 10;
    char* ch = NULL;
    char* ch2 = NULL;

    ch = &_ch;
    ch2 = &_ch;

    printf("ch = %d, ch2 = %d, _ch = %d\n", *ch, *ch2, &_ch);

    *ch2 = 99;
    printf("ch = %d, ch2 = %d, _ch = %d\n", *ch, *ch2, &_ch);

    return 0;

 }
 */

    /*
    int* np = NULL;
    int num = 10;

    np = &num;
    printf("%d\n", *np);

    *np = 100;
    printf("*np = %d\n", *np);
    printf("num = %u\n", *&num);

        return 0;
        */
    
    /*
    int num = 10;
    int c = 'A';

    int* np = &num;
    char* cp = &c;

    void* ptr = NULL;

    ptr = np;
    ptr = cp;

    printf("%c\n", *(char *) ptr);

    return 0;
    */

/*
    void func(int* i);
    int* funcB(int i);

    int main() {

        int a = 10;
        int* b = NULL;

        b = funcB(a);
        printf("%d\n", *b);

        

        return 0;

    }

    int* funcB(int i) {
        i = i + 1;
        return &i;
    }

    void func(int* i) {
        *i = *i + 1;
        return;
    }
    */
/*
int main(void) {

    int* p = NULL;
    p = (int*)malloc(sizeof(int)); 

    if (p == NULL)
    {
        printf("힙 영역에 동적 메모리 할당 실패\n");
    }

    *p = 10;

    printf("주소 : %p\n", p);
    printf("값 : %d\n", *p);

    free(p); 

    return 0;
}
*/

int main(void)
{
    int s = 0, i = 0;
    int* p = NULL;

    s = 3;
    p = malloc(s * sizeof(int));

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    for (i = 0; i < s; i++)
    {
        printf("p[%d] = %d\n", i, p[i]);
    }

    printf("--------------\n");

    s = 5;
    p = realloc(p, s * sizeof(int));  // int 5개 크기 메모리 재할당
    p[3] = 40;
    p[4] = 50;

    for (i = 0; i < s; i++)
    {
        printf("p[%d] = %d\n", i, p[i]);
    }

    printf("--------------\n");

    s = 2;
    p = realloc(p, s * sizeof(int));  // int 2개 크기 메모리 재할당
   

    for (i = 0; i < s; i++)
    {
        printf("p[%d] = %d\n", i, p[i]);
    }


    free(p);
    return 0;
}