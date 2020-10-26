/*
Implementation by the Keccak Team, namely, Guido Bertoni, Joan Daemen,
Michaël Peeters, Gilles Van Assche and Ronny Van Keer,
hereby denoted as "the implementer".

For more information, feedback or questions, please refer to our website:
https://keccak.team/

To the extent possible under law, the implementer has waived all copyright
and related or neighboring rights to the source code in this file.
http://creativecommons.org/publicdomain/zero/1.0/

SPDX-License-Identifier: CC0-1.0
*/

#ifndef _KeccakHashInterfacetimes4_h_
#define _KeccakHashInterfacetimes4_h_

#include <stdint.h>

#include "config.h"
#ifdef XKCP_has_KeccakP1600times4

#include "KeccakSpongetimes4.h"

typedef struct {
	oqs_KeccakWidth1600times4_SpongeInstance sponge;
	unsigned int fixedOutputLength;
	unsigned char delimitedSuffix;
} oqs_Keccak_HashInstancetimes4;

typedef uint8_t oqs_BitSequence;
typedef size_t oqs_BitLength;

/**
  * Function to initialize the Keccak[r, c] sponge function instance used in sequential hashing mode.
  * @param  hashInstance    Pointer to the hash instance to be initialized.
  * @param  rate        The value of the rate r.
  * @param  capacity    The value of the capacity c.
  * @param  hashbitlen  The desired number of output bits,
  *                     or 0 for an arbitrarily-long output.
  * @param  delimitedSuffix Bits that will be automatically appended to the end
  *                         of the input message, as in domain separation.
  *                         This is a byte containing from 0 to 7 bits
  *                         formatted like the @a delimitedData parameter of
  *                         the Keccak_SpongeAbsorbLastFewBits() function.
  * @pre    One must have r+c=1600 and the rate a multiple of 8 bits in this implementation.
  * @return SUCCESS if successful, FAIL otherwise.
  */
int oqs_Keccak_HashInitializetimes4(oqs_Keccak_HashInstancetimes4 *hashInstance, unsigned int rate, unsigned int capacity, unsigned int hashbitlen, unsigned char delimitedSuffix);

/** Macro to initialize a SHAKE128 instance as specified in the FIPS 202 standard.
  */
#define oqs_Keccak_HashInitializetimes4_SHAKE128(hashInstance)        oqs_Keccak_HashInitializetimes4(hashInstance, 1344,  256,   0, 0x1F)

/** Macro to initialize a SHAKE256 instance as specified in the FIPS 202 standard.
  */
#define oqs_Keccak_HashInitializetimes4_SHAKE256(hashInstance)        oqs_Keccak_HashInitializetimes4(hashInstance, 1088,  512,   0, 0x1F)

/** Macro to initialize a SHA3-224 instance as specified in the FIPS 202 standard.
  */
#define oqs_Keccak_HashInitializetimes4_SHA3_224(hashInstance)        oqs_Keccak_HashInitializetimes4(hashInstance, 1152,  448, 224, 0x06)

/** Macro to initialize a SHA3-256 instance as specified in the FIPS 202 standard.
  */
#define oqs_Keccak_HashInitializetimes4_SHA3_256(hashInstance)        oqs_Keccak_HashInitializetimes4(hashInstance, 1088,  512, 256, 0x06)

/** Macro to initialize a SHA3-384 instance as specified in the FIPS 202 standard.
  */
#define oqs_Keccak_HashInitializetimes4_SHA3_384(hashInstance)        oqs_Keccak_HashInitializetimes4(hashInstance,  832,  768, 384, 0x06)

/** Macro to initialize a SHA3-512 instance as specified in the FIPS 202 standard.
  */
#define oqs_Keccak_HashInitializetimes4_SHA3_512(hashInstance)        oqs_Keccak_HashInitializetimes4(hashInstance,  576, 1024, 512, 0x06)

/**
  * Function to give input data to be absorbed.
  * @param  hashInstance    Pointer to the hash instance initialized by Keccak_HashInitialize().
  * @param  data        Array of 4 pointers to the input data.
  * @param  databitLen  The number of input bits provided in the input data, must be a multiple of 8.
  * @pre    @a databitlen is a multiple of 8.
  * @return SUCCESS if successful, FAIL otherwise.
  */
int oqs_Keccak_HashUpdatetimes4(oqs_Keccak_HashInstancetimes4 *hashInstance, const oqs_BitSequence **data, oqs_BitLength databitlen);

/**
  * Function to call after all input blocks have been input and to get
  * output bits if the length was specified when calling Keccak_HashInitialize().
  * @param  hashInstance    Pointer to the hash instance initialized by Keccak_HashInitialize().
  * If @a hashbitlen was not 0 in the call to Keccak_HashInitialize(), the number of
  *     output bits is equal to @a hashbitlen.
  * If @a hashbitlen was 0 in the call to Keccak_HashInitialize(), the output bits
  *     must be extracted using the Keccak_HashSqueeze() function.
  * @param  hashval     Pointer to the buffer where to store the output data.
  * @return SUCCESS if successful, FAIL otherwise.
  */
int oqs_Keccak_HashFinaltimes4(oqs_Keccak_HashInstancetimes4 *hashInstance, oqs_BitSequence **hashval);

/**
 * Function to squeeze output data.
 * @param  hashInstance    Pointer to the hash instance initialized by Keccak_HashInitialize().
 * @param  data        Array of 4 pointers to the buffers where to store the output data.
 * @param  databitlen  The number of output bits desired (must be a multiple of 8).
 * @pre    Keccak_HashFinal() must have been already called.
 * @pre    @a databitlen is a multiple of 8.
 * @return SUCCESS if successful, FAIL otherwise.
 */
int oqs_Keccak_HashSqueezetimes4(oqs_Keccak_HashInstancetimes4 *hashInstance, oqs_BitSequence **data, oqs_BitLength databitlen);

#else
#error This requires an implementation of Keccak-p[1600]x4
#endif

#endif
