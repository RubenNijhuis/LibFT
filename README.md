# LibFT
 🛠 Custom basic C library used for the Codam Core curriculum

### Quick start

```bash
$ make
```

Copy or include the `libft.h` and `libft.a` files in your project

### Usage

Include libft like this in your `.c` files
```c
#include "libft.h"
```
And compile your project with the `libft.a` file

### Folder structure
```
/ - LibFT
    / - include
        # all .h files can be found here
    / - src
        # the .c files
    / - tests
        # all tests for the functions written in Criterion
    libft.a # will be created after running the make command
```

## Testing
This project has a custom tester written in Criterion. This means that to run this tester the Criterion package must be installed. Running the tester can be done through `make test` this will run the test suite and output the test results in the command line.
