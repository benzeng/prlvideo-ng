
undefined8 FUN_1003e38f0(long param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  
  uVar1 = 0xfffffff1;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    sVar2 = 0x12;
    if (param_3 < 0x13) {
      sVar2 = (ulong)param_3;
    }
    _memcpy(param_2,*(void **)(param_1 + 0x60),sVar2);
    uVar1 = 0;
  }
  return uVar1;
}

