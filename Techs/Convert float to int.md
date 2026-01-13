```C
int convert_to_int(float f) 
{
  union 
  {
    float f;
    int i;
  } u;
  u.f = f;
  return u.i;
}
```

