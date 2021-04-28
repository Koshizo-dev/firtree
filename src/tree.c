/*
** EPITECH PROJECT, 2020
** Fir tree
** File description:
** Print a 'n' size's tree
*/

void my_putchar(char);

static void print_base(int size, int *stars, int max_line)
{
    int size_x = size % 2 == 0 ? size + 1 : size;
    int max_spaces = (((stars[max_line] - 1) / 2) - (size_x - 1) / 2);

    for (int y = 0; y < size; y++) {
        for (int spaces = 0; spaces < max_spaces; spaces++)
            my_putchar(' ');
        for (int x = size_x; x > 0; x--)
            my_putchar('|');
        my_putchar('\n');
    }
}

static void stars_count(int size, int *stars)
{
    int current_line = 0;
    int number_of_stars = 1;
    int lost_stars = 4;

    for (int c_floor = 1; c_floor <= size; c_floor++) {
        for (int n_lines = c_floor + 3; n_lines > 0; n_lines--) {
                stars[current_line] = number_of_stars;
                current_line++;
                number_of_stars += 2;
        }
        if (c_floor == 2) {
            number_of_stars -= lost_stars;
            lost_stars += 2;
            continue;
        }
        number_of_stars -= lost_stars;
        lost_stars += c_floor % 2 == 0 ? 2 : 0;
    }
}

static void print_stars(int current_line, int *stars, int max_line)
{
    int max_spaces = ((stars[max_line-1] - stars[current_line]) / 2);

    for (int spaces = 0 ; spaces <=  max_spaces ; spaces++) {
        my_putchar(' ');
    }
    for (int i = 0 ; i < stars[current_line] ; i++)
        my_putchar('*');
}

void tree(int size)
{
    int current_line = 0;
    int c_lines = -1;

    if (size <= 0)
        return;
    for (int c_floor = 1; c_floor <= size; c_floor++)
        c_lines = c_lines + c_floor + 3;
    int stars[c_lines + 1];
    stars_count(size, stars);
    for (int i = 0; i <= c_lines; i++) {
        print_stars(current_line, stars, c_lines);
        current_line++;
        my_putchar('\n');
    }
    print_base(size, stars, c_lines);
}