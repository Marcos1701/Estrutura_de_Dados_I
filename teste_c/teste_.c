// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// int main() {
//     char s[3] = "um";
//     char t[4] = "ums";
//     int conferir = true;
    
//     for(int i = 0; i < sizeof(s) || i < sizeof(t); i++){
//         if(s[i] != t[i]){
//             conferir = false;
//         }
//     }
//     if(conferir)
//       puts("iguais");
//     else
//       puts("Diferentes");
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[3] = "um";
    char t[4] = "ums";
    int i;
    int conferir = true;
    
    for(i = 0; s[i] != '\0' || t[i] != '\0'; i++){
        if(s[i] != t[i]){
            conferir = false;
        }
    }
    printf("%d", i);
    if(conferir)
      puts("iguais");
    else
      puts("Diferentes");
    return 0;
}
