
ulong FUN_1006ae990(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
  iVar1 = FUN_100319ae0(uVar2);
  if (iVar1 != 1) {
    uVar2 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
    iVar1 = FUN_100319ae0(uVar2);
    if (iVar1 != 4) {
      return 0;
    }
  }
  uVar2 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
  uVar3 = FUN_10031b620(uVar2,0,0);
  return uVar3 ^ 1;
}

