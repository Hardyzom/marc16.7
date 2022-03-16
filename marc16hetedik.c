#include <stdio.h>
#include <string.h>

#define SIZE 50

int main(){

    char tomb[SIZE];
    printf("Adj meg egy stringet\n");
    fgets(tomb,SIZE,stdin); //"valami\n\0" hova mentsük, hány karakter, honnan olvassa be (stdin a billentyűzetről való beolvasás)
    tomb[strlen(tomb)-1]='\0'; //"valami\0\0"
    printf("%s\n",tomb);

return 0;

}

