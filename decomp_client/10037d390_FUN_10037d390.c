
void FUN_10037d390(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar1 = FUN_100323e00(uVar1);
  lVar2 = FUN_100319390(uVar1);
  if (lVar2 != 0) {
    FUN_10018c220(lVar2,2,0);
    return;
  }
  return;
}

