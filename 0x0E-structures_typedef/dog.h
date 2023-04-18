#ifndef DOG_H
#define DOG_H

/*
 * Defines a new type struct dog with the following elements:
 * name, type = char *
 * age, type = float
 * owner, type = char *
 */

typedef struct dog {
    char *name;
    float age;
    char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif  /* DOG_H */

