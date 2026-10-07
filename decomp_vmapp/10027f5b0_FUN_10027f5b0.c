
void FUN_10027f5b0(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  while( true ) {
    iVar2 = FUN_10027f620(param_1);
    if (iVar2 == 2) {
      return;
    }
    if (iVar2 == 1) break;
    uVar3 = FUN_1000b3d20(DAT_1011c3698);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
  }
  lVar4 = FUN_100257d80(param_1);
  LOCK();
  piVar1 = (int *)(lVar4 + 0x31c3c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return;
  }
  FUN_1002effe0(*(undefined8 *)(param_1 + 0x78));
  return;
}

