# Int lib
## What is int lib?
Int lib a library for c language. this library for you get length you integer.

## Clone
### Linux
```
git clone https://github.com/behDev/intlib
cd intlib
cp intlib.h /../YOUR_FOLDER_PROJECT
```

## Add
```c
/* ... */
#include "intlib.h"
/* ... */
```

## Usage
### integer length
```c
#include <stdio.h>
#include "intlib.h"

void main(){
   int integerTest = 123456789;
   printf("integerTest length: %d\n", intlen(integerTest));
}
```
output:
```
integerTest length: 9
```

### integer array length
```c
#include <stdio.h>
#include "intlib.h"

void main(){
   int integerArrayTest[10] = {1,2,3,4,5,6,7,8,9};
   printf("integerArrayTest length: %d\n", intarraylen(integerArrayTest));
}
```
output:
```
integerArrayTest length: 10
```

## About
please if showing error, going to issus page or you can editing files and pull request.
