#include "main.h"

/**
 *  _isalpha -  function that checks for alphabetic character
 *  @c: we will check the caracter
 *  Return: 1 for alphabetic character or 0 for always
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);

	}
		return (0);

}
