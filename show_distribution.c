#include <stdio.h>

#define N 20

    int main(void){

        int i, j;
        int num;
        int score[N];
        int dist[11] = {0};

        printf("enter the number of people");
        do {
            scanf("%d", &num);
            if (num < 1 || num > N)
                printf("the input is restricted within the range of 1 to %d\n", N);
            } while (num < 1 || num > N);

        printf("enter the score of %d\n", num);

        for (i = 0; i < num; i++) {
            printf("No. %2d: ", i + 1);
            do {
                scanf("%d", &score[i]);
                if (score[i] < 0 || score[i] > 100)
                    printf("score is restricted within the range of 1 to 100\n");
                } while (score[i] < 0 || score[i] > 100);

            dist[score[i] / 10]++;
        }

        puts("\n DISTRIBUTION GRAPH:");
        printf("        100:");

        for (i = 0; i < dist[10]; i++)
            putchar('*');
        putchar('\n');

        for (i = 9; i >= 0; i--) {
            printf("%3d to %3d:", i * 10, i * 10 + 9);

            for (j = 0; j < dist[i]; j++)
                putchar('*');
            putchar('\n');
        }
        return 0;
    }

