/**
 * @file Aguaecoco.c
 * @author Santiago Andres (katahridkahid@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

void funcPrint(char *pstring);

int main(void)
{
    funcPrint("Me quiero mata");
    return(0);
}
/**
 * @brief funcPrint
 * funcPrint
 * 
 * \author Santiago Andres
\param pstring This variable receive 
the direction of the string to be printed
\date 02/18/2022

 */

void funcPrint(char *pstring)
{
    printf("%s\n",pstring);
}

