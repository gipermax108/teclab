#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int mygetch()
{
    struct termios oldt, newt;
    int c;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    c = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return c;
}

int main()
{
    int state = 0; // состояние конечного автомата
    char c; // вводимый символ
    int flag = 0;

    while ((c = mygetch()) != 4 && c != '\n') {
        printf("%c", c);

        switch (state) {
            case 0:
                if (c >= '0' && c <= '9') {
                    state = 1;
                    flag = 1;
                } else if (c == '+' || c == '-') {
                    state = 2;
                } else if (c == '.') {
                    state = 3;
                } else {
                    printf("\nError\n");
                    return 0;
                }
                break;
            case 1:
                if (c >= '0' && c <= '9') {
                    state = 1;
                } else if (c == '.') {
                    state = 4;
                } else if (c == 'e' || c == 'E') {
                    state = 5;
                } else {
                    printf("\nValid\n");
                    return 0;
                }
                break;
            case 2:
                if (c >= '0' && c <= '9') {
                    state = 1;
                } else if (c == '.') {
                    state = 3;
                } else {
                    printf("\nError\n");
                    return 0;
                }
                break;
            case 3:
                if (c >= '0' && c <= '9') {
                    state = 4;
                } else {
                    printf("\nError\n");
                    return 0;
                }
                break;
            case 4:
                if (c >= '0' && c <= '9') {
                    state = 4;
                } else if (c == 'e' || c == 'E') {
state = 5;
} else {
printf("\nValid\n");
return 0;
}
break;
case 5:
if (c >= '0' && c <= '9') {
state = 7;
} else if (c == '+' || c == '-') {
state = 6;
} else {
printf("\nError\n");
return 0;
}
break;
case 6:
if (c >= '0' && c <= '9') {
state = 7;
} else {
printf("\nError\n");
return 0;
}
break;
case 7:
if (c >= '0' && c <= '9') {
state = 7;
} else {
printf("\nValid\n");
return 0;
}
break;
default:
break;
}
}
if (flag == 1) {
    printf("\nValid\n");
} else {
    printf("\nError\n");
}

return 0;
}
