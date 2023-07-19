/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutasim <moutasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:50:16 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/07/19 13:52:40 by moutasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int count_words(const char *str, char c) {
    int wordCount = 0;
    int isWordStart = 0;

    while (*str) {
        if (*str != c && !isWordStart) {
            isWordStart = 1;
            wordCount++;
        } else if (*str == c) {
            isWordStart = 0;
        }
        str++;
    }

    return wordCount;
}

static char *duplicate_word(const char *str, int startIndex, int endIndex) {
    char *word;
    int i = 0;

    word = malloc((endIndex - startIndex + 1) * sizeof(char));
    while (startIndex < endIndex)
        word[i++] = str[startIndex++];
    word[i] = '\0';

    return word;
}

char **ft_split(const char *str, char c) {
    size_t strLength = strlen(str);
    size_t wordCount = count_words(str, c);
    char **splitResult;

    if (!str || !(splitResult = malloc((wordCount + 1) * sizeof(char *))))
        return NULL;

    size_t i = 0;
    size_t splitIndex = 0;
    int wordStartIndex = -1;

    while (i <= strLength) {
        if (str[i] != c && wordStartIndex < 0) {
            wordStartIndex = i;
        } else if ((str[i] == c || i == strLength) && wordStartIndex >= 0) {
            splitResult[splitIndex++] = duplicate_word(str, wordStartIndex, i);
            wordStartIndex = -1;
        }
        i++;
    }

    splitResult[splitIndex] = NULL;
    return splitResult;
}
