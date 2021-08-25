#include <stdlib.h>

/**  FIFO Module - Assignment Instructions
 *
 * - Your assignment is to implement a FIFO module (first-in, first-out).
 * - The FIFO stores elements of 'char' type.
 * - Define the fifo_t data structure members.
 * - Implement the following functions:
 *   - fifo_create
 *   - fifo_destroy
 *   - fifo_write
 *   - fifo_read
 * - If you have time, implement these additional functions:
 *   - fifo_is_empty
 *   - fifo_is_full
 *   - fifo_peek
 *   - fifo_remaining_capacity
 *   - fifo_capacity
 *
 * Guidelines:
 * - Use of *none* C Standard Library code is forbidden.
 * - Changing the functions' signature is forbidden.
 * - Memory MUST be pre-allocated on fifo_create, reallocation is forbidden.
 * - All functions MUST meet O(1) complexity.
 * - Test your code and make sure all edge cases are covered.
 *
 */

/**
 * @brief fifo data structure
 *
 */
typedef struct {


}fifo_t;

typedef enum {
  EFIFO_EMPTY = 1,
  EFIFO_FULL = 2

}fifo_error;

/**
 * @brief allocate a new fifo struct with a given capacity
 *
 * @param capacity
 * @return fifo_t* (valid pointer, or NULL if failed to allocate memory)
 */
fifo_t * fifo_create(size_t capacity);

/**
 * @brief frees fifo's allocated memorty
 *
 * @param fifo
 */
void fifo_destroy(fifo_t *fifo);

/**
 * @brief write a single char to a fifo
 *
 * @param fifo
 * @param c
 * @return int (0 on success, -EFIFO_FULL if fifo is full)
 */
int fifo_write(fifo_t *fifo, char c);

/**
  * @brief reads a single char from a fifo
 *
 * @param fifo
 * @param c
 * @return int (0 on success, -EFIFO_EMPTY if fifo is empty)
 */
int fifo_read(fifo_t *fifo, char *c);

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

