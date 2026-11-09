#include <stdio.h>
#include <windows.h>

int main(void)
{
    int i;

    while (1)
    {
        /* East-West is green; North-South is red. */
        for (i = 10; i > 0; i--)
        {
            printf("East-West: Green %d s | North-South: Red %d s\n", i, i + 3);
            Sleep(1000);
        }

        /* East-West is yellow; North-South is still red. */
        for (i = 3; i > 0; i--)
        {
            printf("East-West: Yellow %d s | North-South: Red %d s\n", i, i);
            Sleep(1000);
        }

        /* North-South is green; East-West is red. */
        for (i = 10; i > 0; i--)
        {
            printf("North-South: Green %d s | East-West: Red %d s\n", i, i + 3);
            Sleep(1000);
        }

        /* North-South is yellow; East-West is still red. */
        for (i = 3; i > 0; i--)
        {
            printf("North-South: Yellow %d s | East-West: Red %d s\n", i, i);
            Sleep(1000);
        }
    }

    return 0;
}
