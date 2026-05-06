# Tensor Data Cdc Hub Walkthrough

I use this file as a small checklist before changing the C++ implementation.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 154 | ship |
| stress | lineage depth | 173 | ship |
| edge | partition skew | 103 | hold |
| recovery | quality gap | 156 | ship |
| stale | schema drift | 170 | ship |

Start with `stress` and `edge`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

`stress` is the optimistic case; use it to make sure the scoring path still rewards strong signal.
