
char    *get_next_arg(int *argc, char ***argv)
{
    if (*argc == 0)
        return (NULL);
    (*argc)--;
    (*argv)++;
    return (*((*argv) - 1));
}
