#include <stdio.h>

int main(void)
{
    const char carnage[7] = "CARNAGE";
    const unsigned char carnage_size = 7;
    for (unsigned char i = 0; i < carnage_size; i++)
    {
        for (unsigned char j = 0; j < carnage_size-1; j++)
        {
            printf("%c \t", carnage[i+j]);
        }
        printf("\n");
    }
    return 0;
}