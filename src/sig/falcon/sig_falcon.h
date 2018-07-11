#ifndef __OQS_SIG_FALCON_H
#define __OQS_SIG_FALCON_H

#include <oqs/oqs.h>

#ifdef OQS_ENABLE_SIG_falcon_512

/* Sizes from file upstream/Optimized_Implementation/falcon512/api.h */

#define OQS_SIG_falcon_512_length_public_key 897
#define OQS_SIG_falcon_512_length_secret_key 4097
#define OQS_SIG_falcon_512_length_sig_overhead 690

OQS_SIG *OQS_SIG_falcon_512_new();

extern OQS_STATUS OQS_SIG_falcon_512_keypair(uint8_t *public_key, uint8_t *secret_key);
extern OQS_STATUS OQS_SIG_falcon_512_sign(uint8_t *signed_message, size_t *signed_message_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
extern OQS_STATUS OQS_SIG_falcon_512_sign_open(uint8_t *message, size_t *message_len, const uint8_t *signed_message, size_t signed_message_len, const uint8_t *public_key);

#endif

#ifdef OQS_ENABLE_SIG_falcon_768

/* Sizes from file upstream/Optimized_Implementation/falcon768/api.h */

#define OQS_SIG_falcon_768_length_public_key 1441
#define OQS_SIG_falcon_768_length_secret_key 6145
#define OQS_SIG_falcon_768_length_sig_overhead 1077

OQS_SIG *OQS_SIG_falcon_768_new();

extern OQS_STATUS OQS_SIG_falcon_768_keypair(uint8_t *public_key, uint8_t *secret_key);
extern OQS_STATUS OQS_SIG_falcon_768_sign(uint8_t *signed_message, size_t *signed_message_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
extern OQS_STATUS OQS_SIG_falcon_768_sign_open(uint8_t *message, size_t *message_len, const uint8_t *signed_message, size_t signed_message_len, const uint8_t *public_key);

#endif

#ifdef OQS_ENABLE_SIG_falcon_1024

/* Sizes from file upstream/Optimized_Implementation/falcon1024/api.h */

#define OQS_SIG_falcon_1024_length_public_key 1793
#define OQS_SIG_falcon_1024_length_secret_key 8193
#define OQS_SIG_falcon_1024_length_sig_overhead 1330

OQS_SIG *OQS_SIG_falcon_1024_new();

extern OQS_STATUS OQS_SIG_falcon_1024_keypair(uint8_t *public_key, uint8_t *secret_key);
extern OQS_STATUS OQS_SIG_falcon_1024_sign(uint8_t *signed_message, size_t *signed_message_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
extern OQS_STATUS OQS_SIG_falcon_1024_sign_open(uint8_t *message, size_t *message_len, const uint8_t *signed_message, size_t signed_message_len, const uint8_t *public_key);

#endif

#endif
