# Review Journal

The repository goal stays the same: build a C++ toolkit that studies cdc behavior through safe and unsafe fixtures, with remediation hints and local-only command execution. This note explains the added review angle.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 154, lane `ship`
- `stress`: `lineage depth`, score 173, lane `ship`
- `edge`: `partition skew`, score 103, lane `hold`
- `recovery`: `quality gap`, score 156, lane `ship`
- `stale`: `schema drift`, score 170, lane `ship`

## Note

This file is intentionally plain so the fixture remains the source of truth.
