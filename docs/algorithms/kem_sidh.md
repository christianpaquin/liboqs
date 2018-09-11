liboqs master branch algorithm datasheet: `kem_sidh`
====================================================

Summary
-------

- **Name**: SIDH
- **Algorithm type**: key exchange
- **Note**: SIDH is as ephemeral KEX related to the SIKE KEM (sike.org) submitted to NIST
- **Main cryptographic assumption**: (supersingular) isogeny walk problem
- **Submitters' website**: https://github.com/Microsoft/PQCrypto-SIDH
- **Added to liboqs by**: Christian Paquin

Parameter sets
--------------

| Parameter set   | Security model | Claimed NIST security level | Public key size (bytes) | Secret key size (bytes) | Ciphertext size (bytes) | Shared secret size (bytes) |
|-----------------|:--------------:|:---------------------------:|:-----------------------:|:-----------------------:|:-----------------------:|:--------------------------:|
| Sidh-p503       |     IND-CCA    |              1              |            378          |             32          |            378          |            126             |
| Sidh-p751       |     IND-CCA    |              3              |            564          |             48          |            564          |            188             |

Implementation
--------------

- **Source of implementation:** https://github.com/Microsoft/PQCrypto-SIDH
- **License:** MIT License
- **Language:** C
- **Constant-time:** Yes
- **Architectures supported in liboqs master branch**: x86, x64

Additional comments
-------------------

