#include <stdio.h>
#include <windows.h>

#define GREEN_SECONDS 10
#define YELLOW_SECONDS 3
#define RED_SECONDS (GREEN_SECONDS + YELLOW_SECONDS)

/* Run one direction through green, then yellow, while the other stays red. */
static void run_direction(const char *green_direction, const char *red_direction)
{
    int remaining;

    for (remaining = RED_SECONDS; remaining > 0; --remaining) {
        if (remaining > YELLOW_SECONDS) {
            printf("%s: GREEN (%2d s) | %s: RED (%2d s)\n",
                   green_direction, remaining - YELLOW_SECONDS,
                   red_direction, remaining);
        } else {
            printf("%s: YELLOW (%2d s) | %s: RED (%2d s)\n",
                   green_direction, remaining,
                   red_direction, remaining);
        }

        fflush(stdout);
        Sleep(1000);
    }
}

int main(void)
{
    puts("Two-direction traffic light simulation (press Ctrl+C to stop)");

    for (;;) {
        run_direction("East-West", "North-South");
        run_direction("North-South", "East-West");
    }

    return 0;
}
