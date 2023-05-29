#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b){
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b){
    return strcmp(a, b);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b){
    int i, j,  distCH = 0;
    
    for (i = 0; a[i] != '\0'; i++)
    {
     for (j = 0; b[j] != '\0'; j++)
     {
        if(a[i] == b[j]){
            distCH++;
        }
     }
    }

    if( i - distCH > j - distCH){
        return 1;
     }
     else if (i - distCH < j - distCH){
        return -1;
     }
     else{
        return 0;
     }
}

int sort_by_length(const char* a, const char* b){
    return strlen(a) - strlen(b);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
     if(cmp_func == lexicographic_sort){
        for (int i = 0; i<len-1; i++) {
            for (int j = i+1; j<len; j++){
                if(lexicographic_sort(arr[i], arr[j]) > 0){
                    char* max = arr[i];
                    arr[i] = arr[j];
                    arr[j] = max;
                }
            }
        }    
            
    }
    else if(cmp_func == lexicographic_sort_reverse){
        for (int i = 0; i<len-1; i++) {
            for (int j = i+1; j<len; j++){
                if(lexicographic_sort(arr[i], arr[j]) < 0){
                    char* min = arr[i];
                    arr[i] = arr[j];
                    arr[j] = min;
                }
            }
        }        
    }
    else if(cmp_func == sort_by_number_of_distinct_characters){
        for (int i = 0; i < len-1; i++)
        {
            for (int j = i+1; j<len; j++){
                if(sort_by_number_of_distinct_characters(arr[i], arr[j]) > 0){
                    char* max = arr[i];
                    arr[i] = arr[j];
                    arr[j] = max;
                }
            } 
        }
        for (int i = 0; i < len-1; i++)
        {
            if(sort_by_number_of_distinct_characters(arr[i], arr[i+1]) == 0){
                    if(lexicographic_sort(arr[i], arr[i+1]) > 0){
                        char* max = arr[i];
                        arr[i] = arr[i+1];
                        arr[i+1] = max;
                    }
            }
         
        }     
    }
    else if(cmp_func == sort_by_length){
        for (int i = 0; i < len-1; i++)
        {
            for (int j = i+1; j < len; j++)
            {
                if(sort_by_length(arr[i], arr[j]) > 0){
                    char* max = arr[i];
                    arr[i] = arr[j];
                    arr[j] = max;
                }
            }
            
        }
        for (int i = 0; i < len-1; i++)
        {
            if(sort_by_length(arr[i], arr[i+1]) == 0){
                    if(lexicographic_sort(arr[i], arr[i+1]) > 0){
                        char* max = arr[i];
                        arr[i] = arr[i+1];
                        arr[i+1] = max;
                    }
            }
         
        } 
             
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    return 0;
}