#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 10000

char* searchTime(char str[MAX_SIZE], char dist[20], int n, int m){
    char* time = (char*) malloc(6 * sizeof(char));
    int start = -1;
    int count = 0, isFound = 0, isIftar = 0, isSehri = 0;

    for (int j = 1; j <= 2*n; j++)
    {   
        char* temp = (char*) malloc(100 * sizeof(char));
        temp[0] = '\0';
        
        int t = count, size = 0;
        for (int i = 0; str[i+t] != '\n' ; i++)
        {   
            size++;
            temp[i] = str[i+t];
            count++;
        }
        count++;

        temp[size] = '\n';
        temp[size+1] = '\0';
   
        if(j % 2 != 0){
            
            char* ptrDist  = strstr(temp, dist);
            char* ptrIftar = strstr(temp, "iftar");
            char* ptrSehri = strstr(temp, "sehri");
            char tDist[20];

            int l=0, c=1;
            for (int k = 0; temp[k] != '\n'; k++)
            {
                if( (temp[k] >= 'A' && temp[k] <= 'Z') && (temp[k+1] >= 'A' && temp[k+1] <= 'Z') && (temp[k+2] >= 'A' && temp[k+2] <= 'Z') && (temp[k+3] >= 'A') && (temp[k+3] <= 'Z') && c == 1){
                    tDist[l++] = temp[k]; 
                    c = 1;
                }
                else{
                    c = 0;
                }
            }

            tDist[l] = '\0';
            if((ptrDist != NULL) && (ptrSehri != NULL) && (m == 2)){
                start = count;
                break;
            }

            if(ptrSehri != NULL)
            {
                isSehri = 1; 
                isIftar = 0; 
            }

            if((ptrDist != NULL) && (ptrSehri == NULL) && (m == 2)){
                if(ptrIftar == NULL){
                    if(isSehri == 1){
                        start = count;
                        break;
                    }
                }
                isFound = 1;
                continue;
            }

            if(ptrIftar != NULL)
            {
                isIftar = 1;
                isSehri = 0;
            }

            if((isFound == 1) && (ptrDist == NULL) && (strcmp(tDist, dist) == 0  || tDist[0] == '\0') && (ptrSehri != NULL) && (m == 2)){
                isFound = 0;
                start = count;
                break;
            }
            
            if((isFound == 1) && (ptrDist == NULL) && (strcmp(tDist, dist) == 0 || tDist[0] == '\0') && (ptrIftar != NULL) && (m == 1)){    
                isFound = 0;
                start = count;
                break;
            }
            if((ptrDist != NULL) && (ptrIftar == NULL) && (m == 1)){
                if(ptrSehri == NULL){
                    if(isIftar == 1){
                        start = count;
                        break;
                    }
                }
                isFound = 1;
                continue;
            }
            if((ptrDist != NULL) && (ptrIftar != NULL) && (m == 1)){
                start = count;
                break;
            }
        }

        free(temp);
        
        if(j == 2*n){
            
            return NULL;
        }
        
    }
      
    if (start == -1) {
        return NULL;
    }

    for (int i = start; str[i] != '.'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9'){ 
            strncpy(time, &str[i], 5);
            time[5] = '\0';
            return time;
        }  
    }

    free(time);

}

int main(){
    int n;
    scanf("%d", &n);
    
    char conv[100], str[MAX_SIZE];
    conv[0] = '\0';
    str[0] = '\0';

    int count=0;
    while(fgets(conv, 100, stdin)){
        if(strstr(str, ":")){
            count++;
        }
        if(count == 0){
             strcpy(str, conv);

        }
        else{
            strcat(str, conv);
        }
        if(count == 2*n){
            break;
        }
    }

    str[strlen(str)] = '\0';

    int q;
    scanf("%d", &q);
    
    char dist[20];
    while(q--){
        int m;
        scanf("%d %s", &m, dist);

        char* time = searchTime(str, dist, n,  m);
        if(time != NULL){
            printf("%s\n", time);
        }
        else{
            printf("Sorry I don't know!\n");
        }
    }
    


    return 0;
}
