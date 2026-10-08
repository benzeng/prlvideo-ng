
int _xmlPatternMatch(long param_1,long param_2)

{
  int iVar1;
  int local_2c;
  long local_20;
  
  if ((param_1 == 0) || (local_20 = param_1, param_2 == 0)) {
    local_2c = -1;
  }
  else {
    for (; local_20 != 0; local_20 = *(long *)(local_20 + 0x10)) {
      iVar1 = FUN_10097e198(local_20,param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    local_2c = 0;
  }
  return local_2c;
}

