#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

/**
 * @struct coin
 * @brief Represents a specific coin denomination.
 *
 * Stores the denomination of the name, its type (EU, AU, etc)
 * and how much that exists of that coin.
 */

typedef struct coin {
    int total;             /**< How much this coin exists for a given customer. */
    int denomination;      /**< Denomination of coin e.g. 25c, 10c. */
    char type[100];        /**< String storing the type of currency (e.g. US). */
} coin;

/**
 * @struct customer
 * @brief Represents a customer.
 *
 * A customer has a name, and a coin array. Note that the coin
 * array can only store the coins of one type of currency.
 */
typedef struct customer {
    char name[100];        /**< Name of the customer, used to uniquely indentify customers. */
    coin coins[4];         /**< Array of coins, 1st index stores the largest denomination, 4th element stores the smallest.*/
} customer;

#endif // FUNCTIONS_H_INCLUDED
