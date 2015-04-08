#include <stdio.h>
#include <string.h>
int countString(char *string);
void countToLetter(char *string, int index);
void backwards(char *string, int index);
int main(void)
{
    char myString[10];
    printf("Input a string: \n");
    fgets(myString,10,stdin);
    countToLetter(myString, 4);
    puts(myString);
	puts(myString);
    char superString[10];
    int i;
    for (i = 0; i < 10; i++)
    {
		superString[i] = myString[i];
	}
	backwards(superString,10);
    int count = countString(myString);
    printf("Count is %i\n", count);
    return 0;
}

int countString(char *string) {
    return strlen(string);
}

void countToLetter(char *string, int index) {
	int i;
    for (i=0;  i< countString(string); i++) {
        if (i<index) {
            printf("%c",string[i]);
        }
        else {
            printf("\n");
            return;
        }
    }
}

void backwards(char *string, int index)
{
	int i;
	for(i = (index - 1); i >= 0; i-- )
	{
		printf("%c", string[i]);
	} 
	printf("\n");
}
