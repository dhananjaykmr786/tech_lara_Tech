

int main()
{
int *var = (int *) malloc(10000 * sizeof(int));

free (var);

return 0;

}