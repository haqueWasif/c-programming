#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {
    return document[n-1][m-1][k-1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) { 
    return document[m-1][k-1];
}   

char*** kth_paragraph(char**** document, int k) {
    return document[k-1];
}

char**** get_document(char* text) {
    char**** document = (char****) malloc(5*sizeof(char***));

    char*** paragraph = (char***) malloc(10*sizeof(char**));
    
    int s = 0, j = 0, i = 0, k = 0;

    while(1)
    {
        char** sentence = (char**) malloc(100*sizeof(char*));
        while(1)
        {
            char* word = (char*) malloc(100*sizeof(char));
            while(text[i+s+k] != ' '){
                word[j] = text[i+s+k];
                s++;
                j++;
                if(text[i+s+k] == '.'){
                    word[j] = text[i+s+k];
                    j++;
                    break;
                }
            }
            word[j] = '\0';
            sentence[i] = word;

            printf("%s ", sentence[i]);
            
            j=0;
            i++;
            if(text[i-1+s+k]  == '.'){
                i--;
                break;
            }
        }
        if(text[i+1+s+k] == '\n'){
            paragraph[k] = sentence;
            break;
        }
        k++;     
    }
}


char* get_input_text() {	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}


int main() 
{
    char* text = get_input_text();
    char**** document = get_document(text);
  
}
