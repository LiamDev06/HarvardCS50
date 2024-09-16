#include <cs50.h>
#include <stdio.h>

void print_many(string print, int amount);

int main(void)
{
    const string block_character = "#";

    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        int space_amount = height - i - 1;
        int hashtag_amount = height - space_amount;

        print_many(" ", space_amount);
        print_many(block_character, hashtag_amount);
        printf("  ");
        print_many(block_character, hashtag_amount);
        printf("\n");
    }
}

void print_many(string print, int amount)
{
    for (int i = 0; i < amount; i++)
    {
        printf("%s", print);
    }
}
