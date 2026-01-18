```C
// Source - https://stackoverflow.com/a
// Posted by Kerrek SB, modified by community. See post 'Timeline' for change history
// Retrieved 2026-01-19, License - CC BY-SA 3.0

int * intdup(int const * src, size_t len)
{
   int * p = malloc(len * sizeof(int));
   memcpy(p, src, len * sizeof(int));
   return p;
}
```
