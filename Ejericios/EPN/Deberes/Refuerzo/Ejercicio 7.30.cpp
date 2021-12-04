//Ejercicio 7.30
#include<stdio.h>
void modifica_cubeta(int [],int ,int);
main()
{
      int i;
      int j;
int N; 
   int z=0;
 
 printf("cantidad de elementos\n");   
      scanf("%d",&N);
   
    int tem[N];
    int tem1[N];
    int Arreglo[N][10];
    int copia[10][10];         
    int temp[N];
    
   int aux[N];
    int c[N];
     
    
    printf("introduzca los elementos\n");
            for(i=0;i<N;i++)
 
                 scanf("%d",& aux[i]);
 
            
      for(i=0;i<N;i++)
         c[i]=aux[i];
    
  
  
            for(j=0;j<10;j++)
                      for(i=0;i<N;i++)        
                             Arreglo[i][j]=0;
 for(j=0;j<10;j++)
           for(i=0;i<10;i++)        
            copia[i][j]=0;   
 
  modifica_cubeta(aux,N,1);
  
  for(j=0;j<10;j++)
            for(i=0;i<N;i++)  {
                                    
     temp[i]=aux[i];
     //printf("%d  ",temp[i]);
   
     Arreglo[i][aux[i]]=c[i];
     tem[i]=Arreglo[i][j];
 
     if(Arreglo[i][j]>0){
       modifica_cubeta(tem,N,2);
     printf("%d  ",tem[i]);
      c[i]=Arreglo[i][j];
     copia[aux[i]][tem[i]]=c[i];
   
         }
     
      
}
        
for(j=0;j<10;j++)
            for(i=0;i<10;i++)  {      
        
        if(i%10==0)
        printf("\n");
      printf("%3d  ",copia[i][j]);
        }
 
 
 
  
 
 
 //system("pause");
 }
 
void modifica_cubeta(int b[],int n ,int pasada)
{
      int casilla;
   int i,j;
 
    int n_tem;
        int n_temp[10*n][10*n];
        int n_temp1[10*n][10*n];
  
 
 for(j=0;j<=10*n;j++)    
        
         for(i=0;i<n;i++)
          
                      
          {                     
                
                n_tem=b[i];
                
            
                        n_temp[i][j]=n_tem/10;
                n_temp1[i][j]=n_tem%10;
         
           
          
                        if(j>=1)
                        {
                    
                        n_temp[i][j]=n_temp[i][j-1]/10;
                    
             }
            if(j>=2){
             
                        
               n_temp1[i][j-2]= n_temp1[i][j];
                   n_temp1[i][j]=n_temp[i][j-2]%10;
                     
           }
           
           
         if(j>0){        
    
 
           
    if(j==pasada){            
               b[i]=n_temp1[i][j];      
 
                 }          
              
      
                  
                }
   
 
   
 
 
 
 
 
       } 
}
