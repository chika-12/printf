#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h> 
#include <stdint.h>

#define UNUSED(y) ((void)(y)) 
/*initializes a connection structure and return it*/

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1    /* for free/deletion buffer*/
  
#define NULL_STRING "(null)"   /* for checking format string*/
#define PARAMETERS_INIT {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0}

/*for making the unsigned int all 0 till the user input one of them*/

/*SIZE*/
#define CONVERT_UNSIGNED 2
#define CONVERT_LOWERCASE 1


/**
 * struct parameters - parameters struct to be passed.
 * @space_f:if space flag is specified On it.
 * @plus_f: if plus flag is specified On it.
 * @hashtag_f:if hashtag flag is specified On it.
 * @minus_f:if minus flag is specified On it.
 * @zero_f:if zero flag is specified On it.
 * 
 * "for specific amount of equivalent bits to represent flags"
 * @unsign: a flg - unsigned value 
 * 
 * @width:minimum - maximum field width specified to print 
 * @precision: field percision specified tells 
 * precision is set for an unsigned int.
 * 
 * @specifier: the data type to print formatted output , c,h ,n,d,d,x..etc
 * @h_short: type of length if the h (short) modifier/
 * flg is specified, 0 default, -1 per h,
 * @l_long: type of lenght if the l (long) modifier/
 * flag is specified, +1 per l,
*/
  /* boolen value*/
 typedef struct parameters {
	/* depends on user input to convert it to 1*/
    unsigned int unsign        : 1;
	unsigned int space_f       :1;
    unsigned int plus_f       :1;
    unsigned int hashtag_f    :1;
    unsigned int minus_f      :1;     
	unsigned int zero_f        :1;

    unsigned int width          :1;
    unsigned int precision       :1;

    unsigned int h_short      :1;
	unsigned int l_long      :1;

 }parameters_t;  /* params type*/

/**
 *  struct specifier - struct token defining 
 * the specifier with its function"
 * 
 * @specifier: format token representing a conversion specifier
 * @fu: a pointer to a conversion function to be append to specifier 
 * 
*/
typedef struct  specifier_s {
	char *specifier;          /* for print a char*/
	int (*fu) (va_list, parameters_t *);
} specifier_t;

/** prams and handlers*/
void init_param(parameters_t *param, va_list opi); 

/**_printf.c*/
int _printf(const char *format, ...);

    /*********all functions****/
/*_put.c ex*/
int _putchar(int v);
int _puts(char *rts); /*input a full string to pass a letter by letter to _putchar*/

/*print_functions.c prints format spicifier*/
int print_char(va_list opi, parameters_t *param);
int print_percent(va_list opi, parameters_t *param);
int print_int(va_list opi, parameters_t *param);
int print_string(va_list opi, parameters_t  *param);
int print_Ss(va_list opi, parameters_t *param);

int print_init(va_list opi, parameters_t *param);

/*number.c functions*/
char *convert_S(long int num1, int base, int flags, parameters_t *param);
int print_unsignedl(va_list opi, parameters_t *param);
int print_addressp(va_list opi, parameters_t *param);

/* spicifier.c to handle specifiers*/

int (*get_specifier(char *x))(va_list opi, parameters_t *param);
int get_print_fnc(char *x, va_list opi, parameters_t *param);
int get_flags(char *x, parameters_t *param);
char *get_w(char *x, parameters_t *param , va_list opi);
int get_modifier(char *x, parameters_t *param);

/*for string*/
char *get_precision(char *v, parameters_t *param , va_list opi);

/*Convert_numbers.c functions*/
int print_hexa(va_list opi, parameters_t *param);
int print_octal(va_list opi, parameters_t *param);
int print_binary(va_list opi, parameters_t *param);
int print_HEXA(va_list opi, parameters_t *param);

/**simpleprints.c
*Functions to print string in reverse*/

int print_from_to(char *addres, char *block, char *except);
int print_reve(va_list opi, parameters_t *param);

/*Function to print a string in rot 13*/
int print_rot13s(va_list opi, parameters_t *param);


/*print_num.c*/
int is_digits(int var);
int s_strlen(char *svr);
int print_numunsignd(char *svr, parameters_t *param);
int print_number_r_shift(char *x, parameters_t *param);
int print_number_l_shift(char *x, parameters_t *param);

#endif

