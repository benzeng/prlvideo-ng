
void FUN_100401f00(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = QTime::elapsed();
  uVar2 = iVar1 * DAT_1011c8490;
  if (99 < uVar2) {
    uVar3 = 100;
    if (uVar2 < 0x2774) {
      uVar3 = uVar2 / 100;
    }
    FUN_1007685b0(uVar3);
    if (0 < *(long *)(*(long *)(param_1 + 0xa8) + 0xf0)) {
      QTime::restart();
      return;
    }
  }
  return;
}

