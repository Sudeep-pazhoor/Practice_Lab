#include <stdio.h>
#include <string.h>

char input[1000];

void rev(char *str) {
    int len = strlen(str);
    int start = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == '.' || i == len - 1) {
            int end = (i == len - 1) ? i : i - 1;
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
    int fullEnd = len - 1;
    while (start < fullEnd) {
        char temp = str[start];
        str[start] = str[fullEnd];
        str[fullEnd] = temp;
        start++;
        fullEnd--;
    }
}

int main() {
    printf("Input: ");
    scanf("%[^\n]s", input);
    rev(input);
    printf("Output: %s\n", input);
    return 0;
}