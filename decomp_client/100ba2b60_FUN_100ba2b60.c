
long FUN_100ba2b60(long param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      cVar1 = *(char *)(param_1 + uVar2);
      if (cVar1 == '\0') {
        return 0;
      }
      if ((cVar1 == '\t') || (cVar1 == ' ')) {
        return param_1 + uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return 0;
}

