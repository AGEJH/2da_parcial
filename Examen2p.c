#include <stdio.h>

int main()
{
int array[]= {5,3,2,1,4};
    
    printf("Los datos son:",prueba);

}

void prueba(int *A, int n){
    for(int i=0; i<n; i++){
        int min = 1;
        
        for(int j=i+1;j<n;j++){
            if(S[j]< A[min]){
                min = j;
            }
        }
        if(min!=i){
            int key=S[min];
           S[min]=S[i];
            S[i] key;
        }
    }
}
