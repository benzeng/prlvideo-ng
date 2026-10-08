
void FUN_10037fa80(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_10018ff50(uVar2);
  FUN_10037fac0(param_1,uVar1);
  return;
}

