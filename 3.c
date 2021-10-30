#include <stdio.h>

int generate_numbers_for_triangle_sides(int n); //прототип функції

int main(){

   int n;
   
   printf("Скільки чисел ви хочете ввести? : ");
   scanf("%d",&n);  //вводимо к-сть сторін
   fUNCtion(n);    //викликаємо функцію
   return 0;
}


int generate_numbers_for_triangle_sides(int n){ 

    int count;   // змінна в яку передаємо кількість триктуників 
    int sides[n]; 
    
    for (int i = 0; i <= n - 1 ; i++){        //надаємо масиву чисел
         if ( n >= 3){
             printf("\nВведіть число %d : ",i + 1);
             scanf("%d" , &sides[i]);
                  
         }
         else {
            printf("\nВи ввели замале число сторін - мінімум 3");
            break;
         }
         
    }
    
    if (n >= 3 ){
    
        for (int i = 0; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                for (int k = j + 1; k <= n; k++){
 
                
                    if (   sides[i] + sides[j] > sides[k]
                        && sides[i] + sides[k] > sides[j]
                        && sides[k] + sides[j] > sides[i]) {
                        
                        count++;
                        printf("\n(%d,%d,%d) ",sides[i],sides[j],sides[k]);
                    }
                }
            }
        }
    } 
    printf("\n\nКількість трикутників = %d",count);
    return count; //повертає значення кількості можливих трикутників
}