#include <stdio.h>
#include <stdbool.h>    // To use bool

#define v 10
#define type(x) _Generic((x),                                                     \
        _Bool: "_Bool",                  unsigned char: "unsigned char",          \
         char: "char",                     signed char: "signed char",            \
    short int: "short int",         unsigned short int: "unsigned short int",     \
          int: "int",                     unsigned int: "unsigned int",           \
     long int: "long int",           unsigned long int: "unsigned long int",      \
long long int: "long long int", unsigned long long int: "unsigned long long int", \
        float: "float",                         double: "double",                 \
  long double: "long double",                   char *: "char *",                 \
       void *: "void *",                         int *: "int *",                  \
      default: "unknown")

int main(void) 
{
    int intVar;
    printf("int size is %d\n", sizeof(intVar));

    // For the use of 0 or positive natural numbers.
    unsigned int uintVar;
    printf(" - unsigned int size is %d\n", sizeof(uintVar));

    short int intVarS;
    printf(" - short int size is %d\n", sizeof(intVarS));
    
    short unsigned int uintVarS;
    printf("\t - short unsigned int size is %d\n", sizeof(uintVarS));
    
    long int intVarL;
    printf(" - long int size is %d\n", sizeof(intVarL));
    
    long long int intVarLL;
    printf(" - long long int size is %d\n", sizeof(intVarLL));

    char charVar;
    printf("\nchar size is %d\n", sizeof(charVar));
    
    float floartVar;
    printf("\nfloat size is %d\n", sizeof(floartVar));

    double doubleVar;
    printf("double size is %d\n", sizeof(doubleVar));

    _Bool boolVar;  // It only takes `0` or `1`
    printf("\nboolean size is %d\n", sizeof(boolVar));   // 엄밀히 따지면 1bit로 충분하지만 byte 이하 단위는 의미가 없어서 그냥 8bit 단위로 셈

    bool boolVar1;   // It can use `true` or `false`
    printf(" - bool size is %d\n", sizeof(boolVar1));

    /**
     * @brief const
     * 
     */
    const int i = 0;
    scanf("%d", &i);
    printf("%d\n\n", i);

    /**
     * @brief Subtle difference in Increment/Decrement and evaluate
     * 
     */
    short int x = 1;
    short int y, z;

    printf("x is %d, y is %d, and a z is %d\n\n", x, y, z);

    y = x++;
    printf("y = x++;\nx is %d, y is %d, and a z is %d\n\n", x, y, z);

    z = ++y;
    printf("z = ++y;\nx is %d, y is %d, and a z is %d\n", x, y, z);

    int num1 = 33;

    float num2 = 4.2f;

    int num3 = num1 - num2;

    printf("%d\n", num3);

    printf("%s", type(v));

    return 0;
}