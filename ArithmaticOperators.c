/*
 * @Author: InsaneHe 14180645+insanehe@user.noreply.gitee.com
 * @Date: 2024-08-22 10:38:34
 * @LastEditors: InsaneHe 14180645+insanehe@user.noreply.gitee.com
 * @LastEditTime: 2024-08-22 10:56:45
 * @FilePath: \C Projects\C Programming Full Course for free by Bro Code\arithmaticoperators.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

int main(){

    // arithmetic operators:
    /*
    1. + (addition)
    2. - (subtraction)
    3. * (multiplication)
    4. / (division)
    5. % (modulus)
    6. ++ (increment)
    7. -- (decrement)
    */

    int x = 5;
    int y = 2;

    int z = x + y; // If we use "z = x / y" here, it will give us 2 instead of 2.5 because z is stored in an integer form
    // To fix the problem mentioned above, we can use "float z = x / y;" instead of "int z = x / y;"
    printf("%d\n", z); // If we want to print z as 2.500000, we can use "float z = x / (float) y;" and then "printf("%f", z);"

    x++; // This means that x is increased by 1
    return 0;
}