
undefined4 FUN_1009077d0(int *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *local_10;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    return 0xffffffff;
  }
  if (*param_1 == 2) {
    lVar2 = FUN_100903e63(param_2);
    if (lVar2 == 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_100906c53(param_1,lVar2,param_2,0);
    if (iVar1 < 0) {
      (*(code *)_xmlFree)(lVar2);
      return 0xffffffff;
    }
    (*(code *)_xmlFree)(lVar2);
  }
  else {
    lVar2 = FUN_100902893(1,0,0,param_2,DAT_102279410,0);
    local_10 = *(long **)(param_1 + 0x1c);
    if (local_10 == (long *)0x0) {
      *(long *)(param_1 + 0x1c) = lVar2;
    }
    else {
      for (; *local_10 != 0; local_10 = (long *)*local_10) {
      }
      *local_10 = lVar2;
    }
  }
  return 0;
}

