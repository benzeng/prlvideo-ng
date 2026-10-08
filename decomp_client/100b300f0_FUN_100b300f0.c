
undefined8 FUN_100b300f0(long param_1,void *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    return 0x80000516;
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    if (param_2 != (void *)0x0) {
      uVar2 = *param_3;
      if ((ulong)uVar2 != 0) {
        if (uVar1 <= uVar2) {
          _memcpy(param_2,*(void **)(param_1 + 0x20),(ulong)uVar2);
          return 0;
        }
        return 0x80000018;
      }
    }
    *param_3 = uVar1;
    return 0;
  }
  return 0x80000516;
}

