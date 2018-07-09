#include <stdlib.h>

#include <oqs/sig_falcon.h>

/* 
 * NOTE: While Falcon supports compression for private keys, using it results in
 * variable key sizes. In order to be follow the NIST's signature API, which
 * does not specify a parameter for private key length, Falcon's implementators
 * have chosen not to use private key compression. 
 */

#ifdef OQS_ENABLE_SIG_falcon_512

OQS_SIG *OQS_SIG_falcon_512_new() {

	OQS_SIG *sig = malloc(sizeof(OQS_SIG));
	if (sig == NULL) {
		return NULL;
	}
	sig->method_name = OQS_SIG_alg_falcon_512;

	sig->claimed_nist_level = 1;
	sig->euf_cma = false; /* Possibly true, but not indicated in specs. */

	sig->length_public_key = OQS_SIG_falcon_512_length_public_key;
	sig->length_secret_key = OQS_SIG_falcon_512_length_secret_key;
	sig->length_sig_overhead = OQS_SIG_falcon_512_length_sig_overhead;

	sig->keypair = OQS_SIG_falcon_512_keypair;
	sig->sign = OQS_SIG_falcon_512_sign;
	sig->sign_open = OQS_SIG_falcon_512_sign_open;

	return sig;
}

#endif

#ifdef OQS_ENABLE_SIG_falcon_768

OQS_SIG *OQS_SIG_falcon_768_new() {

	OQS_SIG *sig = malloc(sizeof(OQS_SIG));
	if (sig == NULL) {
		return NULL;
	}
	sig->method_name = OQS_SIG_alg_falcon_768;

	sig->claimed_nist_level = 3;
	sig->euf_cma = false; /* Possibly true, but not indicated in specs. */

	sig->length_public_key = OQS_SIG_falcon_768_length_public_key;
	sig->length_secret_key = OQS_SIG_falcon_768_length_secret_key;
	sig->length_sig_overhead = OQS_SIG_falcon_768_length_sig_overhead;

	sig->keypair = OQS_SIG_falcon_768_keypair;
	sig->sign = OQS_SIG_falcon_768_sign;
	sig->sign_open = OQS_SIG_falcon_768_sign_open;

	return sig;
}

#endif

#ifdef OQS_ENABLE_SIG_falcon_1024

OQS_SIG *OQS_SIG_falcon_1024_new() {

	OQS_SIG *sig = malloc(sizeof(OQS_SIG));
	if (sig == NULL) {
		return NULL;
	}
	sig->method_name = OQS_SIG_alg_falcon_1024;

	sig->claimed_nist_level = 5;
	sig->euf_cma = false; /* Possibly true, but not indicated in specs. */

	sig->length_public_key = OQS_SIG_falcon_1024_length_public_key;
	sig->length_secret_key = OQS_SIG_falcon_1024_length_secret_key;
	sig->length_sig_overhead = OQS_SIG_falcon_1024_length_sig_overhead;

	sig->keypair = OQS_SIG_falcon_1024_keypair;
	sig->sign = OQS_SIG_falcon_1024_sign;
	sig->sign_open = OQS_SIG_falcon_1024_sign_open;

	return sig;
}

#endif
