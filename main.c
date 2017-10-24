#include <pthread.h>
#include <stdio.h>

void *entry_function(void *param){
	printf("%s", (char*) param );
	return NULL;
}

int main(){

	pthread_t thread_1, thread_2, thread_3;
	pthread_create(&thread_1, NULL, entry_function, "Kim Jestes?\n");
	pthread_create(&thread_2, NULL, entry_function, "Jestes Zwyciezca!\n");
	pthread_create(&thread_3, NULL, entry_function, "\n");

	pthread_join(thread_1, NULL);
	pthread_join(thread_2, NULL);
	pthread_join(thread_3, NULL);

	printf("- Piotr Blandford -\n");
	return 0;
}
