#include <stdio.h>
void reverseString(char str[]) {
    int length = 0,i;
    char temp;
    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
void toUppercase(char str[]) {
	int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Original string: %s\n", str);

    reverseString(str);
    printf("Reversed string: %s\n", str);

    toUppercase(str);
    printf("Uppercase string: %s\n", str);

    printf("Length of the string: %d\n", stringLength(str));

    return 0;
} 
