
int FUN_1002a0130(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  pvVar2 = operator_new(0x130,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar2 == (void *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    iVar1 = -0x7ffffffe;
  }
  else {
    FUN_10029af20(pvVar2,param_1 + 8);
    *(void **)(param_1 + 0x38) = pvVar2;
    iVar1 = FUN_100299040(pvVar2);
    if (-1 < iVar1) {
      pvVar2 = operator_new(0x130,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (pvVar2 == (void *)0x0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
        iVar1 = -0x7ffffffe;
      }
      else {
        FUN_10029b3f0(pvVar2,param_1 + 8);
        *(void **)(param_1 + 0x30) = pvVar2;
        iVar1 = FUN_100299040(pvVar2);
        if (-1 < iVar1) {
          return 0;
        }
        if (*(long **)(param_1 + 0x30) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x30) + 8))();
        }
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      FUN_1002997a0(*(undefined8 *)(param_1 + 0x38));
    }
    if (*(long **)(param_1 + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x38) + 8))();
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return iVar1;
}

