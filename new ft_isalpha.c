

int ft_isalnum(int c)
{

	if((c>= 65 && c<=90) || (c>=97 && c<=122) || (c>= 48 && c<=57))
		return (1);
	else
		return (0);
}


int ft_isprint(int c)
{
	if(c>= 21 && c<=126)
		return (1);void *s, 
	else
		return (0);
}

int ft_strlen(char *s)
{
	int i;
	
	i = 0;
	
	
	while(s[i])
		i++;
	return(i);
}


char *ft_memset(char *s, int c, int n)
{
	int i;
	
	i=0;
	while(s[i] =! '\0' || i<=7)
	{
		s[i] = c;
		i++;
	}	
}

#include <stdio.h>
#include <stdlib.h>
void main()
{
	char *str ="dsfklòsdjaàj";
	printf("%s", ft_memset(str, '2',5));


}


/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	int i = 0;
	while (i < argc) i++;		
	printf("%d", ft_atoi(argv[1]));
//	ft_putstr(argv[1]);
	//ft_putnbr(atoi(argv[1]));
	return (0);
}//*/

