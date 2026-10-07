
undefined8 FUN_10022199b(long *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  if ((param_1 != (long *)0x0) && (param_2 != (char *)0x0)) {
    local_20 = 0;
    local_1c = (int)param_1[1] + -1;
    lVar1 = *param_1;
    while (local_20 <= local_1c) {
      iVar2 = (local_20 + local_1c) / 2;
      iVar3 = _strcmp(param_2,*(char **)((long)iVar2 * 0x10 + lVar1));
      if (iVar3 == 0) {
        return *(undefined8 *)((long)iVar2 * 0x10 + lVar1 + 8);
      }
      if (iVar3 < 0) {
        local_1c = iVar2 + -1;
      }
      else {
        local_20 = iVar2 + 1;
      }
    }
  }
  return 0;
}

