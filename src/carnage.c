#include <stdio.h>

int main(void)
{
    const char carnage[7] = "CARNAGE";
    const int carnage_size = sizeof(carnage) / sizeof(carnage[0]);
    for (int i = 0; i < carnage_size; i++)
    {
        for (int j = 0; j < carnage_size; j++)
        {
            printf("%c \t", carnage[i+j]);
        }
        printf("\n");
    }
    return 0;
}