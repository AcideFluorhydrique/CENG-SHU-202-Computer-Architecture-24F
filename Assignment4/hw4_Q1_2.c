#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cell{
    char * key;
    struct cell * next;
};


struct cell * append_word(char *string, struct cell *list){
    struct cell *newCell = malloc(sizeof(struct cell));
    newCell->key = strdup(string);
    newCell->next = list;
    return newCell;
}

int word_num(struct cell *list){
    int length=0;
    for(length=0; list!=NULL; length++){
        list = list->next;
    }
    return length;
}

void print_list(struct cell *list){
    // struct cell *currentCell = list;
    for(int i=0; list!=NULL; i++){
        printf("%s\n", list->key);
        list = list->next;
    }
    // printf("\n");
}

void free_list(struct cell *list){
    struct cell * temp;
    for (int i=0; list!=NULL; i++){
        temp = list;
        list = list->next;
        free(temp->key);
        free(temp);
    }

}

int main(){
    struct cell *wordList = NULL;
    wordList = append_word("hello", wordList);
    wordList = append_word("world", wordList);
    print_list(wordList);
    free_list(wordList);
    // print_list(wordList);

    return 0;
    
}