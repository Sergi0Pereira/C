#include <stdio.h>

int main(){

//Inputs

int i, x, y=1, tamanhoarray, conta = 0,z,e=0;

int arr[tamanhoarray];
    
    printf("Insere a quantidade de numeros para o array: \n");

        scanf("%d", &tamanhoarray);
    
    printf("Insere os %d elementos do array: \n", tamanhoarray);

//Processamento

    for (i = 0; i < tamanhoarray; i++){
        scanf("%d", &arr[tamanhoarray]);
       }     
    for(x = 0; x <= tamanhoarray; y++){
            if(y == tamanhoarray){
                x++;
                y=x;}
                
            else if(x==tamanhoarray){
              break;}
              
            else if(arr[x] == arr[y]){
              for(arr[e];arr[e]<arr[x];e++){
                if(arr[e]==arr[x]){
                  break;
                }
                else{
                  conta ++;
                }
              }
              conta ++;
              
              }
          
            
    }
    printf("O numero de casas repetidas e de: %d\n", conta);

    return 0;
  }
/*int main() {
  int arr[]={1,1,1,3,5,6,1,1,1,5,1};
  int y=1;
  int x=0;
  int z;
  int tamanhoarray=10;
  int conta=0;
  
  
          for( x = 0; x <= tamanhoarray; y++){
            if(y > tamanhoarray){
                x++;
                y=x;}
                
            else if(x==tamanhoarray){
              break;}
              
            else if(arr[x] == arr[y] && arr[y] != arr[x-y] ){
                conta ++;
                
                
                }
          
            
    }
    printf("O numero de casas repetidas e de: %d\n", conta);

    return 0;
  }

  */