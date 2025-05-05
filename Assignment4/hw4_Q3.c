/*
 * hw6.4.c
 * Project: CA24.HW6
 * Created: 2024-04-20 11:51:56
 * Author: Bill Chen (bill.chen@live.com)
 * -----
 * Last Modified: 2024-04-21 13:47:01
 * Modified By: Bill Chen (bill.chen@live.com)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cell {
    char *key;
    struct cell *next;
};

struct cell *cons(char *string, struct cell *list) {
    struct cell *new_cell = malloc(sizeof(struct cell));
    new_cell->key = strdup(string);
    new_cell->next = list;
    return new_cell;
}

int list_member(char *string, struct cell *list) {
    while (list != NULL) {
        if (strcasecmp(list->key, string) == 0) {
            return 1;
        }
        list = list->next;
    }
    return 0;
}

// 4-1
struct cell *read_words(char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file)
        return NULL;

    struct cell *list = NULL;
    char words[100];
    while (fscanf(file, "%s", words) != EOF) {
        list = cons(words, list);
    }
    return list;
}

// 4-4
void spell_check(struct cell *vocab, struct cell *input) {
    while (input != NULL) {
        if (!list_member(input->key, vocab)) {
            printf("Misspelled: %s\n", input->key);
        }
        input = input->next;
    }
}


int main() {

    // 4-2
    struct cell *vocab = read_words("/usr/share/dict/words");
    if (!vocab) {
        // If not a unix-based system, read from a local file.
        vocab = read_words("./words");
    }

    // 4-3 & 4-4
    struct cell *input = NULL;
    char words[100];
    printf("Enter inputs, end with ctrl+D:\n");
    while (scanf("%s", words) != EOF) {
        input = cons(words, input);
    }
    spell_check(vocab, input);
    return 0;
}