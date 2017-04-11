#include <stdio.h>
#include <stdlib.h>
int main() {
       
    int a,b, l;
    float m[12][12];
    float r = 0; 
    float c = 0;
    char lt;
   
    scanf("%d %c", &l, &lt);
    for (a = 0; a < 12; a++) {
        for (b = 0; b < 12; b++) {
            scanf("%f", &m[a][b]);
            if(a == l && lt == 'S'){
                 r += m[a][b]; 
            }
            else if(a == l && lt == 'M'){
                 r += m[a][b];
                c++;
        }
        }
    }
    /* Imprimi o resultado*/
    if(c > 0){
        r /= c;
        printf("%.1f\n", r);
    } else {
        printf("%.1f\n", r);
    }
  
      
    system("pause");
}
