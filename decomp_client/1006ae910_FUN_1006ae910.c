
ulong FUN_1006ae910(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
  iVar2 = FUN_100319ae0(uVar3);
  if (iVar2 != 1) {
    uVar3 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
    iVar2 = FUN_100319ae0(uVar3);
    if (iVar2 != 3) {
      return 0;
    }
  }
  uVar3 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
  uVar3 = FUN_100319c50(uVar3);
  cVar1 = FUN_100330ac0(uVar3);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
    uVar4 = FUN_10031b620(uVar3,0,0);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}

