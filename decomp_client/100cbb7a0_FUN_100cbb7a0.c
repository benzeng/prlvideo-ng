
undefined8 FUN_100cbb7a0(undefined8 *param_1,long param_2,void *param_3,ulong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  param_1[3] = param_2;
  if (param_3 != (void *)0x0) {
    pvVar1 = (void *)FUN_100bf3540(param_4 & 0xffffffff,"cms_enc.c",0xdb);
    param_1[4] = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    _memcpy(pvVar1,param_3,param_4);
  }
  param_1[5] = param_4;
  if (param_2 != 0) {
    uVar2 = FUN_100bf6fe0(0x15);
    *param_1 = uVar2;
  }
  return 1;
}

