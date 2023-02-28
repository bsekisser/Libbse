#include <stdlib.h>

static void* handle_calloc(void** h, size_t nmemb, size_t size) {
	if(0 == h)
		return(0);

	void* p = calloc(nmemb, size);
	*h = p;

	return(p);
}

static void* handle_malloc(void** h, size_t size) {
	if(0 == h)
		return(0);

	void* p = malloc(size);
	*h = p;

	return(p);
}

static void handle_free(void** h) {
	assert(0 != h);
	assert(0 != *h);

	free(*h);
	*h = 0;
}
