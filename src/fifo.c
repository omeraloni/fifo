#include "fifo.h"

fifo_t * fifo_create(size_t capacity)
{
    if (capacity == 0) {
        return NULL;
    }

    fifo_t *fifo = (fifo_t *)malloc(sizeof(fifo_t));

    if (fifo == NULL) {
        return NULL;
    }

    fifo->head = fifo->tail = 0;
    fifo->buf =(char *)malloc(sizeof(char)*capacity);

    if (fifo->buf == NULL) {
        free(fifo);
        return NULL;
    }

    return fifo;
}

int fifo_write(fifo_t *fifo, char c)
{
    return 0;
}

/**
 * @brief reads a single char from a cyclic fifo
 * returns -1 if fifo is empty
 *
 * @param fifo
 * @return int
 */
int fifo_read(fifo_t *fifo, char *c)
{
    return 0;
}

/**
 * @brief
 *
 * @param fifo
 * @return int
 */
int fifo_is_empty(fifo_t *fifo);

/**
 * @brief
 *
 * @param fifo
 * @return int
 */
int fifo_is_full(fifo_t *fifo);

/**
 * @brief
 *
 * @param fifo
 * @param c
 * @return int
 */
int fifo_peek(fifo_t *fifo, char *c);

/**
 * @brief
 *
 * @param fifo
 * @return int
 */
int fifo_capacity(fifo_t *fifo);

/**
 * @brief
 *
 * @param fifo
 * @return int
 */
int fifo_remaining_capacity(fifo_t *fifo);