
ulong FUN_100c36ca0(long param_1,void *param_2,ulong param_3)

{
  void *pvVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_100bf3910();
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar2 = 1;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    pvVar1 = (void *)FUN_100bf3540(param_3 & 0xffffffff,"ec_lib.c",0x16e);
    *(undefined8 *)(param_1 + 0x50) = pvVar1;
    uVar2 = 0;
    if (pvVar1 != (void *)0x0) {
      _memcpy(pvVar1,param_2,param_3);
      *(ulong *)(param_1 + 0x58) = param_3;
      uVar2 = param_3;
    }
  }
  return uVar2;
}

