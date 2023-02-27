#include "main.h"
/**
 * _atoi- converting string to integer
 * @ i: integer used 
 * Return: int
 */
int _atoi(char *s) {
	int sign = 1;
	int result = 0;
	int i = 0;
	while (s[i] != '\0') {
	if (s[i] == '-' && i == 0) {
	sign = -1;
	} else if (s[i] == '+' && i == 0) {
	sign = 1;
	} else if (isdigit(s[i])) {
	result = result * 10 + (s[i] - '0');
	} else if (result != 0) {
	break;
	}
	i++;
	}
	return sign * result;
}

