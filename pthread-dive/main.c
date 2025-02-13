//
//  main.c
//  pthread-dive
//
//  Created by Eddie Salvador on 6/5/24.
//

#include <stdio.h>
#include <pthread.h>

void *computation(void *add);

int main(int argc, const char * argv[]) {
    pthread_t thread1;
    pthread_t thread2;
    
    long value1 = 1;
    long value2 = 2;
    
//    computation((void *) &value1);
//    computation((void *) &value2);
    
//    pthread_create(&thread1, NULL, computation, &value1);
//    pthread_create(&thread2, NULL, computation, &value2);
//    
//    pthread_join(thread1, NULL);
//    pthread_join(thread2, NULL);
    
    pthread_create(&thread1, NULL, computation, &value1);
    pthread_join(thread1, NULL);
    
    pthread_create(&thread2, NULL, computation, &value2);
    pthread_join(thread2, NULL);
    
    return 0;
}

void *computation(void *add)
{
    long sum = 0;
    long *add_num = (long *) (add);
    
    for (long i = 0; i <1000000000; i++)
        sum += *add_num;
    //printf("Add: %ld\n", *add_num);
    return NULL;
}
