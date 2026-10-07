
void FUN_10078ef20(long param_1,size_t param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  
  uVar4 = 0xffffffffffffffff;
  if (-2 < (long)param_2) {
    uVar4 = param_2;
  }
  pvVar2 = operator_new__(uVar4,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)(param_1 + 0x10);
    sVar3 = *(size_t *)(param_1 + 0x18);
    if (sVar3 != 0) {
      if ((long)param_2 < (long)sVar3) {
        sVar3 = param_2;
      }
      _memcpy(pvVar2,pvVar1,sVar3);
    }
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    *(void **)(param_1 + 0x10) = pvVar2;
    *(size_t *)(param_1 + 0x18) = param_2;
    *(size_t *)(param_1 + 0x28) = param_2;
  }
  return;
}

