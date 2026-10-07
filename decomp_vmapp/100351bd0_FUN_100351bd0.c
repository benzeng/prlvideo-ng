
void FUN_100351bd0(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0xc0);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 200);
    if (pvVar2 != pvVar1) {
      *(void **)(param_1 + 200) =
           (void *)(~((ulong)((long)pvVar2 + (-3 - (long)pvVar1)) / 3) * 3 + (long)pvVar2);
    }
    operator_delete(pvVar1);
  }
  FUN_10039f8f0(param_1);
  return;
}

