#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strLength(char *s);
char *_strCopy(char *dest, char *src);

dog_t *new_dog(char *name, float age, char *owner) {
	dog_t *dog_copy;
	char *copy_name = NULL;
	char *copy_owner = NULL;

	dog_copy = malloc(sizeof(dog_t));
	if (dog_copy == NULL) {
		return (NULL);
	}
	if (name != NULL) {
		copy_name = malloc(_strLength(name) + 1);
		if (copy_name == NULL) {
			free(dog_copy);
			return (NULL);
		}
		dog_copy->name = _strCopy(copy_name, name);
	}
	if (owner != NULL) {
		copy_owner = malloc(_strLength(owner) + 1);
		if (copy_owner == NULL) {
			free(copy_name);
			free(dog_copy);
			return (NULL);
		}
		dog_copy->owner = _strCopy(copy_owner, owner);
	}
	dog_copy->age = age;
	return (dog_copy);
}

int _strLength(char *s) {
	int index = 0;

	while (s[index] != '\0') {
		index++;
	}

	return (index);
}

char *_strCopy(char *dest, char *src) {
	int index;

	for (index = 0; index <= _strLength(src); index++) {
		dest[index] = src[index];
	}
	return (dest);
}
