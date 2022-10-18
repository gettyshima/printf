#include "main.h"

/**
  *printl - handle lenght modifier l
  *@list: the arg
  *Return: the lenght
  */

int printl(va_list list)
{
if (format[i] == '%')                                                       {
                        i++;
                        if (format[i] == 'l')                                                       {
                                i++;
                                switch (format[i])                                                          {                                                                                   case 'u':                                                                           {                                                                                    long unsigned int x = va_arg(list, long unsigned int);                                                                                                 print_num(x);                                                               j++;                                                                        continue;                                                           }                                                                           break;                                                              case 'o':                                                                           {
                                                        long unsigned int x = va_arg(list, long unsigned int);
                                                        str = convertX(x, 8);
                                                        _puts(str);
                                                        j++;
                                                        continue;
                                                }
                                                break;
                                        case 'x':
                                                {
                                                        long unsigned int x = va_arg(list, long unsigned int);

                                                        str = (convertx(x, 16));
                                                        _puts(str);
                                                        j++;
                                                        continue;
                                                }
                                                break;
                                        case 'X':
                                                {
                                                        long unsigned int x = va_arg(list, long unsigned int);
                                                        str = convertX(x, 16);
                                                        _puts(str);
                                                        j++;
                                                        continue;
                                                }
                                                break; }	
