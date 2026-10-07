
undefined1 FUN_1007dc810(long param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined1 uVar3;
  
  param_2 = param_2 * 2;
  uVar3 = 1;
  if (*(int *)(param_1 + 4) < param_2) {
    pvVar1 = *(void **)(param_1 + 0x10);
    if (pvVar1 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      pvVar2 = _malloc((long)param_2 << 5);
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        _memcpy(pvVar2,pvVar1,(long)*(int *)(param_1 + 8) << 5);
        _free(pvVar1);
        *(void **)(param_1 + 0x10) = pvVar2;
        *(int *)(param_1 + 4) = param_2;
      }
    }
  }
  return uVar3;
}

