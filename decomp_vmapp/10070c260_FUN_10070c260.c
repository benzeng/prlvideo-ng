
undefined8 FUN_10070c260(long param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x280,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar1 != (void *)0x0) {
    FUN_10070c050(pvVar1,*(undefined4 *)(param_1 + 0x18),param_2);
    *(void **)(param_1 + 0x10) = pvVar1;
    if (*(char *)((long)pvVar1 + 0x270) != '\0') {
      return 1;
    }
    FUN_10070bf30(pvVar1);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return 0;
}

