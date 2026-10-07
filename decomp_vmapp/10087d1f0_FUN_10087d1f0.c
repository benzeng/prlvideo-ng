
long FUN_10087d1f0(undefined1 *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  
  lVar1 = 0;
  lVar2 = 0;
  if (1 < param_3) {
    do {
      lVar2 = lVar1;
      if (param_2[lVar2] == '\0') {
        param_2 = param_2 + lVar2;
        param_1 = param_1 + lVar2;
        goto LAB_10087d234;
      }
      param_1[lVar2] = param_2[lVar2];
      param_3 = param_3 - 1;
      lVar1 = lVar2 + 1;
    } while (1 < param_3);
    param_2 = param_2 + lVar2 + 1;
    param_1 = param_1 + lVar2 + 1;
    lVar2 = lVar2 + 1;
  }
  if (param_3 != 0) {
LAB_10087d234:
    *param_1 = 0;
  }
  sVar3 = _strlen(param_2);
  return sVar3 + lVar2;
}

