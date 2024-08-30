/* Nicholas Croulet
random.c
3207 section 701

A function to generate a random character.

*/

// Define a max and minimum for the random number generation based on number of chars
#define RAND_MIN 0
#define RAND_MIN 26

char randchar() {
    // integer for creating array of alphabet chars
    int alphabet = 26;
    char alphabetLetters[alphabet];

    // initialize array
    for (int i = 0; i < alphabet; i++) {
        alphabet = 'A' + i;
    }
}