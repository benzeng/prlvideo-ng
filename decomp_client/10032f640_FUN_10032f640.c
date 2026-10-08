
void FUN_10032f640(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x38);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100a4dc20(pvVar1,uVar2);
  *(void **)(param_1 + 0x48) = pvVar1;
  return;
}

