#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <linux/in.h>
#include<stdlib.h>
#include<time.h>
#include <pthread.h>

int main ()
{
      
     int temp , gyro , temp_th , rot;        // for tempretur  mesuring .../
                                             //for the gyro rotation ...
                                             //for tempretur threshold  ...
                                             // for rotational purpose...        
     float max ,min ;
   
    {
      if( temp >= 220 )  
      printf("rocket is on fire");    // set alarm
      scanf("%d",&temp);
    }
      else 
          continue ;  

    {
         
         float max,min;        //for tempretur threshold
         if (60<temp_th>50)
         {
         printf("rocket is on fire"); //set alarm condition
         scanf ("%d".&temp_th);        
    }
    else
        continue;
      {
            int rot;
            if (rot>=16)       // for the accelaration 
               {
                    printf ("spin out off controll");  //set alarm condition
                    scanf("%d",&rot);
                }
             else
             continue;
      }
     
      if (gyro==90 || 90 ==!3)  //for the gyro rotation
      if
          {
              printf("spin out of controll");   //set alarm condition
              scanf("%d",&gyro);
         }
         else
         continue;
}
}
    int main() 
    {
    int temp ,temp_th,rot,gyro;
    shm_t *ptr;
     shmid = shmget(SHM_KEY, sizeof(shm_t), IPC_CREAT | 0600);    // create shared memory object
    if(shmid < 0) {
        perror("shmget() failed");
        _exit(1);
    }
    printf("shmget() is done.\n");
    getchar();
    ptr = (shm_t*)shmat(shmid, NULL, 0); // attach shm region to the process & get its pointer
    if(ptr == (void*)-1) {
        perror("shmat() failed");
        shmctl(shmid, IPC_RMID, NULL);
        _exit(2);
    }
    ptr->cnt = 0;
    printf("shmat() is done.\n");
    getchar();

    shmctl(shmid, IPC_RMID, NULL);
    printf("shm marked for destruction.\n");
    getchar();

    ret = fork();
    if(ret == 0) {
        // child process
        for(i=1; i<=10; i++) {
            ptr->cnt--;
            printf("child: %d\n", ptr->cnt);
            sleep(1);
        }
        shmdt(ptr); // nattach = 1
    } else {
        // parent process
        for(i=1; i<=10; i++) {
            ptr->cnt++;
            printf("parent: %d\n", ptr->cnt);
            sleep(1);
        }
       
    
}
int main ( int temp ,int rot,int gyro, int temp_th )  // for sending the data

{
    int fd;
    fd =open ("rocket",_WRONLY);
    write(fd,"rocket",5);
    close(fd);
    return 0;
}
//recv
int main ( int temp ,int rot,int gyro, int temp_th ) /// for reciving the data 
 {
    unsigned char rbuff[64];
    int fd;
    fd = open("rocket",0_RDONLY);
    read(fd,rbuff,64);
    printf("recv 'd from sender : %s\n",rbuff);
    close(fd);
 }
    void* print_str2(void *param)      //for syncronics the data
    {
    char *str2 = (char*)param;
    int temp ,temp_th,rot,gyro;
    pthread_mutex_lock(&m);
    int main() {
    pthread_t temp ,temp_th,rot,gyro;
    pthread_mutex_init(&m, NULL);
    pthread_cond_init(&c, NULL);    
    pthread_create(&temp,&temp_th,&rot,&gyro NULL, print_str1, "temp \n,temp_th\n ,gyro\n,rot\n");
      pthread_join(temp ,temp_th,rot,gyro, NULL);
    pthread_join(temp ,temp_th,rot,gyro, NULL);
    pthread_cond_destroy(&c);
    pthread_mutex_destroy(&m);
    return 0;

}
