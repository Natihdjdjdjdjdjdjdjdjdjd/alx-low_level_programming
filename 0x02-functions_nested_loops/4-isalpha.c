#include "main.h"

/**
 *  _isalpha -  function that checks for alphabetic character
 *  @x: we will check the caracter
 *  Return: 1 for alphabetic character or 0 for always
 */
int _isalpha(int x)
{
	if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
	{
		return (1);

	}
		return (0);

}
