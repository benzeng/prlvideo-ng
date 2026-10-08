
undefined8
FUN_100c5d720(long *param_1,long *param_2,ulong *param_3,ulong *param_4,undefined1 param_5)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  
  if ((param_2 != (long *)0x0) && (uVar3 = *param_3, uVar3 == *param_4)) {
    if (0x7ffffbff < uVar3) {
      return 0;
    }
    uVar3 = uVar3 + 0x400;
    *param_4 = uVar3;
    if (*param_2 == 0) {
      pvVar2 = (void *)FUN_100bf3540(uVar3 & 0xffffffff,"b_print.c",0x2f3);
      *param_2 = (long)pvVar2;
      if (pvVar2 == (void *)0x0) {
        return 0;
      }
      if (*param_3 != 0) {
        _memcpy(pvVar2,(void *)*param_1,*param_3);
      }
      *param_1 = 0;
    }
    else {
      lVar1 = FUN_100bf36a0(*param_2,uVar3,"b_print.c",0x2fd);
      if (lVar1 == 0) {
        return 0;
      }
      *param_2 = lVar1;
    }
  }
  uVar3 = *param_3;
  if (uVar3 < *param_4) {
    lVar1 = *param_1;
    *param_3 = uVar3 + 1;
    if (lVar1 == 0) {
      lVar1 = *param_2;
    }
    *(undefined1 *)(lVar1 + uVar3) = param_5;
  }
  return 1;
}

