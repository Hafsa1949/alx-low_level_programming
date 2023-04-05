/**
 * wildcmp - compares two strings and returns 1 if they can be considered identical
 * @s1: the first string
 * @s2: the second string, which can contain the special character '*'
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*') {
        if (*(s2 + 1) == '\0')  /* special case: '*' at the end of s2 */
            return (1);
        else if (*s1 == '\0')   /* special case: s1 is already at its end */
            return (0);
        else if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))  /* recursion */
            return (1);
    } else if (*s1 != '\0' && (*s1 == *s2 || *s2 == '?')) {
        return (wildcmp(s1 + 1, s2 + 1));  /* recursion */
    }
    return (*s1 == *s2 && *s1 == '\0');  /* check if s1 and s2 have reached their end */
}
