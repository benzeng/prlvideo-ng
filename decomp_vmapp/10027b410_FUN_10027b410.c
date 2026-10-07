
bool FUN_10027b410(int *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(char *)((long)param_1 + 10) == '\0') {
    bVar1 = param_1[1] != *param_1;
  }
  return bVar1;
}

