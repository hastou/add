/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: quentin
 *
 * Created on 16 février 2016, 20:36
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    if (argc == 3) {
        long result = strtol(argv[1], NULL, 10) + strtol(argv[2], NULL, 10);
        printf("%ld\n", result);
    } else {
        puts("Usage add number1 number2");
    }
    return (EXIT_SUCCESS);
}

