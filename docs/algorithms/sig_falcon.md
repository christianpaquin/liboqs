liboqs nist-branch algorithm datasheet: `sig_falcon`
===================================================

Summary
-------

- **Name**: Falcon
- **Algorithm type**: signature
- **Main cryptographic assumption**: Short Integer Solution (SIS) problem over NTRU lattices.
- **NIST submission URL**: https://csrc.nist.gov/CSRC/media/Projects/Post-Quantum-Cryptography/documents/round-1/submissions/Falcon.zip
- **Submitters (to NIST competition)**: Thomas Prest, Pierre-Alain Fouque, Jeffrey Hoffstein, Paul Kirchner, Vadim Lyubashevsky, Thomas Pornin, Thomas Ricosset, Gregor Seiler, William Whyte and Zhenfei Zhang
- **Submitters' website**: https://falcon-sign.info/
- **Added to liboqs by**: Maxime Anvari

Parameter sets
--------------

| Parameter set    | Security model | Claimed NIST security level | Public key size (bytes) | Secret key size (bytes) | Signature overhead (bytes) |
|------------------|:--------------:|:---------------------------:|:-----------------------:|:-----------------------:|:--------------------------:|
| falcon_512       |  Not specified |              1              |          897            |          4097           |          690               |
| falcon_768       |  Not specified |              3              |          1441           |          6145           |          1077              |
| falcon_1024      |  Not specified |              5              |          1793           |          8193           |          1330              |


Implementation
--------------

- **Source of implementation:** https://falcon-sign.info/impl/falcon.h.html
- **License:** MIT
- **Language:** C
- **Constant-time:** No
- **Architectures supported in liboqs nist-branch**: x86, x64
