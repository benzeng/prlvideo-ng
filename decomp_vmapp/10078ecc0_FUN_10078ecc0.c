
undefined1 FUN_10078ecc0(long param_1,uint param_2)

{
  void *pvVar1;
  undefined1 uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    pvVar1 = operator_new__((ulong)param_2,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
      FUN_1008e3970("","IOCommunication",0,"Can\'t allocate memory for buffer!");
    }
    else {
      *(void **)(param_1 + 0x10) = pvVar1;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(ulong *)(param_1 + 0x28) = (ulong)param_2;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

