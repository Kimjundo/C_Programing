#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
 char original[] = "aPPle";
 char lower_str[sizeof(original)];
 char upper_str[sizeof(original)];
 for (int i = 0; i < strlen(original); i++) {
 lower_str[i] = tolower(original[i]);
 upper_str[i] = toupper(original[i]);
 }
 lower_str[strlen(original)] = '\0';
 upper_str[strlen(original)] = '\0';
 int count = 0;
 for (int i = 0; i < strlen(original); i++) {
 printf("%d 번쨰 %d, %d",i, lower_str[i], upper_str[i]);
 count += (upper_str[i] - lower_str[i]);

 }
 printf("최종 누적값: %d\n", count);
}