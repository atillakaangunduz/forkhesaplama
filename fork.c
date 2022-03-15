#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
  
  pid_t process;
  int sayi1;
  printf("Birinci sayi giriniz : ");
  scanf("%d",&sayi1);
  process = fork();
  

 
  if(process == 0){
   int sonuc = sayi1 * sayi1;
    
  printf("Child process sonuc (kare alma): %d \n" , sonuc);
  sleep(5);
  exit(1);
  }
  
  else if( process>0){
    wait(NULL);
    int sonuc2 = sayi1 * sayi1 * sayi1;
    printf("Ana process (Kup alma) : %d \n" , sonuc2);
  
  }
  
  else{
  printf("Process olusamadý");
  }
  return 0;
  
  }

