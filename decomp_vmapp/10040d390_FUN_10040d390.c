
void FUN_10040d390(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    uVar2 = FUN_100409dc0();
    uVar3 = FUN_10040be20(uVar2,*(undefined1 *)(param_1 + 0x44));
    *(undefined1 *)(lVar1 + 0x32) = uVar3;
  }
  return;
}

