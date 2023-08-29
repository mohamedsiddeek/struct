#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("Hello world!\n");
    typedef struct {
    unsigned int std_id;
    char name[20];
    int degree;

    }std;
    std st;
    st.degree=30;
    strcpy(st.name,"mohamed siddek");
    printf("degree =%i\n",st.degree);
     printf("name =%s\n",st.name);
    return 0;
}
