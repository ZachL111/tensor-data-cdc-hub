# tensor-data-cdc-hub

`tensor-data-cdc-hub` is a C++ project in data engineering. Its focus is to build a C++ toolkit that studies cdc behavior through safe and unsafe fixtures, with remediation hints and local-only command execution.

## Why I Keep It Small

This is intentionally local and self-contained so it can be inspected without credentials, services, or seeded history.

## Tensor Data Cdc Hub Review Notes

For a quick review, compare `lineage depth` with `partition skew` before reading the middle cases.

## Included Behavior

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/tensor-data-cdc-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `lineage depth` and `partition skew`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Internal Model

The fixture data drives the tests. The code stays thin, while `metadata/domain-review.json` and `config/review-profile.json` explain what each case is meant to protect.

The C++ addition stays small enough to inspect in one sitting.

## Try It Locally

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Validation

The same command runs the local verification path. The highest-scoring domain case is `stress` at 173, which lands in `ship`. The most cautious case is `edge` at 103, which lands in `hold`.

## Scope

The fixture set is small enough to audit by hand. The next useful expansion is malformed input coverage, not extra surface area.
