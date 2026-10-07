
undefined8 FUN_10041bf00(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0x640);
  iVar1 = *(int *)((long)pvVar2 + 0x10);
  if (pvVar2 != (void *)0x0) {
    _free(pvVar2);
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  if (iVar1 == 0) {
    FUN_100416cc0(param_1);
  }
  else {
    FUN_10041cf30();
  }
  return 1;
}

