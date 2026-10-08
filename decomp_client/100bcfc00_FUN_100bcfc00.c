
void FUN_100bcfc00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (*(long *)(lVar1 + 0x1b8) != 0) {
    FUN_100c586e0();
    lVar1 = *(long *)(param_1 + 0x80);
  }
  if (*(long *)(lVar1 + 0x1c0) != 0) {
    FUN_100bcfc70(param_1);
  }
  uVar2 = FUN_100c59860();
  uVar2 = FUN_100c58530(uVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x1b8) = uVar2;
  FUN_100c58d60(uVar2,9,1,0);
  return;
}

