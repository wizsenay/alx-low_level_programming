#include "main.h"
int main(void)

{

	    char *c;

	        int *i;

		    float *f;




			    c = malloc_checked(sizeof(char) * 1024);

			        printf("%p\n", (void *)c);

				    i = malloc_checked(sizeof(int) * 402);

				        printf("%p\n", (void *)i);

					    f = malloc_checked(sizeof(float) * 100000000);

					        printf("%p\n", (void *)f);
							    free(c);

							        free(i);

								    free(f);

									    return (0);

}
