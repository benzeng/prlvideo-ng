
void FUN_100be6ca0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    if (lVar2 == *(long *)(param_1 + 0x18)) {
      uVar1 = FUN_100c592a0();
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      lVar2 = *(long *)(param_1 + 0x20);
    }
    FUN_100c586e0(lVar2);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

