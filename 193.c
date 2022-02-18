#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <windows.h>
#include <unistd.h> // not windows library

typedef struct _factorialData {
    int number;
    int result;
    void (*callBack)(struct _factorialData*);
} FactorialData;

void factorial(void *args) {
    FactorialData *factorialData = (FactorialData*) args;
    void (*callBack)(FactorialData*); // Function prototype

    int number = factorialData->number;
    callBack = factorialData->callBack;

    int num = 1;
    for(int i = 1; i<=number; i++) {
        num *= i;
    }

    factorialData->result = num;
    callBack(factorialData);

    pthread_exit(NULL);
}

void startThread(FactorialData *data) {
    pthread_t thread_id;
    int thread = pthread_create(&thread_id, NULL, (void *) factorial, (void *) data);
}

void callBackFunction(FactorialData *factorialData) {
    printf("Factorial is %d\n", factorialData->result);
}

int main() {
    FactorialData *data =
        (FactorialData*) malloc(sizeof(FactorialData));

    if(!data) {
        printf("Failed to allocate memory\n");
        return EXIT_FAILURE;
    }

    data->number = 5;
    data->callBack = callBackFunction;

    startThread(data);

    //Sleep(2000);
    sleep(2); // Equal to Sleep(2000) on <unistd.h>

    return EXIT_SUCCESS;
}
