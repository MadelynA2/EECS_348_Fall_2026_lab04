/*
 * Name: Madelyn Armitage
 * KUID: 3190813
 * Lab Session: Thursday at 11
 * Lab Assignment: Lab 3 - Task 1
 * Program Description:
 *     This program asks the user to enter an NFL football score and
 *     determines all possible combinations of touchdowns with two-point
 *     conversions, touchdowns with extra points, touchdowns without an
 *     extra point, field goals, and safeties that could produce the
 *     entered score. The program continues accepting scores until the
 *     user enters 1 to stop.
 */

#include <stdio.h>

int main()
{
    int score;
    char input[100];
    char extra;

    printf("Enter the NFL score (Enter 1 to stop): ");

    while (1)
    {
        fgets(input, sizeof(input), stdin);

        if (sscanf(input, "%d %c", &score, &extra) == 1)
        {
            break;
        }

        printf("Invalid input. Please enter an integer.\n");
        printf("Enter the NFL score (Enter 1 to stop): ");
    }

    while (score < 0)
    {
        printf("Invalid score. Please enter a non-negative score.\n");

        while (1)
        {
            fgets(input, sizeof(input), stdin);

            if (sscanf(input, "%d %c", &score, &extra) == 1)
            {
                break;
            }

            printf("Invalid input. Please enter an integer.\n");
            printf("Enter the NFL score (Enter 1 to stop): ");
        }
    }

    while (score != 1)
    {
        printf("Possible combinations of scoring plays if a team’s score is %d:\n", score);

        for (int td2 = 0; td2 <= score / 8; td2++)
        {
            for (int td1 = 0; td1 <= score / 7; td1++)
            {
                for (int td = 0; td <= score / 6; td++)
                {
                    for (int fg = 0; fg <= score / 3; fg++)
                    {
                        for (int safety = 0; safety <= score / 2; safety++)
                        {
                            if ((td2 * 8) + (td1 * 7) + (td * 6) +
                                (fg * 3) + (safety * 2) == score)
                            {
                                printf("%d TD + 2pt, %d TD + FG, %d TD, "
                                       "%d 3pt FG, %d Safety\n",
                                       td2, td1, td, fg, safety);
                            }
                        }
                    }
                }
            }
        }

        printf("Enter the NFL score (Enter 1 to stop): ");

        while (1)
        {
            fgets(input, sizeof(input), stdin);

            if (sscanf(input, "%d %c", &score, &extra) == 1)
            {
                break;
            }

            printf("Invalid input. Please enter an integer.\n");
            printf("Enter the NFL score (Enter 1 to stop): ");
        }

        while (score < 0)
        {
            printf("Invalid score. Please enter a non-negative score.\n");

            while (1)
            {
                fgets(input, sizeof(input), stdin);

                if (sscanf(input, "%d %c", &score, &extra) == 1)
                {
                    break;
                }

                printf("Invalid input. Please enter an integer.\n");
                printf("Enter the NFL score (Enter 1 to stop): ");
            }
        }
    }

    return 0;
}