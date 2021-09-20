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

### integer random
```c
#include <stdio.h>
#include "intlib.h"

void main(){
	printf("integer random: %d\n", intrandom(5, 10));
}
```
output:
```
integer random: 7
```
output2:
```
integer random: 9
```
