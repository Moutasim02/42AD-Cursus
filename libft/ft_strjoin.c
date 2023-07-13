
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char* str;
	size_t len1 = ft_strlen(s1);
	size_t len2 = ft_strlen(s2);
	int i;
	int j;

	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	
	if (str == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
		str[i++] = s1[i];
	
	j = 0;
	while (s2[j])
		str[i + j++] = s2[j]; 
	
	str[i + j] = '\0';
	return str;
}

// int main()
// {
// 	char* s1 = "Hi ";
// 	char* s2 = "Moutasim!";
// 	printf("s1 + s2: %s", ft_strjoin(s1, s2));
// }