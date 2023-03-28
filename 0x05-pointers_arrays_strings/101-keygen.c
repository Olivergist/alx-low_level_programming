#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

#define PASSWORD_LENGTH 16

char* generate_password() {
	char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}\\|;:'\",.<>/?`~";
	int num_chars = strlen(valid_chars);
	char* password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));
	srand(time(NULL));
	for (int i = 0; i < PASSWORD_LENGTH; i++) {
		int index = rand() % num_chars;
		password[i] = valid_chars[index];
	}
	password[PASSWORD_LENGTH] = '\0';
	return password;
}

int main() {
	// Generate 10 random passwords and print them out
	for (int i = 0; i < 10; i++) {
		char* password = generate_password();
		printf("Password %d: %s\n", i+1, password);
		free(password);
	}
	return 0;
}
