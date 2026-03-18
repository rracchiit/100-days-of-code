#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);

    int pq[100];
    int size = 0;

    while(N--)
    {
        char op[10];
        scanf("%s", op);

        if(strcmp(op, "insert") == 0)
        {
            int x;
            scanf("%d", &x);
            pq[size++] = x;
        }
        else if(strcmp(op, "delete") == 0)
        {
            if(size == 0)
            {
                printf("-1\n");
                continue;
            }

            int minIdx = 0;
            for(int i = 1; i < size; i++)
            {
                if(pq[i] < pq[minIdx])
                    minIdx = i;
            }

            printf("%d\n", pq[minIdx]);

            for(int i = minIdx; i < size - 1; i++)
                pq[i] = pq[i + 1];

            size--;
        }
        else if(strcmp(op, "peek") == 0)
        {
            if(size == 0)
            {
                printf("-1\n");
                continue;
            }

            int min = pq[0];
            for(int i = 1; i < size; i++)
            {
                if(pq[i] < min)
                    min = pq[i];
            }

            printf("%d\n", min);
        }
    }

    return 0;
}