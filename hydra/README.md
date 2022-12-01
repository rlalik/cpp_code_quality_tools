Four extensions to HADES makefiles to add extra code sanitizers:
* address sanitizer (include leak sanitizer)
* memory sanitizer (only with clang, tricky to use)
* undefined behaviour sanitizer
* leak sanitizer

# Usage

These Makefiles are used on top of your project's `Makefile`. COpy them to you
project directory where `Makefile` is and run (simple version):
```bash
make -f Makefile_addrsan
```
In case that it is required to make full rebuild, you can do (extended
version):
```bash
make -f Makefile_addrsan clean build install
```

Each sanitizer will create its own `build_XXX` directory and will track the
latest change, thus running simple version is enough.

Each sanitizer will produce binary defined with `APP_NAME` of the main
`Makefile` so you can always use the same commadn to test it.
